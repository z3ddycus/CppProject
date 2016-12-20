//OutIm.h

#ifndef OutIm_H
#define OutIm_H

class OutIm{
public:
    virtual void notice() const=0;
};

class OutTr : public virtual OutIm{
public:
    void notice() const;
};

class OutBr : public virtual OutIm{
public:
    void notice() const;
};

#endif
//-------------------------------------------------------------

