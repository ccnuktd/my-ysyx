#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include <lcthw/list_algos.h>

static void swap(ListNode *a, ListNode *b) {
	void *temp = a->value;
	a->value = b->value;
	b->value = temp;
}

int List_bubble_sort(List *list, List_compare cmp) {
	if (list == NULL) return -1;
	
	if (list->count == 1) return 0;

	int count = list->count;
	for (int i = 0; i < count - 1; i ++) {
		ListNode *node = list->first->next;
		bool flag = 0;
		while (node != NULL) {
			if (cmp(node->prev->value, node->value) > 0) {
				swap(node, node->prev);
				flag = 1;
			}
			node = node->next;
		}
		if (!flag) break;
	}
	
	return 0;
}

static void merge(void **arr, int left, int right, int mid, List_compare cmp) {
	if (left >= right) return;
	
	void **arr_temp = (void **)malloc(sizeof(void *) * (right - left + 1));
	int l = left, r = mid + 1, temp_idx = 0;
	while (l <= mid && r <= right) {
		if (cmp(arr[l], arr[r]) < 0) arr_temp[temp_idx ++] = arr[l ++];
		else arr_temp[temp_idx ++] = arr[r ++];
	}

	while (l <= mid) arr_temp[temp_idx ++] = arr[l ++];
	while (r <= right) arr_temp[temp_idx ++] = arr[r ++];

	while (--temp_idx >= 0) arr[left + temp_idx] = arr_temp[temp_idx];

	free(arr_temp);
}

static void split(void **arr, int left, int right, List_compare cmp) {
	if (left >= right) return;

	int mid = left + right >> 1;
	
	split(arr, left, mid, cmp);
	split(arr, mid + 1, right, cmp);
	merge(arr, left, right, mid, cmp);
}

List *List_merge_sort(List *list, List_compare cmp) {
	if (list == NULL) return NULL;
	if (list->count == 1) return list;

	void **arr = (void **)malloc(sizeof(void *) * list->count);

	ListNode *node = list->first;
	for (int i = 0; i < list->count; i ++) {
		assert(node != NULL);
		arr[i] = node->value;
		node = node->next;
	}

	split(arr, 0, list->count - 1, cmp);

	List *ret = List_create();
	for (int i = 0; i < list->count; i ++) {
		List_push(ret, arr[i]);
	}

	free(arr);

	return ret;
}