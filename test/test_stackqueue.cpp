#include "StackQueue.h"

#include <gtest.h>

TEST(TStack, can_create_stack)
{
	ASSERT_NO_THROW(TStackOnList<int> st);
}

TEST(TStack, can_copy_stack)
{
	TStackOnList<int> st;
	st.push(15);
	ASSERT_NO_THROW(TStackOnList<int> st1(st));
}


TEST(TStack, pop)
{
	TStackOnList<int> MyList;
	MyList.push(1);
	MyList.push(2);
	MyList.push(3);
	MyList.push(6);

	EXPECT_EQ(6, MyList.pop());
}

TEST(TStack, push)
{
	TStackOnList<int> List;
	List.push(11);
	List.push(2);
	List.push(4);

	EXPECT_EQ(4, List.pop());
}

TEST(TStack, IsEmpty)
{
	TStackOnList<int> A;
	EXPECT_EQ(1, A.IsEmpty());
}

TEST(TStack, IsFull)
{
	TStackOnList<int> st;
	EXPECT_EQ(0, st.IsFull());
}


TEST(TQueue, can_create_queue)
{
	ASSERT_NO_THROW(TQueueOnList<int> A);
}

TEST(TQueue, can_copy_queue)
{
	TQueueOnList<int> A;
	A.push(123);
	ASSERT_NO_THROW(TQueueOnList<int> B(A));
}

TEST(TQueue, push)
{
	TQueueOnList<int> A;
	A.push(1);
	A.push(2);
	EXPECT_EQ(1, A.pop());
}

TEST(TQueue, pop)
{
	TQueueOnList<int> queue;
	queue.push(1);
	queue.push(2);
	

	EXPECT_EQ(1, queue.pop());
}

TEST(TQueue, IsEmpty)
{
	TQueueOnList<int> qu;
	EXPECT_EQ(1, qu.IsEmpty());
}

TEST(TQueue, IsFull)
{
	TQueueOnList<int> qu;
	EXPECT_EQ(0, qu.IsFull());
}
