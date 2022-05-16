#include "Storage.h"

namespace ZKN
{
    Storage::Storage() {}
    Storage::Storage(int count,Reader *readers)
    {
        readers = new Reader[count];
        this->count = count;

        for (int i = 0; i < count; i++)
        {
            this->readers[i] = readers[i];
        }
    }

    void Storage::print()
    {
        for(int i = 0; i < count; i++)
        {
            readers[i].print();
        }
    }
}