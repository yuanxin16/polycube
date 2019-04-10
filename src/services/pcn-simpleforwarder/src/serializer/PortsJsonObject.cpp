/**
* simpleforwarder API generated from simpleforwarder.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "PortsJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

PortsJsonObject::PortsJsonObject() {
  m_nameIsSet = false;
}

PortsJsonObject::PortsJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }
}

nlohmann::json PortsJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  return val;
}

std::string PortsJsonObject::getName() const {
  return m_name;
}

void PortsJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool PortsJsonObject::nameIsSet() const {
  return m_nameIsSet;
}




}
}
}

