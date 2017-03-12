//
// Generated file, do not edit! Created by nedtool 4.6 from P_PDU.msg.
//

#ifndef _P_PDU_M_H_
#define _P_PDU_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>P_PDU.msg:16</tt> by nedtool.
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
 * packet P_PDU
 * {
 *     int id;
 *     string data;
 * }
 * </pre>
 */
class P_PDU : public ::cPacket
{
  protected:
    int id_var;
    opp_string data_var;

  private:
    void copy(const P_PDU& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const P_PDU&);

  public:
    P_PDU(const char *name=NULL, int kind=0);
    P_PDU(const P_PDU& other);
    virtual ~P_PDU();
    P_PDU& operator=(const P_PDU& other);
    virtual P_PDU *dup() const {return new P_PDU(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getId() const;
    virtual void setId(int id);
    virtual const char * getData() const;
    virtual void setData(const char * data);
};

inline void doPacking(cCommBuffer *b, P_PDU& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, P_PDU& obj) {obj.parsimUnpack(b);}


#endif // ifndef _P_PDU_M_H_

