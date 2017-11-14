/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGOrder.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGOrder::SWGOrder(QString* json) {
    init();
    this->fromJson(*json);
}

SWGOrder::SWGOrder() {
    init();
}

SWGOrder::~SWGOrder() {
    this->cleanup();
}

void
SWGOrder::init() {
    id = 0L;
    pet_id = 0L;
    quantity = 0;
    ship_date = NULL;
    status = new QString("");
    complete = false;
}

void
SWGOrder::cleanup() {



    if(ship_date != nullptr) {
        delete ship_date;
    }
    if(status != nullptr) {
        delete status;
    }

}

SWGOrder*
SWGOrder::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGOrder::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&pet_id, pJson["petId"], "qint64", "");
    ::Swagger::setValue(&quantity, pJson["quantity"], "qint32", "");
    ::Swagger::setValue(&ship_date, pJson["shipDate"], "QDateTime", "QDateTime");
    ::Swagger::setValue(&status, pJson["status"], "QString", "QString");
    ::Swagger::setValue(&complete, pJson["complete"], "bool", "");
}

QString
SWGOrder::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGOrder::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
    obj->insert("petId", QJsonValue(pet_id));
    obj->insert("quantity", QJsonValue(quantity));
    toJsonValue(QString("shipDate"), ship_date, obj, QString("QDateTime"));
    toJsonValue(QString("status"), status, obj, QString("QString"));
    obj->insert("complete", QJsonValue(complete));

    return obj;
}

qint64
SWGOrder::getId() {
    return id;
}
void
SWGOrder::setId(qint64 id) {
    this->id = id;
}

qint64
SWGOrder::getPetId() {
    return pet_id;
}
void
SWGOrder::setPetId(qint64 pet_id) {
    this->pet_id = pet_id;
}

qint32
SWGOrder::getQuantity() {
    return quantity;
}
void
SWGOrder::setQuantity(qint32 quantity) {
    this->quantity = quantity;
}

QDateTime*
SWGOrder::getShipDate() {
    return ship_date;
}
void
SWGOrder::setShipDate(QDateTime* ship_date) {
    this->ship_date = ship_date;
}

QString*
SWGOrder::getStatus() {
    return status;
}
void
SWGOrder::setStatus(QString* status) {
    this->status = status;
}

bool
SWGOrder::isComplete() {
    return complete;
}
void
SWGOrder::setComplete(bool complete) {
    this->complete = complete;
}


}

