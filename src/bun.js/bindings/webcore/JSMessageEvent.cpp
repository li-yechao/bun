/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSMessageEvent.h"
#include <JavaScriptCore/ObjectConstructor.h>
#include "ActiveDOMObject.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "IDLTypes.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructor.h"
#include "JSDOMConvertAny.h"
#include "JSDOMConvertBase.h"
#include "JSDOMConvertBoolean.h"
#include "JSDOMConvertInterface.h"
#include "JSDOMConvertNullable.h"
#include "JSDOMConvertSequences.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMConvertUnion.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObject.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "JSMessagePort.h"
#include "JSServiceWorker.h"
#include "JSWindowProxy.h"
#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSArray.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <variant>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>
#include "ErrorCode.h"

namespace WebCore {
using namespace JSC;

template<> MessageEvent::Init convertDictionary<MessageEvent::Init>(JSGlobalObject& lexicalGlobalObject, JSValue value)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    bool isNullOrUndefined = value.isUndefinedOrNull();
    auto* object = isNullOrUndefined ? nullptr : value.getObject();
    if (!isNullOrUndefined && !object) [[unlikely]] {
        throwTypeError(&lexicalGlobalObject, throwScope);
        return {};
    }
    MessageEvent::Init result;
    JSValue bubblesValue;
    if (isNullOrUndefined)
        bubblesValue = jsUndefined();
    else {
        bubblesValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "bubbles"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!bubblesValue.isUndefined()) {
        result.bubbles = convert<IDLBoolean>(lexicalGlobalObject, bubblesValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    } else
        result.bubbles = false;
    JSValue cancelableValue;
    if (isNullOrUndefined)
        cancelableValue = jsUndefined();
    else {
        cancelableValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "cancelable"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!cancelableValue.isUndefined()) {
        result.cancelable = convert<IDLBoolean>(lexicalGlobalObject, cancelableValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    } else
        result.cancelable = false;
    JSValue composedValue;
    if (isNullOrUndefined)
        composedValue = jsUndefined();
    else {
        composedValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "composed"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!composedValue.isUndefined()) {
        result.composed = convert<IDLBoolean>(lexicalGlobalObject, composedValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    } else
        result.composed = false;
    JSValue dataValue;
    if (isNullOrUndefined)
        dataValue = jsUndefined();
    else {
        dataValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "data"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!dataValue.isUndefined()) {
        result.data = convert<IDLAny>(lexicalGlobalObject, dataValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    } else
        result.data = jsNull();
    JSValue lastEventIdValue;
    if (isNullOrUndefined)
        lastEventIdValue = jsUndefined();
    else {
        lastEventIdValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "lastEventId"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!lastEventIdValue.isUndefined()) {
        result.lastEventId = convert<IDLDOMString>(lexicalGlobalObject, lastEventIdValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    } else
        result.lastEventId = emptyString();
    JSValue originValue;
    if (isNullOrUndefined)
        originValue = jsUndefined();
    else {
        originValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "origin"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!originValue.isUndefined()) {
        result.origin = convert<IDLUSVString>(lexicalGlobalObject, originValue);
        RETURN_IF_EXCEPTION(throwScope, {});
    } else
        result.origin = emptyString();
    JSValue portsValue;
    if (isNullOrUndefined)
        portsValue = jsUndefined();
    else {
        portsValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "ports"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!portsValue.isUndefined()) {
        result.ports = convert<IDLSequence<IDLInterface<MessagePort>>>(
            lexicalGlobalObject,
            portsValue,
            [](JSGlobalObject& lexicalGlobalObject, ThrowScope& throwScope) {
                Bun::ERR::INVALID_ARG_TYPE(throwScope,
                    &lexicalGlobalObject,
                    "MessageEvent constructor: Expected every item of eventInitDict.ports to be an instance of MessagePort."_s);
            },
            "MessageEvent constructor"_s,
            "eventInitDict.ports"_s);
        RETURN_IF_EXCEPTION(throwScope, {});
    } else
        result.ports = Converter<IDLSequence<IDLInterface<MessagePort>>>::ReturnType {};
    JSValue sourceValue;
    if (isNullOrUndefined)
        sourceValue = jsUndefined();
    else {
        sourceValue = object->get(&lexicalGlobalObject, Identifier::fromString(vm, "source"_s));
        RETURN_IF_EXCEPTION(throwScope, {});
    }
    if (!sourceValue.isUndefinedOrNull()) {
        result.source = convert<IDLNullable<IDLInterface<MessagePort>>>(lexicalGlobalObject, sourceValue, [&sourceValue](JSGlobalObject& lexicalGlobalObject, ThrowScope& throwScope) {
            Bun::ERR::INVALID_ARG_TYPE(throwScope, &lexicalGlobalObject, "eventInitDict.source"_s, "MessagePort"_s, sourceValue);
        });
        RETURN_IF_EXCEPTION(throwScope, {});
    } else {
        result.source = nullptr;
    }
    return result;
}

// Functions

static JSC_DECLARE_HOST_FUNCTION(jsMessageEventPrototypeFunction_initMessageEvent);

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsMessageEventConstructor);
static JSC_DECLARE_CUSTOM_GETTER(jsMessageEvent_origin);
static JSC_DECLARE_CUSTOM_GETTER(jsMessageEvent_lastEventId);
static JSC_DECLARE_CUSTOM_GETTER(jsMessageEvent_source);
static JSC_DECLARE_CUSTOM_GETTER(jsMessageEvent_data);
static JSC_DECLARE_CUSTOM_GETTER(jsMessageEvent_ports);

class JSMessageEventPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSMessageEventPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMessageEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSMessageEventPrototype>(vm)) JSMessageEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSMessageEventPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMessageEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSMessageEventPrototype, JSMessageEventPrototype::Base);

using JSMessageEventDOMConstructor = JSDOMConstructor<JSMessageEvent>;

template<> JSC::EncodedJSValue JSC_HOST_CALL_ATTRIBUTES JSMessageEventDOMConstructor::construct(JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* castedThis = jsCast<JSMessageEventDOMConstructor*>(callFrame->jsCallee());
    ASSERT(castedThis);
    if (callFrame->argumentCount() < 1) [[unlikely]]
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto type = convert<IDLAtomStringAdaptor<IDLDOMString>>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    EnsureStillAliveScope argument1 = callFrame->argument(1);
    auto eventInitDict = convert<IDLDictionary<MessageEvent::Init>>(*lexicalGlobalObject, argument1.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    auto object = MessageEvent::create(WTFMove(type), WTFMove(eventInitDict));
    if constexpr (IsExceptionOr<decltype(object)>)
        RETURN_IF_EXCEPTION(throwScope, {});
    static_assert(TypeOrExceptionOrUnderlyingType<decltype(object)>::isRef);
    auto jsValue = toJSNewlyCreated<IDLInterface<MessageEvent>>(*lexicalGlobalObject, *castedThis->globalObject(), throwScope, WTFMove(object));
    if constexpr (IsExceptionOr<decltype(object)>)
        RETURN_IF_EXCEPTION(throwScope, {});
    setSubclassStructureIfNeeded<MessageEvent>(lexicalGlobalObject, callFrame, asObject(jsValue));
    RETURN_IF_EXCEPTION(throwScope, {});
    return JSValue::encode(jsValue);
}
JSC_ANNOTATE_HOST_FUNCTION(JSMessageEventDOMConstructorConstruct, JSMessageEventDOMConstructor::construct);

template<> const ClassInfo JSMessageEventDOMConstructor::s_info = { "MessageEvent"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSMessageEventDOMConstructor) };

template<> JSValue JSMessageEventDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    return JSEvent::getConstructor(vm, &globalObject);
}

template<> void JSMessageEventDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(1), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "MessageEvent"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSMessageEvent::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const HashTableValue JSMessageEventPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsMessageEventConstructor, 0 } },
    { "origin"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { HashTableValue::GetterSetterType, jsMessageEvent_origin, 0 } },
    { "lastEventId"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { HashTableValue::GetterSetterType, jsMessageEvent_lastEventId, 0 } },
    { "source"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { HashTableValue::GetterSetterType, jsMessageEvent_source, 0 } },
    { "data"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { HashTableValue::GetterSetterType, jsMessageEvent_data, 0 } },
    { "ports"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute), NoIntrinsic, { HashTableValue::GetterSetterType, jsMessageEvent_ports, 0 } },
    { "initMessageEvent"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsMessageEventPrototypeFunction_initMessageEvent, 1 } },
};

const ClassInfo JSMessageEventPrototype::s_info = { "MessageEvent"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSMessageEventPrototype) };

void JSMessageEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMessageEvent::info(), JSMessageEventPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSMessageEvent::s_info = { "MessageEvent"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSMessageEvent) };

JSMessageEvent::JSMessageEvent(Structure* structure, JSDOMGlobalObject& globalObject, Ref<MessageEvent>&& impl)
    : JSEvent(structure, globalObject, WTFMove(impl))
{
}

void JSMessageEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));

    // static_assert(!std::is_base_of<ActiveDOMObject, MessageEvent>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");

    vm.heap.reportExtraMemoryAllocated(this, wrapped().memoryCost());
}

JSObject* JSMessageEvent::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSMessageEventPrototype::create(vm, &globalObject, JSMessageEventPrototype::createStructure(vm, &globalObject, JSEvent::prototype(vm, globalObject)));
}

JSObject* JSMessageEvent::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSMessageEvent>(vm, globalObject);
}

JSValue JSMessageEvent::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMessageEventDOMConstructor, DOMConstructorID::MessageEvent>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

JSC_DEFINE_CUSTOM_GETTER(jsMessageEventConstructor, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName))
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSMessageEventPrototype*>(JSValue::decode(thisValue));
    if (!prototype) [[unlikely]]
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSMessageEvent::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

static inline JSValue jsMessageEvent_originGetter(JSGlobalObject& lexicalGlobalObject, JSMessageEvent& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLUSVString>(lexicalGlobalObject, throwScope, impl.origin())));
}

JSC_DEFINE_CUSTOM_GETTER(jsMessageEvent_origin, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSMessageEvent>::get<jsMessageEvent_originGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsMessageEvent_lastEventIdGetter(JSGlobalObject& lexicalGlobalObject, JSMessageEvent& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLDOMString>(lexicalGlobalObject, throwScope, impl.lastEventId())));
}

JSC_DEFINE_CUSTOM_GETTER(jsMessageEvent_lastEventId, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSMessageEvent>::get<jsMessageEvent_lastEventIdGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsMessageEvent_sourceGetter(JSGlobalObject& lexicalGlobalObject, JSMessageEvent& thisObject)
{
    auto& vm = JSC::getVM(&lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto& impl = thisObject.wrapped();
    RELEASE_AND_RETURN(throwScope, (toJS<IDLNullable<IDLInterface<MessagePort>>>(lexicalGlobalObject, *thisObject.globalObject(), throwScope, impl.source())));
}

JSC_DEFINE_CUSTOM_GETTER(jsMessageEvent_source, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSMessageEvent>::get<jsMessageEvent_sourceGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsMessageEvent_dataGetter(JSGlobalObject& lexicalGlobalObject, JSMessageEvent& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return thisObject.data(lexicalGlobalObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsMessageEvent_data, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSMessageEvent>::get<jsMessageEvent_dataGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSValue jsMessageEvent_portsGetter(JSGlobalObject& lexicalGlobalObject, JSMessageEvent& thisObject)
{
    UNUSED_PARAM(lexicalGlobalObject);
    return thisObject.ports(lexicalGlobalObject);
}

JSC_DEFINE_CUSTOM_GETTER(jsMessageEvent_ports, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName attributeName))
{
    return IDLAttribute<JSMessageEvent>::get<jsMessageEvent_portsGetter, CastedThisErrorBehavior::Assert>(*lexicalGlobalObject, thisValue, attributeName);
}

static inline JSC::EncodedJSValue jsMessageEventPrototypeFunction_initMessageEventBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSMessageEvent>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    if (callFrame->argumentCount() < 1) [[unlikely]]
        return throwVMError(lexicalGlobalObject, throwScope, createNotEnoughArgumentsError(lexicalGlobalObject));
    EnsureStillAliveScope argument0 = callFrame->uncheckedArgument(0);
    auto type = convert<IDLAtomStringAdaptor<IDLDOMString>>(*lexicalGlobalObject, argument0.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    EnsureStillAliveScope argument1 = callFrame->argument(1);
    auto bubbles = convert<IDLBoolean>(*lexicalGlobalObject, argument1.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    EnsureStillAliveScope argument2 = callFrame->argument(2);
    auto cancelable = convert<IDLBoolean>(*lexicalGlobalObject, argument2.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    EnsureStillAliveScope argument3 = callFrame->argument(3);
    auto data = argument3.value().isUndefined() ? jsNull() : convert<IDLAny>(*lexicalGlobalObject, argument3.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    EnsureStillAliveScope argument4 = callFrame->argument(4);
    auto originArg = argument4.value().isUndefined() ? emptyString() : convert<IDLUSVString>(*lexicalGlobalObject, argument4.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    EnsureStillAliveScope argument5 = callFrame->argument(5);
    auto lastEventId = argument5.value().isUndefined() ? emptyString() : convert<IDLDOMString>(*lexicalGlobalObject, argument5.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    EnsureStillAliveScope argument6 = callFrame->argument(6);
    RefPtr<MessagePort> source = argument6.value().isUndefined() ? nullptr : convert<IDLNullable<IDLInterface<MessagePort>>>(*lexicalGlobalObject, argument6.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    EnsureStillAliveScope argument7 = callFrame->argument(7);
    auto messagePorts = argument7.value().isUndefined() ? Converter<IDLSequence<IDLInterface<MessagePort>>>::ReturnType {} : convert<IDLSequence<IDLInterface<MessagePort>>>(*lexicalGlobalObject, argument7.value());
    RETURN_IF_EXCEPTION(throwScope, {});
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLUndefined>(*lexicalGlobalObject, throwScope, [&]() -> decltype(auto) { return impl.initMessageEvent(WTFMove(type), WTFMove(bubbles), WTFMove(cancelable), WTFMove(data), WTFMove(originArg), WTFMove(lastEventId), WTFMove(source), WTFMove(messagePorts)); })));
}

JSC_DEFINE_HOST_FUNCTION(jsMessageEventPrototypeFunction_initMessageEvent, (JSGlobalObject * lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSMessageEvent>::call<jsMessageEventPrototypeFunction_initMessageEventBody>(*lexicalGlobalObject, *callFrame, "initMessageEvent");
}

JSC::GCClient::IsoSubspace* JSMessageEvent::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSMessageEvent, UseCustomHeapCellType::No>(
        vm,
        [](auto& spaces) { return spaces.m_clientSubspaceForMessageEvent.get(); },
        [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForMessageEvent = std::forward<decltype(space)>(space); },
        [](auto& spaces) { return spaces.m_subspaceForMessageEvent.get(); },
        [](auto& spaces, auto&& space) { spaces.m_subspaceForMessageEvent = std::forward<decltype(space)>(space); });
}

template<typename Visitor>
void JSMessageEvent::visitChildrenImpl(JSCell* cell, Visitor& visitor)
{
    auto* thisObject = jsCast<JSMessageEvent*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitChildren(thisObject, visitor);
    thisObject->visitAdditionalChildren(visitor);
    visitor.reportExtraMemoryVisited(thisObject->wrapped().memoryCost());
}

DEFINE_VISIT_CHILDREN(JSMessageEvent);

template<typename Visitor>
void JSMessageEvent::visitOutputConstraints(JSCell* cell, Visitor& visitor)
{
    auto* thisObject = jsCast<JSMessageEvent*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    Base::visitOutputConstraints(thisObject, visitor);
    thisObject->visitAdditionalChildren(visitor);
}

template void JSMessageEvent::visitOutputConstraints(JSCell*, AbstractSlotVisitor&);
template void JSMessageEvent::visitOutputConstraints(JSCell*, SlotVisitor&);
size_t JSMessageEvent::estimatedSize(JSCell* cell, VM& vm)
{
    auto* thisObject = jsCast<JSMessageEvent*>(cell);
    return Base::estimatedSize(thisObject, vm) + thisObject->wrapped().memoryCost();
}

void JSMessageEvent::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSMessageEvent*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, makeString("url "_s, thisObject->scriptExecutionContext()->url().string()));
    Base::analyzeHeap(cell, analyzer);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable : 4483)
extern "C" {
extern void (*const __identifier("??_7MessageEvent@WebCore@@6B@")[])();
}
#else
extern "C" {
extern void* _ZTVN7WebCore12MessageEventE[];
}
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject* globalObject, Ref<MessageEvent>&& impl)
{

    if constexpr (std::is_polymorphic_v<MessageEvent>) {
#if ENABLE(BINDING_INTEGRITY)
        // const void* actualVTablePointer = getVTablePointer(impl.ptr());
#if PLATFORM(WIN)
        void* expectedVTablePointer = __identifier("??_7MessageEvent@WebCore@@6B@");
#else
        // void* expectedVTablePointer = &_ZTVN7WebCore12MessageEventE[2];
#endif

        // If you hit this assertion you either have a use after free bug, or
        // MessageEvent has subclasses. If MessageEvent has subclasses that get passed
        // to toJS() we currently require MessageEvent you to opt out of binding hardening
        // by adding the SkipVTableValidation attribute to the interface IDL definition
        // RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    }
    return createWrapper<MessageEvent>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, MessageEvent& impl)
{
    return wrap(lexicalGlobalObject, globalObject, impl);
}

}
