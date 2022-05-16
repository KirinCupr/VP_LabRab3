#ifndef SEM2_LABRAB3_STORAGE_H
#define SEM2_LABRAB3_STORAGE_H
#include "D:\Project_C++\Sem2_LabRab3\Reader\Reader.h"
namespace ZKN
{
    class Storage
    {
    public:
        Storage();
        Storage(int count, Reader *readers);
        void print();
    private:
        int count{};
        Reader *readers;
    };
}



#endif //SEM2_LABRAB3_STORAGE_H
