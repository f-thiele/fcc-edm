#include "VertexObj.h"


namespace fcc {
VertexObj::VertexObj() :
    ObjBase{{podio::ObjectID::untracked,podio::ObjectID::untracked},0}
    ,data()
    
    { }

VertexObj::VertexObj(const podio::ObjectID id, VertexData data) :
    ObjBase{id,0},
    data(data)
    { }

VertexObj::VertexObj(const VertexObj& other) :
    ObjBase{{podio::ObjectID::untracked,podio::ObjectID::untracked},0}
    ,data(other.data)
    
    { }

VertexObj::~VertexObj() {
  if (id.index == podio::ObjectID::untracked) {

  }
}
} // namespace fcc
