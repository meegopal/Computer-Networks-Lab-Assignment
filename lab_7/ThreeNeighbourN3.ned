//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package lab7;

module ThreeNeighbourN3
{
     parameters:
        int nodeid;
        int noOfPackets;
        int source;
        int destin;
    gates:
        input Fn1;
        input Fn2;
        input Fn5;
        output Tn1;
        output Tn2;
        output Tn5;
        
    submodules:
        al: ALayer {
            id = nodeid;
            numPackets=noOfPackets;
            src=source;
            dest=destin;
            @display("p=320,241");
        }
        dll1: DlLayer {
            id = nodeid;
            @display("p=183,108");
        }
        dll2: DlLayer {
            id = nodeid;
            @display("p=144,156");
        }
        
        dll5: DlLayer {
            id = nodeid;
            @display("p=131,333");
        }
        nw: Network {
            id = nodeid;
            @display("p=256,217");
        }
        pl1: PLayer {
            id = nodeid;
            @display("p=61,95");
        }
        pl2: PLayer {
            id = nodeid;
            @display("p=61,156");
        }
        pl5: PLayer {
            id = nodeid;
            @display("p=61,333");
        }

    connections:
        al.Tnw --> nw.Fal;
        nw.Tdl1 --> dll1.Fnw;
        nw.Tdl2 --> dll2.Fnw;
        nw.Tdl5 --> dll5.Fnw;
        dll1.Tpl --> pl1.Fdl;
        dll2.Tpl --> pl2.Fdl;
        dll5.Tpl --> pl5.Fdl;
        pl1.Fnode <-- Fn1;
        pl1.Tnode --> Tn1;
        pl2.Fnode <-- Fn2;
        pl2.Tnode --> Tn2;
        pl5.Fnode <-- Fn5;
        pl5.Tnode --> Tn5;
        pl1.Tdl --> dll1.Fpl;
        pl2.Tdl --> dll2.Fpl;
        
        pl5.Tdl --> dll5.Fpl;
        dll1.Tnw --> nw.Fdl1;
        dll2.Tnw --> nw.Fdl2;
   
        dll5.Tnw --> nw.Fdl5;
        nw.Tal --> al.Fnw;
}
