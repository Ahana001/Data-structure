//  g++ index.cpp -o index
//  ./index
//  ceil  result <= x
#include <iostream>
#include <queue>
#include <string>

class TicketQueue
{
private:
    std::queue<std::string> queue;

public:
    bool isEmpty() const
    {
        return queue.empty();
    }

    void enqueue(const std::string &item)
    {
        queue.push(item);
    }

    std::string dequeue()
    {
        if (!isEmpty())
        {
            std::string front = queue.front();
            queue.pop();
            return front;
        }
        return "";
    }

    size_t size() const
    {
        return queue.size();
    }

    void display() const
    {
        std::queue<std::string> tempQueue = queue;
        std::cout << "[ ";
        while (!tempQueue.empty())
        {
            std::cout << tempQueue.front() << " ";
            tempQueue.pop();
        }
        std::cout << "]" << std::endl;
    }
};

void simulateTicketingSystem()
{
    TicketQueue ticketQueue;

    // Simulate people joining the queue
    std::string people[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    for (const std::string &person : people)
    {
        ticketQueue.enqueue(person);
        std::cout << person << " has joined the queue." << std::endl;
    }

    std::cout << "\nQueue after everyone has joined:" << std::endl;
    ticketQueue.display();

    // Process the queue
    while (!ticketQueue.isEmpty())
    {
        std::string person = ticketQueue.dequeue();
        std::cout << person << " is buying a ticket." << std::endl;
    }

    std::cout << "\nQueue after processing:" << std::endl;
    ticketQueue.display();
}

int main()
{
    simulateTicketingSystem();
    return 0;
}
