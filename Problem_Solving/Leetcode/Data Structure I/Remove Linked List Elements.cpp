class Solution
{
public:
	ListNode* removeElements(ListNode *head, int val)
	{
		vector<int> vec;
		while (head)
		{
			if (head->val != val)
			{
				vec.push_back(head->val);
			}

			head = head->next;
		}
        head=NULL;
        ListNode * temp=new ListNode();

		int i = 0;
		while (i<vec.size())
		{
			ListNode *current = new ListNode();
			current->val=vec[i];
            i++;
			current->next = NULL;
			if (head == NULL)
			{
				head = current;
			}
			else
			{
				temp = head;
				while (temp->next != NULL)
				{
					temp = temp->next;
				}

				temp->next = current;
			}
		}

		return head;

	}
};
