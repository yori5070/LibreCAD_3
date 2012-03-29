#include "createentities.h"

using namespace lc;

void CreateEntities::add(CADEntity* cadEntity) {
    _toCreate.append(cadEntity);
}

void CreateEntities::remove(ID_DATATYPE id) {
    _toDelete.append(id);
}

void CreateEntities::process(AbstractDocument* document) const {
    for (int i = 0; i < _toCreate.size(); ++i) {
        document->addEntity(_layerName, _toCreate.at(i));
    }
}