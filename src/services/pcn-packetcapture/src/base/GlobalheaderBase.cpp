/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */


#include "GlobalheaderBase.h"
#include "../Packetcapture.h"


GlobalheaderBase::GlobalheaderBase(Packetcapture &parent)
    : parent_(parent) {}

GlobalheaderBase::~GlobalheaderBase() {}

void GlobalheaderBase::update(const GlobalheaderJsonObject &conf) {

  if (conf.magicIsSet()) {
    setMagic(conf.getMagic());
  }
  if (conf.versionMajorIsSet()) {
    setVersionMajor(conf.getVersionMajor());
  }
  if (conf.versionMinorIsSet()) {
    setVersionMinor(conf.getVersionMinor());
  }
  if (conf.thiszoneIsSet()) {
    setThiszone(conf.getThiszone());
  }
  if (conf.sigfigsIsSet()) {
    setSigfigs(conf.getSigfigs());
  }
  if (conf.snaplenIsSet()) {
    setSnaplen(conf.getSnaplen());
  }
  if (conf.linktypeIsSet()) {
    setLinktype(conf.getLinktype());
  }
}

GlobalheaderJsonObject GlobalheaderBase::toJsonObject() {
  GlobalheaderJsonObject conf;

  conf.setMagic(getMagic());
  conf.setVersionMajor(getVersionMajor());
  conf.setVersionMinor(getVersionMinor());
  conf.setThiszone(getThiszone());
  conf.setSigfigs(getSigfigs());
  conf.setSnaplen(getSnaplen());
  conf.setLinktype(getLinktype());

  return conf;
}

std::shared_ptr<spdlog::logger> GlobalheaderBase::logger() {
  return parent_.logger();
}

