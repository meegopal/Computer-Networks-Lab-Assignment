//
// Generated file, do not edit! Created by nedtool 4.6 from DLL_PKT.msg.
//

#ifndef _DLL_PKT_M_H_
#define _DLL_PKT_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>DLL_PKT.msg:15</tt> by nedtool.
 * <pre>
 * //
 * // This program is free software: you can redistribute it and/or modify
 * // it under the terms of the GNU Lesser General Public License as published by
 * // the Free Software Foundation, either version 3 of the License, or
 * // (at your option) any later version.
 * // 
 * // This program is distributed in the hope that it will be useful,
 * // but WITHOUT ANY WARRANTY; without even the implied warranty of
 * // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * // GNU Lesser General Public License for more details.
 * // 
 * // You should have received a copy of the GNU Lesser General Public License
 * // along with this program.  If not, see http://www.gnu.org/licenses/.
 * //
 * packet DLL_PKT
 * {
 *     int id;
 *     int type;
 *     double initialTime;
 *     double finalTime;
 * }
 * </pre>
 */
class DLL_PKT : public ::cPacket
{
  protected:
    int id_var;
    int type_var;
    double initialTime_var;
    double finalTime_var;

  private:
    void copy(const DLL_PKT& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DLL_PKT&);

  public:
    DLL_PKT(const char *name=NULL, int kind=0);
    DLL_PKT(const DLL_PKT& other);
    virtual ~DLL_PKT();
    DLL_PKT& operator=(const DLL_PKT& other);
    virtual DLL_PKT *dup() const {return new DLL_PKT(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getId() const;
    virtual void setId(int id);
    virtual int getType() const;
    virtual void setType(int type);
    virtual double getInitialTime() const;
    virtual void setInitialTime(double initialTime);
    virtual double getFinalTime() const;
    virtual void setFinalTime(double finalTime);
};

inline void doPacking(cCommBuffer *b, DLL_PKT& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DLL_PKT& obj) {obj.parsimUnpack(b);}


#endif // ifndef _DLL_PKT_M_H_

