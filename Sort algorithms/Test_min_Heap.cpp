#include<iostream>

using namespace std;

int N;
void min_heap(int A[], int i) {
// Chỉ số của phần tử nhỏ nhất trong bộ ba: nút hiện tại, nút con bên trái, và nút con bên phải của nó
    int smallest;
    int left = 2 * i; // Vị trí của nút con bên trái
    int right = 2 * i + 1; // Vị trí của nút con bên phải
    if (left <= N and A[left] < A[i]) // N là số phần tử trong mảng, biến toàn cục
        smallest = left;
    else
        smallest = i;
    if (right <= N and A[right] < A[smallest])
        smallest = right;
    if (smallest != i) {
// Thực hiện đổi chỗ hai phần tử nếu giá trị của nút cha lớn hơn nút con
        swap(A[i], A[smallest]);
// Gọi đệ quy nút tại vị trí mới
        min_heap(A, smallest);
    }
}