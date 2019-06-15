// Copyright 2019 Aman Mehara
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

struct node {
    int value;
    node* next;
};

bool has_cycle(node* head) {
    node* tortoise = head;
    node* hare = head;
    while (hare != nullptr) {
        tortoise = tortoise->next;
        hare = hare->next;
        if (hare == nullptr) {
            break;
        }
        hare = hare->next;
        if (tortoise == hare) {
            return true;
        }
    }
    return false;
}
