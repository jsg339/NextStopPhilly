#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Comparison`1<TouchScript.Hit.HitData>
struct Comparison_1_tDAA7AC4763D996C84004288387226A5CF08B89E3;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0;
// System.Comparison`1<TouchScript.Hit.RaycastHitUI>
struct Comparison_1_t179960122638E98D42AAC569F3F9DB0F9E8875E7;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Canvas>
struct Dictionary_2_tA0A98779192E365DAF1C3E7C6A23648B1B6B7E33;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Pointers.Pointer>
struct Dictionary_2_t28436064F1BE05B849CFCDE018CDE6CDE7836E51;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Layers.ProjectionParams>
struct Dictionary_2_tC38DF89CF01647D5D1B88F5448E467C3A753D4AC;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_tC96EF7224041A1435F414F0A974F5E415FFCC528;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_tBAE9A2CDB8174D2A78A46C57B54E9D86245D3BC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_tF2F90BDFC6B14457DE9485B3A5C065C31BE80AD0;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t10AC44967751F27B2BFC1CDA880B1466D87483F1;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
struct EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<TouchScript.PointerEventArgs>
struct EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB;
// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
struct EventHandler_1_t3CFF00107B7CBAC82411C1D58C923482E7FD9865;
// System.Func`2<TouchScript.Layers.TouchLayer,System.Boolean>
struct Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.HashSet`1<TouchScript.Pointers.Pointer>
struct HashSet_1_t9D765003069DFF4AACE9F388D2DFB7CF38826180;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>
struct IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyCollection_tD2C5F600E93DE7B92ABF7BC7E8A932E27D940212;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_tBC81A7DE12BDADB43C5817DF67BD79E70CFFFC54;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0;
// System.Collections.Generic.List`1<TouchScript.Hit.HitData>
struct List_1_tBDE67F26B44653001EC551805FA2746879F76B55;
// System.Collections.Generic.List`1<TouchScript.Hit.HitTest>
struct List_1_tDB51762FD609812A127444CC3D6C069AC13BAF67;
// System.Collections.Generic.List`1<TouchScript.InputSources.IInputSource>
struct List_1_tC2B7D5677160D687BC7BFD96F466161A531A95DB;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>
struct List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4;
// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D;
// System.Collections.Generic.List`1<TouchScript.Hit.RaycastHitUI>
struct List_1_t5BE66AD783939C74D9631BE264D292FAEF76288A;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t532A94013AD8D6EE8F519265AA43B31BF5EB0B87;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>>
struct ObjectPool_1_tB6C670E254C5F1207034237EC832F816A97151AE;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t7DE371FC4173D0882831B9DD0945CA448A3BAB31;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.Pointers.Pointer>
struct ReadOnlyCollection_1_tD7568E5741BD945A87163DE1DBDAF82189EF2CDE;
// TouchScript.Utils.TimedSequence`1<TouchScript.Pointers.Pointer>
struct TimedSequence_1_t20720AFDBC6E44963A16C08EE2CE2B976DF49AFC;
// UnityEngine.Events.UnityEvent`1<System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>>
struct UnityEvent_1_t1C0EAC39F0669D2DF7E6E070EFF4363AA5F60788;
// UnityEngine.Events.UnityEvent`1<TouchScript.Gestures.Gesture>
struct UnityEvent_1_tD4246030226F4144B39294A9484E152A5249BF4B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_t28C5EADCF5205986726B544E972D81491CD308DA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct EntryU5BU5D_t3D89719784232B784AF24BDF458050EC3BF780AF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TouchScript.Gestures.Gesture[]
struct GestureU5BU5D_t6DDCE9443984A3DA411E798CB714D75A685A9372;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TouchScript.Pointers.Pointer[]
struct PointerU5BU5D_tCC842EE606DA3335764D2DF0E4098CF0F26D3CDF;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// TouchScript.Pointers.FakePointer
struct FakePointer_t26DD1DA5C9B97D4C54BAD2CCF51A0465FD87F46E;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// TouchScript.Gestures.Gesture
struct Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90;
// TouchScript.Core.GestureManagerInstance
struct GestureManagerInstance_tFD447E2AF81F9B44EB326A0E2E545ADDCFF54940;
// TouchScript.Gestures.GestureStateChangeEventArgs
struct GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// TouchScript.Hit.HitTest
struct HitTest_tE32CEF25F8B0640C77DFDDC28F38100EF0175086;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.EventSystems.IBeginDragHandler
struct IBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E;
// UnityEngine.EventSystems.ICancelHandler
struct ICancelHandler_t9288977907DA5B88ED40625672C05460E60752F8;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// TouchScript.Devices.Display.IDisplayDevice
struct IDisplayDevice_t9A53D172A7CB263C090C12C038B59E61AD273374;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F;
// UnityEngine.EventSystems.IDropHandler
struct IDropHandler_t4C6C44AF24CF3830774D87C0F4326DD208882F09;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E;
// TouchScript.IGestureDelegate
struct IGestureDelegate_t4F72C6B97296AEB609C2F6C4BEA6AE8947C7210B;
// UnityEngine.EventSystems.IInitializePotentialDragHandler
struct IInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3;
// TouchScript.InputSources.IInputSource
struct IInputSource_tACA8E73386D5AF24EBF73CCA78731EA543B02097;
// TouchScript.Layers.ILayerDelegate
struct ILayerDelegate_t119409AD86EA537B56D4AB60BC2C208FCE91CA02;
// TouchScript.ILayerManager
struct ILayerManager_t05BC5DF74CB32B8F804D839D8A3144716D5894E8;
// UnityEngine.EventSystems.IMoveHandler
struct IMoveHandler_t603A54D1EA15704B37D022CCE294EFE3F831559F;
// TouchScript.Pointers.IPointer
struct IPointer_t850CF2BF453EF77F20F273D8D666D38C0E8648DC;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_tD8B28A09D1D5F93DAB6905DE3890FC73E6DF1E0C;
// UnityEngine.EventSystems.IPointerExitHandler
struct IPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA;
// UnityEngine.EventSystems.IPointerUpHandler
struct IPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1;
// UnityEngine.EventSystems.ISubmitHandler
struct ISubmitHandler_t20677BB54F3FD568032702852052A70355A0D774;
// TouchScript.ITouchManager
struct ITouchManager_t8DA7636C0CDED9E9398BABA6237F0D2AEE5D4D1C;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_tD5D76B759B900C3F557E3CEC55F6E08EE6909806;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// TouchScript.Examples.KillMe
struct KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55;
// TouchScript.Core.LayerManagerInstance
struct LayerManagerInstance_tD02618FFFC1979E15C99BBC844F59636B7491956;
// TouchScript.Gestures.LongPressGesture
struct LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// TouchScript.Pointers.MousePointer
struct MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// TouchScript.Examples.Portal.Planet
struct Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210;
// TouchScript.Pointers.Pointer
struct Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B;
// TouchScript.PointerEventArgs
struct PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// TouchScript.Layers.ProjectionParams
struct ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// TouchScript.Examples.Runner
struct Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ShowMe
struct ShowMe_t597B31A3BE68F874BC2A433D56F7D674394BD6E5;
// TouchScript.Layers.StandardLayer
struct StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TouchScript.Gestures.TapGesture
struct TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218;
// TouchScript.Core.TouchManagerInstance
struct TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98;
// TouchScript.Layers.UI.TouchScriptInputModule
struct TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TouchScript.Gestures.TransformGestures.Base.TransformGestureBase
struct TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813;
// TouchScript.Behaviors.Transformer
struct Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98;
// TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase
struct TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// TouchScript.Hit.Untouchable
struct Untouchable_t4B18828E6570ACE237D613D7FB27CA220E8F7A33;
// VideoManager
struct VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// TouchScript.Examples.Portal.Vortex
struct Vortex_tDFD0E77B461DAE1C96455AB7B0FD5D36CE66C298;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WindowManager
struct WindowManager_tE18412F0E79BBF0CD77BB6BFEBE04641BB2D38EA;
// TouchScript.Layers.WorldSpaceCanvasProjectionParams
struct WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// TouchScript.Gestures.Gesture/GestureEvent
struct GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF;
// TouchScript.Core.GestureManagerInstance/<>c
struct U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A;
// TouchScript.Examples.KillMe/<Start>d__1
struct U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE;
// TouchScript.Gestures.LongPressGesture/<wait>d__25
struct U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312;
// TouchScript.Examples.Runner/<resetUILayer>d__9
struct U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957;
// ShowMe/<Start>d__0
struct U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6;
// TouchScript.Layers.StandardLayer/<lateEnable>d__46
struct U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35;
// TouchScript.Gestures.TapGesture/<wait>d__43
struct U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555;
// TouchScript.Layers.TouchLayer/<lateAwake>d__17
struct U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097;
// TouchScript.TouchManager/FrameEvent
struct FrameEvent_tBE7C5305E37511A74D08891DE781BABE28FB3BB6;
// TouchScript.TouchManager/PointerEvent
struct PointerEvent_t07498AC2731735A9CFFA0FF78D2B82678C72CE95;
// TouchScript.Core.TouchManagerInstance/<>c
struct U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB;
// TouchScript.Core.TouchManagerInstance/<lateAwake>d__109
struct U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C;
// TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule
struct UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;

IL2CPP_EXTERN_C RuntimeClass* CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILayerManager_t05BC5DF74CB32B8F804D839D8A3144716D5894E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITouchManager_t8DA7636C0CDED9E9398BABA6237F0D2AEE5D4D1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchManager_t74D13726A50EBC46CF7CB927CDD809CD17F25A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6F39F3906730A7A6EEF158DD8BD993B7BA9C7CC2;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlanet_t24425248AAAE5648C27C10E1AA8431B341B1D210_mE1E90F555DBAA445E6CFFA8E289D45FF7AD01CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813_m12AF12EDFBDD96E618ED51D57010C1180F58B659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF3E0C0B4EBA974F04D4FBF35CCFF7E4EB72CDD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mE9C5ED7783AAC1B89224E1AF553DCA9E4B96679A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m112BCAAE5FE5B09885E2E42287E2CDC01B4516FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB86963336046BCC851EDB7F7B4BC04CE55C3276A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m25E894A925A36601684C7D06070580874F026874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t4C6C44AF24CF3830774D87C0F4326DD208882F09_m2EC13CE27119899D978C098DE2D7992FFCFE21A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_tD8B28A09D1D5F93DAB6905DE3890FC73E6DF1E0C_m85F0FBE1A24E6569B49441102862CB6A96563E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_m9A7CDD374FDCD7D5FCF1E1F91DE2458B86A22069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_mCA6F9E32CFBC40460751C2A05C463AF7C5CDE0C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisICancelHandler_t9288977907DA5B88ED40625672C05460E60752F8_m198C79464DD56A595A6161B19B78E5E2FD1044D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mA661CB69E2CA9AF862894036847115E9825F48D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mD0EAD259C83B2289D29ABC4AEC5A4639CEA75D01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m41B2C8664EE6E01D2D569C0EB09200D3FB172A5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIMoveHandler_t603A54D1EA15704B37D022CCE294EFE3F831559F_m0504DE3A83975304D129D6089B0608393E0C7AF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m008259182237138FF111EC7A20CE559CBE1B67C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisISubmitHandler_t20677BB54F3FD568032702852052A70355A0D774_m85570C9153E80406C8213FBC08891128A51BB892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIUpdateSelectedHandler_tD5D76B759B900C3F557E3CEC55F6E08EE6909806_mBFD650297AF62567370432ED0EC48C057FBA7C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mFA11ACE98FA239AFB5E9CF1A9C95284D3F12E8F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m07A94374DDEDD87BB9A9B5A869150F0C5A8722DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_mAC9DF9D93BF477348C4D0C918293847319BD04E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisISelectHandler_t9E3C913E19619F48362FBF67E14CCBFEDA4742C2_m241D0C68CC4C49641D5E11D81FA47FDA06BE4D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m66B083B554C59C9707F21BECA0A0491CA56AA110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mCD0EEDC8DD813A9A8573E01F6BA012F17A081A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFAD32CB3130E71D5F5B9B07957BBC7F70096A936_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3EED555DE083A34B0F2CAB4EE64DB7D09D6F5BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD7FAB47EB79E810A78BA1E380A42BABAC3801194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFE77211EF52E5EED34AF7FE8462DEF4125F91415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transformer_frameFinishedHandler_m3CE7B9EAFF151252DF8A83452DCF44FA758509A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transformer_stateChangedHandler_m73369F7BFBD8D61A57C85E9AFD5A171B68552E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__0_System_Collections_IEnumerator_Reset_m90558A5F652A57CA723ACA7604DC462D0563E1BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m963A4780AF60A6784CB5AD83CA80025AD335B266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3ClateAwakeU3Ed__109_System_Collections_IEnumerator_Reset_mBC61DE953C265B44B07AA64F1F134824FEE2C866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3ClateAwakeU3Ed__17_System_Collections_IEnumerator_Reset_mDC6FFBE25374FEE0143A5AA8E196DCE6499E8375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3ClateEnableU3Ed__46_System_Collections_IEnumerator_Reset_mF7DC5B2DB8BFF62CD98686A60F937F196D139A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CresetUILayerU3Ed__9_System_Collections_IEnumerator_Reset_m555277F2E5EEF0BEF05C3D9986F6FA5DE0A94B78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitU3Ed__25_System_Collections_IEnumerator_Reset_mD31C1A8853624EBEF9A95D2400BFE47DCB52477B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitU3Ed__43_System_Collections_IEnumerator_Reset_m491D32473B6CEE9B00E48C2527F77A9FB8E399B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m774D443F08E5AE90D2BC22A380ADC258DA8BE9F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC3D2855F27182E641292E7BC95897B444B6FA4D6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3D89719784232B784AF24BDF458050EC3BF780AF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD2C5F600E93DE7B92ABF7BC7E8A932E27D940212 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t28C5EADCF5205986726B544E972D81491CD308DA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ___entries_1)); }
	inline EntryU5BU5D_t3D89719784232B784AF24BDF458050EC3BF780AF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3D89719784232B784AF24BDF458050EC3BF780AF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3D89719784232B784AF24BDF458050EC3BF780AF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ___keys_7)); }
	inline KeyCollection_tD2C5F600E93DE7B92ABF7BC7E8A932E27D940212 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD2C5F600E93DE7B92ABF7BC7E8A932E27D940212 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD2C5F600E93DE7B92ABF7BC7E8A932E27D940212 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ___values_8)); }
	inline ValueCollection_t28C5EADCF5205986726B544E972D81491CD308DA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t28C5EADCF5205986726B544E972D81491CD308DA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t28C5EADCF5205986726B544E972D81491CD308DA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GestureU5BU5D_t6DDCE9443984A3DA411E798CB714D75A685A9372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0, ____items_1)); }
	inline GestureU5BU5D_t6DDCE9443984A3DA411E798CB714D75A685A9372* get__items_1() const { return ____items_1; }
	inline GestureU5BU5D_t6DDCE9443984A3DA411E798CB714D75A685A9372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GestureU5BU5D_t6DDCE9443984A3DA411E798CB714D75A685A9372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GestureU5BU5D_t6DDCE9443984A3DA411E798CB714D75A685A9372* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0_StaticFields, ____emptyArray_5)); }
	inline GestureU5BU5D_t6DDCE9443984A3DA411E798CB714D75A685A9372* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GestureU5BU5D_t6DDCE9443984A3DA411E798CB714D75A685A9372** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GestureU5BU5D_t6DDCE9443984A3DA411E798CB714D75A685A9372* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>
struct List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PointerU5BU5D_tCC842EE606DA3335764D2DF0E4098CF0F26D3CDF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4, ____items_1)); }
	inline PointerU5BU5D_tCC842EE606DA3335764D2DF0E4098CF0F26D3CDF* get__items_1() const { return ____items_1; }
	inline PointerU5BU5D_tCC842EE606DA3335764D2DF0E4098CF0F26D3CDF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PointerU5BU5D_tCC842EE606DA3335764D2DF0E4098CF0F26D3CDF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PointerU5BU5D_tCC842EE606DA3335764D2DF0E4098CF0F26D3CDF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4_StaticFields, ____emptyArray_5)); }
	inline PointerU5BU5D_tCC842EE606DA3335764D2DF0E4098CF0F26D3CDF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PointerU5BU5D_tCC842EE606DA3335764D2DF0E4098CF0F26D3CDF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PointerU5BU5D_tCC842EE606DA3335764D2DF0E4098CF0F26D3CDF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_tBAE9A2CDB8174D2A78A46C57B54E9D86245D3BC8 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_tF2F90BDFC6B14457DE9485B3A5C065C31BE80AD0 * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_tC96EF7224041A1435F414F0A974F5E415FFCC528 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t7DE371FC4173D0882831B9DD0945CA448A3BAB31 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_tBAE9A2CDB8174D2A78A46C57B54E9D86245D3BC8 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_tBAE9A2CDB8174D2A78A46C57B54E9D86245D3BC8 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_tBAE9A2CDB8174D2A78A46C57B54E9D86245D3BC8 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_tF2F90BDFC6B14457DE9485B3A5C065C31BE80AD0 * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_tF2F90BDFC6B14457DE9485B3A5C065C31BE80AD0 ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_tF2F90BDFC6B14457DE9485B3A5C065C31BE80AD0 * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_tC96EF7224041A1435F414F0A974F5E415FFCC528 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_tC96EF7224041A1435F414F0A974F5E415FFCC528 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_tC96EF7224041A1435F414F0A974F5E415FFCC528 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t7DE371FC4173D0882831B9DD0945CA448A3BAB31 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t7DE371FC4173D0882831B9DD0945CA448A3BAB31 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t7DE371FC4173D0882831B9DD0945CA448A3BAB31 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// TouchScript.Layers.ProjectionParams
struct ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// TouchScript.Utils.TransformUtils
struct TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137  : public RuntimeObject
{
public:

public:
};

struct TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_StaticFields
{
public:
	// System.Text.StringBuilder TouchScript.Utils.TransformUtils::sb
	StringBuilder_t * ___sb_0;

public:
	inline static int32_t get_offset_of_sb_0() { return static_cast<int32_t>(offsetof(TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_StaticFields, ___sb_0)); }
	inline StringBuilder_t * get_sb_0() const { return ___sb_0; }
	inline StringBuilder_t ** get_address_of_sb_0() { return &___sb_0; }
	inline void set_sb_0(StringBuilder_t * value)
	{
		___sb_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sb_0), (void*)value);
	}
};


// TouchScript.Utils.Geom.TwoD
struct TwoD_tCF8AEB6B41F9C7F2D1DACF409F776F3854216107  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// TouchScript.Core.GestureManagerInstance/<>c
struct U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A_StaticFields
{
public:
	// TouchScript.Core.GestureManagerInstance/<>c TouchScript.Core.GestureManagerInstance/<>c::<>9
	U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// TouchScript.Examples.KillMe/<Start>d__1
struct U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE  : public RuntimeObject
{
public:
	// System.Int32 TouchScript.Examples.KillMe/<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchScript.Examples.KillMe/<Start>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TouchScript.Examples.KillMe TouchScript.Examples.KillMe/<Start>d__1::<>4__this
	KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE, ___U3CU3E4__this_2)); }
	inline KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TouchScript.Gestures.LongPressGesture/<wait>d__25
struct U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312  : public RuntimeObject
{
public:
	// System.Int32 TouchScript.Gestures.LongPressGesture/<wait>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchScript.Gestures.LongPressGesture/<wait>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TouchScript.Gestures.LongPressGesture TouchScript.Gestures.LongPressGesture/<wait>d__25::<>4__this
	LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * ___U3CU3E4__this_2;
	// System.Single TouchScript.Gestures.LongPressGesture/<wait>d__25::<targetTime>5__2
	float ___U3CtargetTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312, ___U3CU3E4__this_2)); }
	inline LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312, ___U3CtargetTimeU3E5__2_3)); }
	inline float get_U3CtargetTimeU3E5__2_3() const { return ___U3CtargetTimeU3E5__2_3; }
	inline float* get_address_of_U3CtargetTimeU3E5__2_3() { return &___U3CtargetTimeU3E5__2_3; }
	inline void set_U3CtargetTimeU3E5__2_3(float value)
	{
		___U3CtargetTimeU3E5__2_3 = value;
	}
};


// TouchScript.Examples.Runner/<resetUILayer>d__9
struct U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957  : public RuntimeObject
{
public:
	// System.Int32 TouchScript.Examples.Runner/<resetUILayer>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchScript.Examples.Runner/<resetUILayer>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TouchScript.Examples.Runner TouchScript.Examples.Runner/<resetUILayer>d__9::<>4__this
	Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957, ___U3CU3E4__this_2)); }
	inline Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ShowMe/<Start>d__0
struct U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6  : public RuntimeObject
{
public:
	// System.Int32 ShowMe/<Start>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ShowMe/<Start>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ShowMe ShowMe/<Start>d__0::<>4__this
	ShowMe_t597B31A3BE68F874BC2A433D56F7D674394BD6E5 * ___U3CU3E4__this_2;
	// UnityEngine.Canvas ShowMe/<Start>d__0::<canvas>5__2
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___U3CcanvasU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6, ___U3CU3E4__this_2)); }
	inline ShowMe_t597B31A3BE68F874BC2A433D56F7D674394BD6E5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ShowMe_t597B31A3BE68F874BC2A433D56F7D674394BD6E5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ShowMe_t597B31A3BE68F874BC2A433D56F7D674394BD6E5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcanvasU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6, ___U3CcanvasU3E5__2_3)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_U3CcanvasU3E5__2_3() const { return ___U3CcanvasU3E5__2_3; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_U3CcanvasU3E5__2_3() { return &___U3CcanvasU3E5__2_3; }
	inline void set_U3CcanvasU3E5__2_3(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___U3CcanvasU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcanvasU3E5__2_3), (void*)value);
	}
};


// TouchScript.Layers.StandardLayer/<lateEnable>d__46
struct U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35  : public RuntimeObject
{
public:
	// System.Int32 TouchScript.Layers.StandardLayer/<lateEnable>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchScript.Layers.StandardLayer/<lateEnable>d__46::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TouchScript.Layers.StandardLayer TouchScript.Layers.StandardLayer/<lateEnable>d__46::<>4__this
	StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35, ___U3CU3E4__this_2)); }
	inline StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TouchScript.Gestures.TapGesture/<wait>d__43
struct U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555  : public RuntimeObject
{
public:
	// System.Int32 TouchScript.Gestures.TapGesture/<wait>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchScript.Gestures.TapGesture/<wait>d__43::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TouchScript.Gestures.TapGesture TouchScript.Gestures.TapGesture/<wait>d__43::<>4__this
	TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * ___U3CU3E4__this_2;
	// System.Single TouchScript.Gestures.TapGesture/<wait>d__43::<targetTime>5__2
	float ___U3CtargetTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555, ___U3CU3E4__this_2)); }
	inline TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555, ___U3CtargetTimeU3E5__2_3)); }
	inline float get_U3CtargetTimeU3E5__2_3() const { return ___U3CtargetTimeU3E5__2_3; }
	inline float* get_address_of_U3CtargetTimeU3E5__2_3() { return &___U3CtargetTimeU3E5__2_3; }
	inline void set_U3CtargetTimeU3E5__2_3(float value)
	{
		___U3CtargetTimeU3E5__2_3 = value;
	}
};


// TouchScript.Layers.TouchLayer/<lateAwake>d__17
struct U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097  : public RuntimeObject
{
public:
	// System.Int32 TouchScript.Layers.TouchLayer/<lateAwake>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchScript.Layers.TouchLayer/<lateAwake>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TouchScript.Layers.TouchLayer TouchScript.Layers.TouchLayer/<lateAwake>d__17::<>4__this
	TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097, ___U3CU3E4__this_2)); }
	inline TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TouchScript.Core.TouchManagerInstance/<>c
struct U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB_StaticFields
{
public:
	// TouchScript.Core.TouchManagerInstance/<>c TouchScript.Core.TouchManagerInstance/<>c::<>9
	U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// TouchScript.Core.TouchManagerInstance/<lateAwake>d__109
struct U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C  : public RuntimeObject
{
public:
	// System.Int32 TouchScript.Core.TouchManagerInstance/<lateAwake>d__109::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchScript.Core.TouchManagerInstance/<lateAwake>d__109::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TouchScript.Core.TouchManagerInstance TouchScript.Core.TouchManagerInstance/<lateAwake>d__109::<>4__this
	TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C, ___U3CU3E4__this_2)); }
	inline TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>>
struct UnityEvent_1_t1C0EAC39F0669D2DF7E6E070EFF4363AA5F60788  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1C0EAC39F0669D2DF7E6E070EFF4363AA5F60788, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<TouchScript.Gestures.Gesture>
struct UnityEvent_1_tD4246030226F4144B39294A9484E152A5249BF4B  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tD4246030226F4144B39294A9484E152A5249BF4B, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// TouchScript.PointerEventArgs
struct PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer> TouchScript.PointerEventArgs::<Pointers>k__BackingField
	RuntimeObject* ___U3CPointersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPointersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3, ___U3CPointersU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CPointersU3Ek__BackingField_1() const { return ___U3CPointersU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CPointersU3Ek__BackingField_1() { return &___U3CPointersU3Ek__BackingField_1; }
	inline void set_U3CPointersU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CPointersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointersU3Ek__BackingField_1), (void*)value);
	}
};

struct PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3_StaticFields
{
public:
	// TouchScript.PointerEventArgs TouchScript.PointerEventArgs::instance
	PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3_StaticFields, ___instance_2)); }
	inline PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * get_instance_2() const { return ___instance_2; }
	inline PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_2), (void*)value);
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TouchScript.Hit.HitResult
struct HitResult_tF025C03FF25465009A7B7A6D22C449BC432398FE 
{
public:
	// System.Int32 TouchScript.Hit.HitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HitResult_tF025C03FF25465009A7B7A6D22C449BC432398FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.MoveDirection
struct MoveDirection_t740623362F85DF2963BE20C702F7B8EF44E91645 
{
public:
	// System.Int32 UnityEngine.EventSystems.MoveDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MoveDirection_t740623362F85DF2963BE20C702F7B8EF44E91645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// TouchScript.Hit.RaycastHitUI
struct RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684 
{
public:
	// UnityEngine.Transform TouchScript.Hit.RaycastHitUI::Target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Target_0;
	// UnityEngine.EventSystems.BaseRaycaster TouchScript.Hit.RaycastHitUI::Raycaster
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___Raycaster_1;
	// System.Int32 TouchScript.Hit.RaycastHitUI::GraphicIndex
	int32_t ___GraphicIndex_2;
	// System.Int32 TouchScript.Hit.RaycastHitUI::Depth
	int32_t ___Depth_3;
	// System.Int32 TouchScript.Hit.RaycastHitUI::SortingLayer
	int32_t ___SortingLayer_4;
	// System.Int32 TouchScript.Hit.RaycastHitUI::SortingOrder
	int32_t ___SortingOrder_5;
	// UnityEngine.UI.Graphic TouchScript.Hit.RaycastHitUI::Graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___Graphic_6;
	// UnityEngine.Vector3 TouchScript.Hit.RaycastHitUI::WorldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldPosition_7;
	// UnityEngine.Vector3 TouchScript.Hit.RaycastHitUI::WorldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldNormal_8;
	// System.Single TouchScript.Hit.RaycastHitUI::Distance
	float ___Distance_9;

public:
	inline static int32_t get_offset_of_Target_0() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___Target_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Target_0() const { return ___Target_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Target_0() { return &___Target_0; }
	inline void set_Target_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_Raycaster_1() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___Raycaster_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_Raycaster_1() const { return ___Raycaster_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_Raycaster_1() { return &___Raycaster_1; }
	inline void set_Raycaster_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___Raycaster_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Raycaster_1), (void*)value);
	}

	inline static int32_t get_offset_of_GraphicIndex_2() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___GraphicIndex_2)); }
	inline int32_t get_GraphicIndex_2() const { return ___GraphicIndex_2; }
	inline int32_t* get_address_of_GraphicIndex_2() { return &___GraphicIndex_2; }
	inline void set_GraphicIndex_2(int32_t value)
	{
		___GraphicIndex_2 = value;
	}

	inline static int32_t get_offset_of_Depth_3() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___Depth_3)); }
	inline int32_t get_Depth_3() const { return ___Depth_3; }
	inline int32_t* get_address_of_Depth_3() { return &___Depth_3; }
	inline void set_Depth_3(int32_t value)
	{
		___Depth_3 = value;
	}

	inline static int32_t get_offset_of_SortingLayer_4() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___SortingLayer_4)); }
	inline int32_t get_SortingLayer_4() const { return ___SortingLayer_4; }
	inline int32_t* get_address_of_SortingLayer_4() { return &___SortingLayer_4; }
	inline void set_SortingLayer_4(int32_t value)
	{
		___SortingLayer_4 = value;
	}

	inline static int32_t get_offset_of_SortingOrder_5() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___SortingOrder_5)); }
	inline int32_t get_SortingOrder_5() const { return ___SortingOrder_5; }
	inline int32_t* get_address_of_SortingOrder_5() { return &___SortingOrder_5; }
	inline void set_SortingOrder_5(int32_t value)
	{
		___SortingOrder_5 = value;
	}

	inline static int32_t get_offset_of_Graphic_6() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___Graphic_6)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_Graphic_6() const { return ___Graphic_6; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_Graphic_6() { return &___Graphic_6; }
	inline void set_Graphic_6(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___Graphic_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Graphic_6), (void*)value);
	}

	inline static int32_t get_offset_of_WorldPosition_7() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___WorldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_WorldPosition_7() const { return ___WorldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_WorldPosition_7() { return &___WorldPosition_7; }
	inline void set_WorldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___WorldPosition_7 = value;
	}

	inline static int32_t get_offset_of_WorldNormal_8() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___WorldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_WorldNormal_8() const { return ___WorldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_WorldNormal_8() { return &___WorldNormal_8; }
	inline void set_WorldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___WorldNormal_8 = value;
	}

	inline static int32_t get_offset_of_Distance_9() { return static_cast<int32_t>(offsetof(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684, ___Distance_9)); }
	inline float get_Distance_9() const { return ___Distance_9; }
	inline float* get_address_of_Distance_9() { return &___Distance_9; }
	inline void set_Distance_9(float value)
	{
		___Distance_9 = value;
	}
};

// Native definition for P/Invoke marshalling of TouchScript.Hit.RaycastHitUI
struct RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684_marshaled_pinvoke
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Target_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___Raycaster_1;
	int32_t ___GraphicIndex_2;
	int32_t ___Depth_3;
	int32_t ___SortingLayer_4;
	int32_t ___SortingOrder_5;
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___Graphic_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldNormal_8;
	float ___Distance_9;
};
// Native definition for COM marshalling of TouchScript.Hit.RaycastHitUI
struct RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684_marshaled_com
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Target_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___Raycaster_1;
	int32_t ___GraphicIndex_2;
	int32_t ___Depth_3;
	int32_t ___SortingLayer_4;
	int32_t ___SortingOrder_5;
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___Graphic_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldNormal_8;
	float ___Distance_9;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.RenderMode
struct RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Profiling.Sampler
struct Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Profiling.Sampler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90_StaticFields
{
public:
	// UnityEngine.Profiling.Sampler UnityEngine.Profiling.Sampler::s_InvalidSampler
	Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 * ___s_InvalidSampler_1;

public:
	inline static int32_t get_offset_of_s_InvalidSampler_1() { return static_cast<int32_t>(offsetof(Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90_StaticFields, ___s_InvalidSampler_1)); }
	inline Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 * get_s_InvalidSampler_1() const { return ___s_InvalidSampler_1; }
	inline Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 ** get_address_of_s_InvalidSampler_1() { return &___s_InvalidSampler_1; }
	inline void set_s_InvalidSampler_1(Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 * value)
	{
		___s_InvalidSampler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InvalidSampler_1), (void*)value);
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Gestures.FlickGesture/GestureDirection
struct GestureDirection_t8BEDE65C89C2E1B034B6342B2E22CF2B0E753287 
{
public:
	// System.Int32 TouchScript.Gestures.FlickGesture/GestureDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureDirection_t8BEDE65C89C2E1B034B6342B2E22CF2B0E753287, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Layers.FullscreenLayer/LayerType
struct LayerType_t78B5931E811DD2FF7F8FC79607455B1144CD0884 
{
public:
	// System.Int32 TouchScript.Layers.FullscreenLayer/LayerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayerType_t78B5931E811DD2FF7F8FC79607455B1144CD0884, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Gestures.Gesture/GestureEvent
struct GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF  : public UnityEvent_1_tD4246030226F4144B39294A9484E152A5249BF4B
{
public:

public:
};


// TouchScript.Gestures.Gesture/GestureState
struct GestureState_t84542420A81F42DFFFEE690ACBE81213A418B8EB 
{
public:
	// System.Int32 TouchScript.Gestures.Gesture/GestureState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureState_t84542420A81F42DFFFEE690ACBE81213A418B8EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Gestures.Gesture/PointersNumState
struct PointersNumState_t040B6C027330BB1F7FEAB1AFD286DF6793906903 
{
public:
	// System.Int32 TouchScript.Gestures.Gesture/PointersNumState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointersNumState_t040B6C027330BB1F7FEAB1AFD286DF6793906903, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Behaviors.Cursors.UI.GradientTexture/Res
struct Res_tFC4CD7C39062BF3A9ABF48EE23398C7620B2BDE3 
{
public:
	// System.Int32 TouchScript.Behaviors.Cursors.UI.GradientTexture/Res::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Res_tFC4CD7C39062BF3A9ABF48EE23398C7620B2BDE3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Hit.HitData/HitType
struct HitType_t34942F632DB0D4C1FBBE201E04EDEA1B079B96DE 
{
public:
	// System.Int32 TouchScript.Hit.HitData/HitType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HitType_t34942F632DB0D4C1FBBE201E04EDEA1B079B96DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.InputSources.InputHandlers.MouseHandler/State
struct State_t5AB2C17539CACF8AD8FD74E3A6FA94F7FD09E81B 
{
public:
	// System.Int32 TouchScript.InputSources.InputHandlers.MouseHandler/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t5AB2C17539CACF8AD8FD74E3A6FA94F7FD09E81B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Examples.Portal.Planet/PlanetStatus
struct PlanetStatus_t25247EB0041C11663A09042F71667E3D44FEED0A 
{
public:
	// System.Int32 TouchScript.Examples.Portal.Planet/PlanetStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlanetStatus_t25247EB0041C11663A09042F71667E3D44FEED0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Pointers.Pointer/PointerButtonState
struct PointerButtonState_tCB099683F3F9270291F3FF990ADDD69DCCF474CA 
{
public:
	// System.Int32 TouchScript.Pointers.Pointer/PointerButtonState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerButtonState_tCB099683F3F9270291F3FF990ADDD69DCCF474CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Pointers.Pointer/PointerType
struct PointerType_t69E3EBDA867D61AA490713F9CA96F34C8AB2C964 
{
public:
	// System.Int32 TouchScript.Pointers.Pointer/PointerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerType_t69E3EBDA867D61AA490713F9CA96F34C8AB2C964, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Behaviors.Cursors.PointerCursor/CursorState
struct CursorState_t339D24A8B0820175774C4800C6AE4B6C539F3F08 
{
public:
	// System.Int32 TouchScript.Behaviors.Cursors.PointerCursor/CursorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorState_t339D24A8B0820175774C4800C6AE4B6C539F3F08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.InputSources.StandardInput/Windows7APIType
struct Windows7APIType_t04FF9EA200BDFA5434E0E71865DE8B319B93379F 
{
public:
	// System.Int32 TouchScript.InputSources.StandardInput/Windows7APIType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Windows7APIType_t04FF9EA200BDFA5434E0E71865DE8B319B93379F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.InputSources.StandardInput/Windows8APIType
struct Windows8APIType_t1D09C37E6A4CB04203BBCBB701E4DA1D4E12D553 
{
public:
	// System.Int32 TouchScript.InputSources.StandardInput/Windows8APIType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Windows8APIType_t1D09C37E6A4CB04203BBCBB701E4DA1D4E12D553, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.TouchManager/FrameEvent
struct FrameEvent_tBE7C5305E37511A74D08891DE781BABE28FB3BB6  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// TouchScript.TouchManager/MessageName
struct MessageName_tD28775FB845A617E63683189F7662F7707C439B5 
{
public:
	// System.Int32 TouchScript.TouchManager/MessageName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageName_tD28775FB845A617E63683189F7662F7707C439B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.TouchManager/MessageType
struct MessageType_t72B7BC838F6EF224FADCD61D63CFB7938B45A31D 
{
public:
	// System.Int32 TouchScript.TouchManager/MessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_t72B7BC838F6EF224FADCD61D63CFB7938B45A31D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.TouchManager/PointerEvent
struct PointerEvent_t07498AC2731735A9CFFA0FF78D2B82678C72CE95  : public UnityEvent_1_t1C0EAC39F0669D2DF7E6E070EFF4363AA5F60788
{
public:

public:
};


// TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule
struct UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A  : public RuntimeObject
{
public:
	// TouchScript.Layers.UI.TouchScriptInputModule TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::input
	TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * ___input_0;
	// UnityEngine.Profiling.CustomSampler TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::uiSampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___uiSampler_1;
	// System.Int32 TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_2;
	// UnityEngine.Vector2 TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_3;
	// System.Single TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::m_PrevActionTime
	float ___m_PrevActionTime_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_5;

public:
	inline static int32_t get_offset_of_input_0() { return static_cast<int32_t>(offsetof(UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A, ___input_0)); }
	inline TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * get_input_0() const { return ___input_0; }
	inline TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 ** get_address_of_input_0() { return &___input_0; }
	inline void set_input_0(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * value)
	{
		___input_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_0), (void*)value);
	}

	inline static int32_t get_offset_of_uiSampler_1() { return static_cast<int32_t>(offsetof(UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A, ___uiSampler_1)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_uiSampler_1() const { return ___uiSampler_1; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_uiSampler_1() { return &___uiSampler_1; }
	inline void set_uiSampler_1(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___uiSampler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiSampler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_2() { return static_cast<int32_t>(offsetof(UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A, ___m_ConsecutiveMoveCount_2)); }
	inline int32_t get_m_ConsecutiveMoveCount_2() const { return ___m_ConsecutiveMoveCount_2; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_2() { return &___m_ConsecutiveMoveCount_2; }
	inline void set_m_ConsecutiveMoveCount_2(int32_t value)
	{
		___m_ConsecutiveMoveCount_2 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_3() { return static_cast<int32_t>(offsetof(UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A, ___m_LastMoveVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_3() const { return ___m_LastMoveVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_3() { return &___m_LastMoveVector_3; }
	inline void set_m_LastMoveVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_3 = value;
	}

	inline static int32_t get_offset_of_m_PrevActionTime_4() { return static_cast<int32_t>(offsetof(UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A, ___m_PrevActionTime_4)); }
	inline float get_m_PrevActionTime_4() const { return ___m_PrevActionTime_4; }
	inline float* get_address_of_m_PrevActionTime_4() { return &___m_PrevActionTime_4; }
	inline void set_m_PrevActionTime_4(float value)
	{
		___m_PrevActionTime_4 = value;
	}

	inline static int32_t get_offset_of_m_PointerData_5() { return static_cast<int32_t>(offsetof(UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A, ___m_PointerData_5)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_5() const { return ___m_PointerData_5; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_5() { return &___m_PointerData_5; }
	inline void set_m_PointerData_5(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_5), (void*)value);
	}
};


// TouchScript.Gestures.TransformGestures.TransformGesture/ProjectionType
struct ProjectionType_t6E3C5A883BC9564D3E81A332906B692EBFD5EA7E 
{
public:
	// System.Int32 TouchScript.Gestures.TransformGestures.TransformGesture/ProjectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProjectionType_t6E3C5A883BC9564D3E81A332906B692EBFD5EA7E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Gestures.TransformGestures.TransformGesture/TransformType
struct TransformType_t5A6B72EA590625554792B0632940D477E5F7444E 
{
public:
	// System.Int32 TouchScript.Gestures.TransformGestures.TransformGesture/TransformType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformType_t5A6B72EA590625554792B0632940D477E5F7444E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TouchScript.Behaviors.Transformer/TransformerState
struct TransformerState_t40481BF3D80D1E423C0D0B19DB01C9B2FD161C23 
{
public:
	// System.Int32 TouchScript.Behaviors.Transformer/TransformerState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformerState_t40481BF3D80D1E423C0D0B19DB01C9B2FD161C23, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::<moveVector>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CmoveVectorU3Ek__BackingField_2;
	// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::<moveDir>k__BackingField
	int32_t ___U3CmoveDirU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CmoveVectorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E, ___U3CmoveVectorU3Ek__BackingField_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CmoveVectorU3Ek__BackingField_2() const { return ___U3CmoveVectorU3Ek__BackingField_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CmoveVectorU3Ek__BackingField_2() { return &___U3CmoveVectorU3Ek__BackingField_2; }
	inline void set_U3CmoveVectorU3Ek__BackingField_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CmoveVectorU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmoveDirU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E, ___U3CmoveDirU3Ek__BackingField_3)); }
	inline int32_t get_U3CmoveDirU3Ek__BackingField_3() const { return ___U3CmoveDirU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CmoveDirU3Ek__BackingField_3() { return &___U3CmoveDirU3Ek__BackingField_3; }
	inline void set_U3CmoveDirU3Ek__BackingField_3(int32_t value)
	{
		___U3CmoveDirU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Profiling.CustomSampler
struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24  : public Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90
{
public:

public:
};

struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_StaticFields
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Profiling.CustomSampler::s_InvalidCustomSampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___s_InvalidCustomSampler_2;

public:
	inline static int32_t get_offset_of_s_InvalidCustomSampler_2() { return static_cast<int32_t>(offsetof(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_StaticFields, ___s_InvalidCustomSampler_2)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_s_InvalidCustomSampler_2() const { return ___s_InvalidCustomSampler_2; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_s_InvalidCustomSampler_2() { return &___s_InvalidCustomSampler_2; }
	inline void set_s_InvalidCustomSampler_2(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___s_InvalidCustomSampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InvalidCustomSampler_2), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// TouchScript.Gestures.GestureStateChangeEventArgs
struct GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_1;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPreviousStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D, ___U3CPreviousStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CPreviousStateU3Ek__BackingField_1() const { return ___U3CPreviousStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CPreviousStateU3Ek__BackingField_1() { return &___U3CPreviousStateU3Ek__BackingField_1; }
	inline void set_U3CPreviousStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CPreviousStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D, ___U3CStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CStateU3Ek__BackingField_2() const { return ___U3CStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_2() { return &___U3CStateU3Ek__BackingField_2; }
	inline void set_U3CStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CStateU3Ek__BackingField_2 = value;
	}
};

struct GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D_StaticFields
{
public:
	// TouchScript.Gestures.GestureStateChangeEventArgs TouchScript.Gestures.GestureStateChangeEventArgs::instance
	GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D_StaticFields, ___instance_3)); }
	inline GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * get_instance_3() const { return ___instance_3; }
	inline GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_3), (void*)value);
	}
};


// TouchScript.Hit.HitData
struct HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 
{
public:
	// TouchScript.Hit.HitData/HitType TouchScript.Hit.HitData::type
	int32_t ___type_0;
	// UnityEngine.Transform TouchScript.Hit.HitData::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_1;
	// System.Boolean TouchScript.Hit.HitData::screenSpace
	bool ___screenSpace_2;
	// TouchScript.Layers.TouchLayer TouchScript.Hit.HitData::layer
	TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * ___layer_3;
	// UnityEngine.RaycastHit TouchScript.Hit.HitData::raycastHit
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___raycastHit_4;
	// UnityEngine.RaycastHit2D TouchScript.Hit.HitData::raycastHit2D
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___raycastHit2D_5;
	// TouchScript.Hit.RaycastHitUI TouchScript.Hit.HitData::raycastHitUI
	RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  ___raycastHitUI_6;
	// System.Int32 TouchScript.Hit.HitData::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 TouchScript.Hit.HitData::sortingOrder
	int32_t ___sortingOrder_8;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4, ___target_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_1() const { return ___target_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}

	inline static int32_t get_offset_of_screenSpace_2() { return static_cast<int32_t>(offsetof(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4, ___screenSpace_2)); }
	inline bool get_screenSpace_2() const { return ___screenSpace_2; }
	inline bool* get_address_of_screenSpace_2() { return &___screenSpace_2; }
	inline void set_screenSpace_2(bool value)
	{
		___screenSpace_2 = value;
	}

	inline static int32_t get_offset_of_layer_3() { return static_cast<int32_t>(offsetof(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4, ___layer_3)); }
	inline TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * get_layer_3() const { return ___layer_3; }
	inline TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 ** get_address_of_layer_3() { return &___layer_3; }
	inline void set_layer_3(TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * value)
	{
		___layer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layer_3), (void*)value);
	}

	inline static int32_t get_offset_of_raycastHit_4() { return static_cast<int32_t>(offsetof(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4, ___raycastHit_4)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_raycastHit_4() const { return ___raycastHit_4; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_raycastHit_4() { return &___raycastHit_4; }
	inline void set_raycastHit_4(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___raycastHit_4 = value;
	}

	inline static int32_t get_offset_of_raycastHit2D_5() { return static_cast<int32_t>(offsetof(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4, ___raycastHit2D_5)); }
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  get_raycastHit2D_5() const { return ___raycastHit2D_5; }
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * get_address_of_raycastHit2D_5() { return &___raycastHit2D_5; }
	inline void set_raycastHit2D_5(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  value)
	{
		___raycastHit2D_5 = value;
	}

	inline static int32_t get_offset_of_raycastHitUI_6() { return static_cast<int32_t>(offsetof(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4, ___raycastHitUI_6)); }
	inline RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  get_raycastHitUI_6() const { return ___raycastHitUI_6; }
	inline RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684 * get_address_of_raycastHitUI_6() { return &___raycastHitUI_6; }
	inline void set_raycastHitUI_6(RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  value)
	{
		___raycastHitUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___raycastHitUI_6))->___Target_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___raycastHitUI_6))->___Raycaster_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___raycastHitUI_6))->___Graphic_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sortingLayer_7() { return static_cast<int32_t>(offsetof(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4, ___sortingLayer_7)); }
	inline int32_t get_sortingLayer_7() const { return ___sortingLayer_7; }
	inline int32_t* get_address_of_sortingLayer_7() { return &___sortingLayer_7; }
	inline void set_sortingLayer_7(int32_t value)
	{
		___sortingLayer_7 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_8() { return static_cast<int32_t>(offsetof(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4, ___sortingOrder_8)); }
	inline int32_t get_sortingOrder_8() const { return ___sortingOrder_8; }
	inline int32_t* get_address_of_sortingOrder_8() { return &___sortingOrder_8; }
	inline void set_sortingOrder_8(int32_t value)
	{
		___sortingOrder_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TouchScript.Hit.HitData
struct HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4_marshaled_pinvoke
{
	int32_t ___type_0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_1;
	int32_t ___screenSpace_2;
	TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * ___layer_3;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___raycastHit_4;
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___raycastHit2D_5;
	RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684_marshaled_pinvoke ___raycastHitUI_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
};
// Native definition for COM marshalling of TouchScript.Hit.HitData
struct HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4_marshaled_com
{
	int32_t ___type_0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_1;
	int32_t ___screenSpace_2;
	TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * ___layer_3;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___raycastHit_4;
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___raycastHit2D_5;
	RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684_marshaled_com ___raycastHitUI_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TouchScript.Layers.WorldSpaceCanvasProjectionParams
struct WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5  : public ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5
{
public:
	// UnityEngine.Canvas TouchScript.Layers.WorldSpaceCanvasProjectionParams::canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas_0;
	// UnityEngine.RenderMode TouchScript.Layers.WorldSpaceCanvasProjectionParams::mode
	int32_t ___mode_1;
	// UnityEngine.Camera TouchScript.Layers.WorldSpaceCanvasProjectionParams::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_2;

public:
	inline static int32_t get_offset_of_canvas_0() { return static_cast<int32_t>(offsetof(WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5, ___canvas_0)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas_0() const { return ___canvas_0; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas_0() { return &___canvas_0; }
	inline void set_canvas_0(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_0), (void*)value);
	}

	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5, ___camera_2)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_2() const { return ___camera_2; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_2), (void*)value);
	}
};


// TouchScript.InputSources.InputHandlers.TouchHandler/TouchState
struct TouchState_t648502A120A8AA87F740560422538F317A483E56 
{
public:
	// TouchScript.Pointers.Pointer TouchScript.InputSources.InputHandlers.TouchHandler/TouchState::Pointer
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * ___Pointer_0;
	// UnityEngine.TouchPhase TouchScript.InputSources.InputHandlers.TouchHandler/TouchState::Phase
	int32_t ___Phase_1;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(TouchState_t648502A120A8AA87F740560422538F317A483E56, ___Pointer_0)); }
	inline Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * get_Pointer_0() const { return ___Pointer_0; }
	inline Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B ** get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * value)
	{
		___Pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Phase_1() { return static_cast<int32_t>(offsetof(TouchState_t648502A120A8AA87F740560422538F317A483E56, ___Phase_1)); }
	inline int32_t get_Phase_1() const { return ___Phase_1; }
	inline int32_t* get_address_of_Phase_1() { return &___Phase_1; }
	inline void set_Phase_1(int32_t value)
	{
		___Phase_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TouchScript.InputSources.InputHandlers.TouchHandler/TouchState
struct TouchState_t648502A120A8AA87F740560422538F317A483E56_marshaled_pinvoke
{
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * ___Pointer_0;
	int32_t ___Phase_1;
};
// Native definition for COM marshalling of TouchScript.InputSources.InputHandlers.TouchHandler/TouchState
struct TouchState_t648502A120A8AA87F740560422538F317A483E56_marshaled_com
{
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * ___Pointer_0;
	int32_t ___Phase_1;
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
struct EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// TouchScript.Pointers.Pointer
struct Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B  : public RuntimeObject
{
public:
	// System.Int32 TouchScript.Pointers.Pointer::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;
	// TouchScript.Pointers.Pointer/PointerType TouchScript.Pointers.Pointer::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_5;
	// TouchScript.Pointers.Pointer/PointerButtonState TouchScript.Pointers.Pointer::<Buttons>k__BackingField
	int32_t ___U3CButtonsU3Ek__BackingField_6;
	// TouchScript.InputSources.IInputSource TouchScript.Pointers.Pointer::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_7;
	// UnityEngine.Vector2 TouchScript.Pointers.Pointer::<PreviousPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CPreviousPositionU3Ek__BackingField_8;
	// System.UInt32 TouchScript.Pointers.Pointer::<Flags>k__BackingField
	uint32_t ___U3CFlagsU3Ek__BackingField_9;
	// TouchScript.Core.LayerManagerInstance TouchScript.Pointers.Pointer::layerManager
	LayerManagerInstance_tD02618FFFC1979E15C99BBC844F59636B7491956 * ___layerManager_11;
	// System.Int32 TouchScript.Pointers.Pointer::refCount
	int32_t ___refCount_12;
	// UnityEngine.Vector2 TouchScript.Pointers.Pointer::position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position_13;
	// UnityEngine.Vector2 TouchScript.Pointers.Pointer::newPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newPosition_14;
	// TouchScript.Hit.HitData TouchScript.Pointers.Pointer::pressData
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  ___pressData_15;
	// TouchScript.Hit.HitData TouchScript.Pointers.Pointer::overData
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  ___overData_16;
	// System.Boolean TouchScript.Pointers.Pointer::overDataIsDirty
	bool ___overDataIsDirty_17;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___U3CIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CIdU3Ek__BackingField_4() const { return ___U3CIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_4() { return &___U3CIdU3Ek__BackingField_4; }
	inline void set_U3CIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___U3CTypeU3Ek__BackingField_5)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_5() const { return ___U3CTypeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_5() { return &___U3CTypeU3Ek__BackingField_5; }
	inline void set_U3CTypeU3Ek__BackingField_5(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CButtonsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___U3CButtonsU3Ek__BackingField_6)); }
	inline int32_t get_U3CButtonsU3Ek__BackingField_6() const { return ___U3CButtonsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CButtonsU3Ek__BackingField_6() { return &___U3CButtonsU3Ek__BackingField_6; }
	inline void set_U3CButtonsU3Ek__BackingField_6(int32_t value)
	{
		___U3CButtonsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___U3CInputSourceU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_7() const { return ___U3CInputSourceU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_7() { return &___U3CInputSourceU3Ek__BackingField_7; }
	inline void set_U3CInputSourceU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousPositionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___U3CPreviousPositionU3Ek__BackingField_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CPreviousPositionU3Ek__BackingField_8() const { return ___U3CPreviousPositionU3Ek__BackingField_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CPreviousPositionU3Ek__BackingField_8() { return &___U3CPreviousPositionU3Ek__BackingField_8; }
	inline void set_U3CPreviousPositionU3Ek__BackingField_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CPreviousPositionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CFlagsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___U3CFlagsU3Ek__BackingField_9)); }
	inline uint32_t get_U3CFlagsU3Ek__BackingField_9() const { return ___U3CFlagsU3Ek__BackingField_9; }
	inline uint32_t* get_address_of_U3CFlagsU3Ek__BackingField_9() { return &___U3CFlagsU3Ek__BackingField_9; }
	inline void set_U3CFlagsU3Ek__BackingField_9(uint32_t value)
	{
		___U3CFlagsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_layerManager_11() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___layerManager_11)); }
	inline LayerManagerInstance_tD02618FFFC1979E15C99BBC844F59636B7491956 * get_layerManager_11() const { return ___layerManager_11; }
	inline LayerManagerInstance_tD02618FFFC1979E15C99BBC844F59636B7491956 ** get_address_of_layerManager_11() { return &___layerManager_11; }
	inline void set_layerManager_11(LayerManagerInstance_tD02618FFFC1979E15C99BBC844F59636B7491956 * value)
	{
		___layerManager_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerManager_11), (void*)value);
	}

	inline static int32_t get_offset_of_refCount_12() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___refCount_12)); }
	inline int32_t get_refCount_12() const { return ___refCount_12; }
	inline int32_t* get_address_of_refCount_12() { return &___refCount_12; }
	inline void set_refCount_12(int32_t value)
	{
		___refCount_12 = value;
	}

	inline static int32_t get_offset_of_position_13() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___position_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_position_13() const { return ___position_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_position_13() { return &___position_13; }
	inline void set_position_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___position_13 = value;
	}

	inline static int32_t get_offset_of_newPosition_14() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___newPosition_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_newPosition_14() const { return ___newPosition_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_newPosition_14() { return &___newPosition_14; }
	inline void set_newPosition_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___newPosition_14 = value;
	}

	inline static int32_t get_offset_of_pressData_15() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___pressData_15)); }
	inline HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  get_pressData_15() const { return ___pressData_15; }
	inline HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 * get_address_of_pressData_15() { return &___pressData_15; }
	inline void set_pressData_15(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  value)
	{
		___pressData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pressData_15))->___target_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___pressData_15))->___layer_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___pressData_15))->___raycastHitUI_6))->___Target_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___pressData_15))->___raycastHitUI_6))->___Raycaster_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___pressData_15))->___raycastHitUI_6))->___Graphic_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_overData_16() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___overData_16)); }
	inline HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  get_overData_16() const { return ___overData_16; }
	inline HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 * get_address_of_overData_16() { return &___overData_16; }
	inline void set_overData_16(HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  value)
	{
		___overData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___overData_16))->___target_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___overData_16))->___layer_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___overData_16))->___raycastHitUI_6))->___Target_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___overData_16))->___raycastHitUI_6))->___Raycaster_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___overData_16))->___raycastHitUI_6))->___Graphic_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_overDataIsDirty_17() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B, ___overDataIsDirty_17)); }
	inline bool get_overDataIsDirty_17() const { return ___overDataIsDirty_17; }
	inline bool* get_address_of_overDataIsDirty_17() { return &___overDataIsDirty_17; }
	inline void set_overDataIsDirty_17(bool value)
	{
		___overDataIsDirty_17 = value;
	}
};

struct Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B_StaticFields
{
public:
	// System.Text.StringBuilder TouchScript.Pointers.Pointer::builder
	StringBuilder_t * ___builder_10;

public:
	inline static int32_t get_offset_of_builder_10() { return static_cast<int32_t>(offsetof(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B_StaticFields, ___builder_10)); }
	inline StringBuilder_t * get_builder_10() const { return ___builder_10; }
	inline StringBuilder_t ** get_address_of_builder_10() { return &___builder_10; }
	inline void set_builder_10(StringBuilder_t * value)
	{
		___builder_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_10), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// TouchScript.Pointers.MousePointer
struct MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B  : public Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B
{
public:
	// UnityEngine.Vector2 TouchScript.Pointers.MousePointer::<ScrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CScrollDeltaU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CScrollDeltaU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B, ___U3CScrollDeltaU3Ek__BackingField_18)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CScrollDeltaU3Ek__BackingField_18() const { return ___U3CScrollDeltaU3Ek__BackingField_18; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CScrollDeltaU3Ek__BackingField_18() { return &___U3CScrollDeltaU3Ek__BackingField_18; }
	inline void set_U3CScrollDeltaU3Ek__BackingField_18(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CScrollDeltaU3Ek__BackingField_18 = value;
	}
};


// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// TouchScript.Core.DebuggableMonoBehaviour
struct DebuggableMonoBehaviour_tFE11E4537DDA6B44E9D8FA5900FF454360108109  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TouchScript.Hit.HitTest
struct HitTest_tE32CEF25F8B0640C77DFDDC28F38100EF0175086  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TouchScript.Examples.KillMe
struct KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TouchScript.Examples.KillMe::Delay
	float ___Delay_4;

public:
	inline static int32_t get_offset_of_Delay_4() { return static_cast<int32_t>(offsetof(KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55, ___Delay_4)); }
	inline float get_Delay_4() const { return ___Delay_4; }
	inline float* get_address_of_Delay_4() { return &___Delay_4; }
	inline void set_Delay_4(float value)
	{
		___Delay_4 = value;
	}
};


// TouchScript.Examples.Portal.Planet
struct Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TouchScript.Examples.Portal.Planet::Speed
	float ___Speed_4;
	// System.Single TouchScript.Examples.Portal.Planet::RotationSpeed
	float ___RotationSpeed_5;
	// System.Single TouchScript.Examples.Portal.Planet::FallSpeed
	float ___FallSpeed_6;
	// TouchScript.Examples.Portal.Planet/PlanetStatus TouchScript.Examples.Portal.Planet::status
	int32_t ___status_7;

public:
	inline static int32_t get_offset_of_Speed_4() { return static_cast<int32_t>(offsetof(Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210, ___Speed_4)); }
	inline float get_Speed_4() const { return ___Speed_4; }
	inline float* get_address_of_Speed_4() { return &___Speed_4; }
	inline void set_Speed_4(float value)
	{
		___Speed_4 = value;
	}

	inline static int32_t get_offset_of_RotationSpeed_5() { return static_cast<int32_t>(offsetof(Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210, ___RotationSpeed_5)); }
	inline float get_RotationSpeed_5() const { return ___RotationSpeed_5; }
	inline float* get_address_of_RotationSpeed_5() { return &___RotationSpeed_5; }
	inline void set_RotationSpeed_5(float value)
	{
		___RotationSpeed_5 = value;
	}

	inline static int32_t get_offset_of_FallSpeed_6() { return static_cast<int32_t>(offsetof(Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210, ___FallSpeed_6)); }
	inline float get_FallSpeed_6() const { return ___FallSpeed_6; }
	inline float* get_address_of_FallSpeed_6() { return &___FallSpeed_6; }
	inline void set_FallSpeed_6(float value)
	{
		___FallSpeed_6 = value;
	}

	inline static int32_t get_offset_of_status_7() { return static_cast<int32_t>(offsetof(Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210, ___status_7)); }
	inline int32_t get_status_7() const { return ___status_7; }
	inline int32_t* get_address_of_status_7() { return &___status_7; }
	inline void set_status_7(int32_t value)
	{
		___status_7 = value;
	}
};


// TouchScript.Examples.Runner
struct Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TouchScript.Layers.TouchLayer TouchScript.Examples.Runner::layer
	TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * ___layer_5;

public:
	inline static int32_t get_offset_of_layer_5() { return static_cast<int32_t>(offsetof(Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137, ___layer_5)); }
	inline TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * get_layer_5() const { return ___layer_5; }
	inline TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 ** get_address_of_layer_5() { return &___layer_5; }
	inline void set_layer_5(TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * value)
	{
		___layer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layer_5), (void*)value);
	}
};

struct Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137_StaticFields
{
public:
	// TouchScript.Examples.Runner TouchScript.Examples.Runner::instance
	Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137_StaticFields, ___instance_4)); }
	inline Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 * get_instance_4() const { return ___instance_4; }
	inline Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// ShowMe
struct ShowMe_t597B31A3BE68F874BC2A433D56F7D674394BD6E5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TouchScript.Layers.TouchLayer
struct TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs> TouchScript.Layers.TouchLayer::pointerPressInvoker
	EventHandler_1_t3CFF00107B7CBAC82411C1D58C923482E7FD9865 * ___pointerPressInvoker_4;
	// System.String TouchScript.Layers.TouchLayer::Name
	String_t* ___Name_5;
	// TouchScript.Layers.ILayerDelegate TouchScript.Layers.TouchLayer::<Delegate>k__BackingField
	RuntimeObject* ___U3CDelegateU3Ek__BackingField_6;
	// TouchScript.Layers.ProjectionParams TouchScript.Layers.TouchLayer::layerProjectionParams
	ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * ___layerProjectionParams_7;
	// TouchScript.ILayerManager TouchScript.Layers.TouchLayer::manager
	RuntimeObject* ___manager_8;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitTest> TouchScript.Layers.TouchLayer::tmpHitTestList
	List_1_tDB51762FD609812A127444CC3D6C069AC13BAF67 * ___tmpHitTestList_9;

public:
	inline static int32_t get_offset_of_pointerPressInvoker_4() { return static_cast<int32_t>(offsetof(TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218, ___pointerPressInvoker_4)); }
	inline EventHandler_1_t3CFF00107B7CBAC82411C1D58C923482E7FD9865 * get_pointerPressInvoker_4() const { return ___pointerPressInvoker_4; }
	inline EventHandler_1_t3CFF00107B7CBAC82411C1D58C923482E7FD9865 ** get_address_of_pointerPressInvoker_4() { return &___pointerPressInvoker_4; }
	inline void set_pointerPressInvoker_4(EventHandler_1_t3CFF00107B7CBAC82411C1D58C923482E7FD9865 * value)
	{
		___pointerPressInvoker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerPressInvoker_4), (void*)value);
	}

	inline static int32_t get_offset_of_Name_5() { return static_cast<int32_t>(offsetof(TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218, ___Name_5)); }
	inline String_t* get_Name_5() const { return ___Name_5; }
	inline String_t** get_address_of_Name_5() { return &___Name_5; }
	inline void set_Name_5(String_t* value)
	{
		___Name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDelegateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218, ___U3CDelegateU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDelegateU3Ek__BackingField_6() const { return ___U3CDelegateU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDelegateU3Ek__BackingField_6() { return &___U3CDelegateU3Ek__BackingField_6; }
	inline void set_U3CDelegateU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDelegateU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDelegateU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_layerProjectionParams_7() { return static_cast<int32_t>(offsetof(TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218, ___layerProjectionParams_7)); }
	inline ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * get_layerProjectionParams_7() const { return ___layerProjectionParams_7; }
	inline ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 ** get_address_of_layerProjectionParams_7() { return &___layerProjectionParams_7; }
	inline void set_layerProjectionParams_7(ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * value)
	{
		___layerProjectionParams_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerProjectionParams_7), (void*)value);
	}

	inline static int32_t get_offset_of_manager_8() { return static_cast<int32_t>(offsetof(TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218, ___manager_8)); }
	inline RuntimeObject* get_manager_8() const { return ___manager_8; }
	inline RuntimeObject** get_address_of_manager_8() { return &___manager_8; }
	inline void set_manager_8(RuntimeObject* value)
	{
		___manager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_8), (void*)value);
	}

	inline static int32_t get_offset_of_tmpHitTestList_9() { return static_cast<int32_t>(offsetof(TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218, ___tmpHitTestList_9)); }
	inline List_1_tDB51762FD609812A127444CC3D6C069AC13BAF67 * get_tmpHitTestList_9() const { return ___tmpHitTestList_9; }
	inline List_1_tDB51762FD609812A127444CC3D6C069AC13BAF67 ** get_address_of_tmpHitTestList_9() { return &___tmpHitTestList_9; }
	inline void set_tmpHitTestList_9(List_1_tDB51762FD609812A127444CC3D6C069AC13BAF67 * value)
	{
		___tmpHitTestList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tmpHitTestList_9), (void*)value);
	}
};


// TouchScript.Behaviors.Transformer
struct Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean TouchScript.Behaviors.Transformer::enableSmoothing
	bool ___enableSmoothing_4;
	// System.Single TouchScript.Behaviors.Transformer::smoothingFactor
	float ___smoothingFactor_5;
	// System.Single TouchScript.Behaviors.Transformer::positionThreshold
	float ___positionThreshold_6;
	// System.Single TouchScript.Behaviors.Transformer::rotationThreshold
	float ___rotationThreshold_7;
	// System.Single TouchScript.Behaviors.Transformer::scaleThreshold
	float ___scaleThreshold_8;
	// System.Boolean TouchScript.Behaviors.Transformer::allowChangingFromOutside
	bool ___allowChangingFromOutside_9;
	// TouchScript.Behaviors.Transformer/TransformerState TouchScript.Behaviors.Transformer::state
	int32_t ___state_10;
	// TouchScript.Gestures.TransformGestures.Base.TransformGestureBase TouchScript.Behaviors.Transformer::gesture
	TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * ___gesture_11;
	// UnityEngine.Transform TouchScript.Behaviors.Transformer::cachedTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cachedTransform_12;
	// TouchScript.Gestures.TransformGestures.TransformGesture/TransformType TouchScript.Behaviors.Transformer::transformMask
	int32_t ___transformMask_13;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_14;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer::targetScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetScale_15;
	// UnityEngine.Quaternion TouchScript.Behaviors.Transformer::targetRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___targetRotation_16;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer::lastPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastPosition_17;
	// UnityEngine.Vector3 TouchScript.Behaviors.Transformer::lastScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastScale_18;
	// UnityEngine.Quaternion TouchScript.Behaviors.Transformer::lastRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lastRotation_19;

public:
	inline static int32_t get_offset_of_enableSmoothing_4() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___enableSmoothing_4)); }
	inline bool get_enableSmoothing_4() const { return ___enableSmoothing_4; }
	inline bool* get_address_of_enableSmoothing_4() { return &___enableSmoothing_4; }
	inline void set_enableSmoothing_4(bool value)
	{
		___enableSmoothing_4 = value;
	}

	inline static int32_t get_offset_of_smoothingFactor_5() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___smoothingFactor_5)); }
	inline float get_smoothingFactor_5() const { return ___smoothingFactor_5; }
	inline float* get_address_of_smoothingFactor_5() { return &___smoothingFactor_5; }
	inline void set_smoothingFactor_5(float value)
	{
		___smoothingFactor_5 = value;
	}

	inline static int32_t get_offset_of_positionThreshold_6() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___positionThreshold_6)); }
	inline float get_positionThreshold_6() const { return ___positionThreshold_6; }
	inline float* get_address_of_positionThreshold_6() { return &___positionThreshold_6; }
	inline void set_positionThreshold_6(float value)
	{
		___positionThreshold_6 = value;
	}

	inline static int32_t get_offset_of_rotationThreshold_7() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___rotationThreshold_7)); }
	inline float get_rotationThreshold_7() const { return ___rotationThreshold_7; }
	inline float* get_address_of_rotationThreshold_7() { return &___rotationThreshold_7; }
	inline void set_rotationThreshold_7(float value)
	{
		___rotationThreshold_7 = value;
	}

	inline static int32_t get_offset_of_scaleThreshold_8() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___scaleThreshold_8)); }
	inline float get_scaleThreshold_8() const { return ___scaleThreshold_8; }
	inline float* get_address_of_scaleThreshold_8() { return &___scaleThreshold_8; }
	inline void set_scaleThreshold_8(float value)
	{
		___scaleThreshold_8 = value;
	}

	inline static int32_t get_offset_of_allowChangingFromOutside_9() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___allowChangingFromOutside_9)); }
	inline bool get_allowChangingFromOutside_9() const { return ___allowChangingFromOutside_9; }
	inline bool* get_address_of_allowChangingFromOutside_9() { return &___allowChangingFromOutside_9; }
	inline void set_allowChangingFromOutside_9(bool value)
	{
		___allowChangingFromOutside_9 = value;
	}

	inline static int32_t get_offset_of_state_10() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___state_10)); }
	inline int32_t get_state_10() const { return ___state_10; }
	inline int32_t* get_address_of_state_10() { return &___state_10; }
	inline void set_state_10(int32_t value)
	{
		___state_10 = value;
	}

	inline static int32_t get_offset_of_gesture_11() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___gesture_11)); }
	inline TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * get_gesture_11() const { return ___gesture_11; }
	inline TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 ** get_address_of_gesture_11() { return &___gesture_11; }
	inline void set_gesture_11(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * value)
	{
		___gesture_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesture_11), (void*)value);
	}

	inline static int32_t get_offset_of_cachedTransform_12() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___cachedTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cachedTransform_12() const { return ___cachedTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cachedTransform_12() { return &___cachedTransform_12; }
	inline void set_cachedTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cachedTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_transformMask_13() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___transformMask_13)); }
	inline int32_t get_transformMask_13() const { return ___transformMask_13; }
	inline int32_t* get_address_of_transformMask_13() { return &___transformMask_13; }
	inline void set_transformMask_13(int32_t value)
	{
		___transformMask_13 = value;
	}

	inline static int32_t get_offset_of_targetPosition_14() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___targetPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_14() const { return ___targetPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_14() { return &___targetPosition_14; }
	inline void set_targetPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_14 = value;
	}

	inline static int32_t get_offset_of_targetScale_15() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___targetScale_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetScale_15() const { return ___targetScale_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetScale_15() { return &___targetScale_15; }
	inline void set_targetScale_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetScale_15 = value;
	}

	inline static int32_t get_offset_of_targetRotation_16() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___targetRotation_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_targetRotation_16() const { return ___targetRotation_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_targetRotation_16() { return &___targetRotation_16; }
	inline void set_targetRotation_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___targetRotation_16 = value;
	}

	inline static int32_t get_offset_of_lastPosition_17() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___lastPosition_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastPosition_17() const { return ___lastPosition_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastPosition_17() { return &___lastPosition_17; }
	inline void set_lastPosition_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastPosition_17 = value;
	}

	inline static int32_t get_offset_of_lastScale_18() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___lastScale_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastScale_18() const { return ___lastScale_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastScale_18() { return &___lastScale_18; }
	inline void set_lastScale_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastScale_18 = value;
	}

	inline static int32_t get_offset_of_lastRotation_19() { return static_cast<int32_t>(offsetof(Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98, ___lastRotation_19)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_lastRotation_19() const { return ___lastRotation_19; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_lastRotation_19() { return &___lastRotation_19; }
	inline void set_lastRotation_19(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___lastRotation_19 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// VideoManager
struct VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String VideoManager::url
	String_t* ___url_4;
	// UnityEngine.Video.VideoPlayer VideoManager::vp
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___vp_5;

public:
	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_4), (void*)value);
	}

	inline static int32_t get_offset_of_vp_5() { return static_cast<int32_t>(offsetof(VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6, ___vp_5)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_vp_5() const { return ___vp_5; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_vp_5() { return &___vp_5; }
	inline void set_vp_5(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___vp_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vp_5), (void*)value);
	}
};


// TouchScript.Examples.Portal.Vortex
struct Vortex_tDFD0E77B461DAE1C96455AB7B0FD5D36CE66C298  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WindowManager
struct WindowManager_tE18412F0E79BBF0CD77BB6BFEBE04641BB2D38EA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WindowManager::window
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___window_4;

public:
	inline static int32_t get_offset_of_window_4() { return static_cast<int32_t>(offsetof(WindowManager_tE18412F0E79BBF0CD77BB6BFEBE04641BB2D38EA, ___window_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_window_4() const { return ___window_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_window_4() { return &___window_4; }
	inline void set_window_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___window_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_4), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___m_RootRaycaster_4;

public:
	inline static int32_t get_offset_of_m_RootRaycaster_4() { return static_cast<int32_t>(offsetof(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876, ___m_RootRaycaster_4)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_m_RootRaycaster_4() const { return ___m_RootRaycaster_4; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_m_RootRaycaster_4() { return &___m_RootRaycaster_4; }
	inline void set_m_RootRaycaster_4(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___m_RootRaycaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootRaycaster_4), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// TouchScript.Gestures.Gesture
struct Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90  : public DebuggableMonoBehaviour_tFE11E4537DDA6B44E9D8FA5900FF454360108109
{
public:
	// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs> TouchScript.Gestures.Gesture::stateChangedInvoker
	EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 * ___stateChangedInvoker_6;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Gesture::cancelledInvoker
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___cancelledInvoker_7;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.Gesture::OnStateChange
	GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * ___OnStateChange_8;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_9;
	// TouchScript.IGestureDelegate TouchScript.Gestures.Gesture::<Delegate>k__BackingField
	RuntimeObject* ___U3CDelegateU3Ek__BackingField_10;
	// TouchScript.Core.TouchManagerInstance TouchScript.Gestures.Gesture::<touchManager>k__BackingField
	TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * ___U3CtouchManagerU3Ek__BackingField_11;
	// TouchScript.Gestures.Gesture/PointersNumState TouchScript.Gestures.Gesture::<pointersNumState>k__BackingField
	int32_t ___U3CpointersNumStateU3Ek__BackingField_12;
	// System.Collections.Generic.List`1<TouchScript.Pointers.Pointer> TouchScript.Gestures.Gesture::activePointers
	List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * ___activePointers_13;
	// UnityEngine.Transform TouchScript.Gestures.Gesture::cachedTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cachedTransform_14;
	// System.Boolean TouchScript.Gestures.Gesture::basicEditor
	bool ___basicEditor_15;
	// System.Boolean TouchScript.Gestures.Gesture::generalProps
	bool ___generalProps_16;
	// System.Boolean TouchScript.Gestures.Gesture::limitsProps
	bool ___limitsProps_17;
	// System.Boolean TouchScript.Gestures.Gesture::advancedProps
	bool ___advancedProps_18;
	// System.Int32 TouchScript.Gestures.Gesture::minPointers
	int32_t ___minPointers_19;
	// System.Int32 TouchScript.Gestures.Gesture::maxPointers
	int32_t ___maxPointers_20;
	// System.Boolean TouchScript.Gestures.Gesture::useSendMessage
	bool ___useSendMessage_21;
	// System.Boolean TouchScript.Gestures.Gesture::sendStateChangeMessages
	bool ___sendStateChangeMessages_22;
	// UnityEngine.GameObject TouchScript.Gestures.Gesture::sendMessageTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sendMessageTarget_23;
	// System.Boolean TouchScript.Gestures.Gesture::useUnityEvents
	bool ___useUnityEvents_24;
	// System.Boolean TouchScript.Gestures.Gesture::sendStateChangeEvents
	bool ___sendStateChangeEvents_25;
	// TouchScript.Gestures.Gesture TouchScript.Gestures.Gesture::requireGestureToFail
	Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * ___requireGestureToFail_26;
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.Gestures.Gesture::friendlyGestures
	List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 * ___friendlyGestures_27;
	// System.Int32 TouchScript.Gestures.Gesture::numPointers
	int32_t ___numPointers_28;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.Pointers.Pointer> TouchScript.Gestures.Gesture::readonlyActivePointers
	ReadOnlyCollection_1_tD7568E5741BD945A87163DE1DBDAF82189EF2CDE * ___readonlyActivePointers_29;
	// TouchScript.Core.GestureManagerInstance TouchScript.Gestures.Gesture::gestureManagerInstance
	GestureManagerInstance_tFD447E2AF81F9B44EB326A0E2E545ADDCFF54940 * ___gestureManagerInstance_30;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::delayedStateChange
	int32_t ___delayedStateChange_31;
	// System.Boolean TouchScript.Gestures.Gesture::requiredGestureFailed
	bool ___requiredGestureFailed_32;
	// TouchScript.Pointers.FakePointer TouchScript.Gestures.Gesture::fakePointer
	FakePointer_t26DD1DA5C9B97D4C54BAD2CCF51A0465FD87F46E * ___fakePointer_33;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::state
	int32_t ___state_34;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedScreenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cachedScreenPosition_35;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedPreviousScreenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cachedPreviousScreenPosition_36;

public:
	inline static int32_t get_offset_of_stateChangedInvoker_6() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___stateChangedInvoker_6)); }
	inline EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 * get_stateChangedInvoker_6() const { return ___stateChangedInvoker_6; }
	inline EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 ** get_address_of_stateChangedInvoker_6() { return &___stateChangedInvoker_6; }
	inline void set_stateChangedInvoker_6(EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 * value)
	{
		___stateChangedInvoker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChangedInvoker_6), (void*)value);
	}

	inline static int32_t get_offset_of_cancelledInvoker_7() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___cancelledInvoker_7)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_cancelledInvoker_7() const { return ___cancelledInvoker_7; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_cancelledInvoker_7() { return &___cancelledInvoker_7; }
	inline void set_cancelledInvoker_7(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___cancelledInvoker_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancelledInvoker_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnStateChange_8() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___OnStateChange_8)); }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * get_OnStateChange_8() const { return ___OnStateChange_8; }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF ** get_address_of_OnStateChange_8() { return &___OnStateChange_8; }
	inline void set_OnStateChange_8(GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * value)
	{
		___OnStateChange_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStateChange_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___U3CPreviousStateU3Ek__BackingField_9)); }
	inline int32_t get_U3CPreviousStateU3Ek__BackingField_9() const { return ___U3CPreviousStateU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CPreviousStateU3Ek__BackingField_9() { return &___U3CPreviousStateU3Ek__BackingField_9; }
	inline void set_U3CPreviousStateU3Ek__BackingField_9(int32_t value)
	{
		___U3CPreviousStateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CDelegateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___U3CDelegateU3Ek__BackingField_10)); }
	inline RuntimeObject* get_U3CDelegateU3Ek__BackingField_10() const { return ___U3CDelegateU3Ek__BackingField_10; }
	inline RuntimeObject** get_address_of_U3CDelegateU3Ek__BackingField_10() { return &___U3CDelegateU3Ek__BackingField_10; }
	inline void set_U3CDelegateU3Ek__BackingField_10(RuntimeObject* value)
	{
		___U3CDelegateU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDelegateU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchManagerU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___U3CtouchManagerU3Ek__BackingField_11)); }
	inline TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * get_U3CtouchManagerU3Ek__BackingField_11() const { return ___U3CtouchManagerU3Ek__BackingField_11; }
	inline TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 ** get_address_of_U3CtouchManagerU3Ek__BackingField_11() { return &___U3CtouchManagerU3Ek__BackingField_11; }
	inline void set_U3CtouchManagerU3Ek__BackingField_11(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * value)
	{
		___U3CtouchManagerU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchManagerU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointersNumStateU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___U3CpointersNumStateU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointersNumStateU3Ek__BackingField_12() const { return ___U3CpointersNumStateU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointersNumStateU3Ek__BackingField_12() { return &___U3CpointersNumStateU3Ek__BackingField_12; }
	inline void set_U3CpointersNumStateU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointersNumStateU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_activePointers_13() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___activePointers_13)); }
	inline List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * get_activePointers_13() const { return ___activePointers_13; }
	inline List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 ** get_address_of_activePointers_13() { return &___activePointers_13; }
	inline void set_activePointers_13(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * value)
	{
		___activePointers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointers_13), (void*)value);
	}

	inline static int32_t get_offset_of_cachedTransform_14() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___cachedTransform_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cachedTransform_14() const { return ___cachedTransform_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cachedTransform_14() { return &___cachedTransform_14; }
	inline void set_cachedTransform_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cachedTransform_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedTransform_14), (void*)value);
	}

	inline static int32_t get_offset_of_basicEditor_15() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___basicEditor_15)); }
	inline bool get_basicEditor_15() const { return ___basicEditor_15; }
	inline bool* get_address_of_basicEditor_15() { return &___basicEditor_15; }
	inline void set_basicEditor_15(bool value)
	{
		___basicEditor_15 = value;
	}

	inline static int32_t get_offset_of_generalProps_16() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___generalProps_16)); }
	inline bool get_generalProps_16() const { return ___generalProps_16; }
	inline bool* get_address_of_generalProps_16() { return &___generalProps_16; }
	inline void set_generalProps_16(bool value)
	{
		___generalProps_16 = value;
	}

	inline static int32_t get_offset_of_limitsProps_17() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___limitsProps_17)); }
	inline bool get_limitsProps_17() const { return ___limitsProps_17; }
	inline bool* get_address_of_limitsProps_17() { return &___limitsProps_17; }
	inline void set_limitsProps_17(bool value)
	{
		___limitsProps_17 = value;
	}

	inline static int32_t get_offset_of_advancedProps_18() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___advancedProps_18)); }
	inline bool get_advancedProps_18() const { return ___advancedProps_18; }
	inline bool* get_address_of_advancedProps_18() { return &___advancedProps_18; }
	inline void set_advancedProps_18(bool value)
	{
		___advancedProps_18 = value;
	}

	inline static int32_t get_offset_of_minPointers_19() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___minPointers_19)); }
	inline int32_t get_minPointers_19() const { return ___minPointers_19; }
	inline int32_t* get_address_of_minPointers_19() { return &___minPointers_19; }
	inline void set_minPointers_19(int32_t value)
	{
		___minPointers_19 = value;
	}

	inline static int32_t get_offset_of_maxPointers_20() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___maxPointers_20)); }
	inline int32_t get_maxPointers_20() const { return ___maxPointers_20; }
	inline int32_t* get_address_of_maxPointers_20() { return &___maxPointers_20; }
	inline void set_maxPointers_20(int32_t value)
	{
		___maxPointers_20 = value;
	}

	inline static int32_t get_offset_of_useSendMessage_21() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___useSendMessage_21)); }
	inline bool get_useSendMessage_21() const { return ___useSendMessage_21; }
	inline bool* get_address_of_useSendMessage_21() { return &___useSendMessage_21; }
	inline void set_useSendMessage_21(bool value)
	{
		___useSendMessage_21 = value;
	}

	inline static int32_t get_offset_of_sendStateChangeMessages_22() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___sendStateChangeMessages_22)); }
	inline bool get_sendStateChangeMessages_22() const { return ___sendStateChangeMessages_22; }
	inline bool* get_address_of_sendStateChangeMessages_22() { return &___sendStateChangeMessages_22; }
	inline void set_sendStateChangeMessages_22(bool value)
	{
		___sendStateChangeMessages_22 = value;
	}

	inline static int32_t get_offset_of_sendMessageTarget_23() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___sendMessageTarget_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sendMessageTarget_23() const { return ___sendMessageTarget_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sendMessageTarget_23() { return &___sendMessageTarget_23; }
	inline void set_sendMessageTarget_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sendMessageTarget_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendMessageTarget_23), (void*)value);
	}

	inline static int32_t get_offset_of_useUnityEvents_24() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___useUnityEvents_24)); }
	inline bool get_useUnityEvents_24() const { return ___useUnityEvents_24; }
	inline bool* get_address_of_useUnityEvents_24() { return &___useUnityEvents_24; }
	inline void set_useUnityEvents_24(bool value)
	{
		___useUnityEvents_24 = value;
	}

	inline static int32_t get_offset_of_sendStateChangeEvents_25() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___sendStateChangeEvents_25)); }
	inline bool get_sendStateChangeEvents_25() const { return ___sendStateChangeEvents_25; }
	inline bool* get_address_of_sendStateChangeEvents_25() { return &___sendStateChangeEvents_25; }
	inline void set_sendStateChangeEvents_25(bool value)
	{
		___sendStateChangeEvents_25 = value;
	}

	inline static int32_t get_offset_of_requireGestureToFail_26() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___requireGestureToFail_26)); }
	inline Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * get_requireGestureToFail_26() const { return ___requireGestureToFail_26; }
	inline Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 ** get_address_of_requireGestureToFail_26() { return &___requireGestureToFail_26; }
	inline void set_requireGestureToFail_26(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * value)
	{
		___requireGestureToFail_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requireGestureToFail_26), (void*)value);
	}

	inline static int32_t get_offset_of_friendlyGestures_27() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___friendlyGestures_27)); }
	inline List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 * get_friendlyGestures_27() const { return ___friendlyGestures_27; }
	inline List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 ** get_address_of_friendlyGestures_27() { return &___friendlyGestures_27; }
	inline void set_friendlyGestures_27(List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 * value)
	{
		___friendlyGestures_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendlyGestures_27), (void*)value);
	}

	inline static int32_t get_offset_of_numPointers_28() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___numPointers_28)); }
	inline int32_t get_numPointers_28() const { return ___numPointers_28; }
	inline int32_t* get_address_of_numPointers_28() { return &___numPointers_28; }
	inline void set_numPointers_28(int32_t value)
	{
		___numPointers_28 = value;
	}

	inline static int32_t get_offset_of_readonlyActivePointers_29() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___readonlyActivePointers_29)); }
	inline ReadOnlyCollection_1_tD7568E5741BD945A87163DE1DBDAF82189EF2CDE * get_readonlyActivePointers_29() const { return ___readonlyActivePointers_29; }
	inline ReadOnlyCollection_1_tD7568E5741BD945A87163DE1DBDAF82189EF2CDE ** get_address_of_readonlyActivePointers_29() { return &___readonlyActivePointers_29; }
	inline void set_readonlyActivePointers_29(ReadOnlyCollection_1_tD7568E5741BD945A87163DE1DBDAF82189EF2CDE * value)
	{
		___readonlyActivePointers_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readonlyActivePointers_29), (void*)value);
	}

	inline static int32_t get_offset_of_gestureManagerInstance_30() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___gestureManagerInstance_30)); }
	inline GestureManagerInstance_tFD447E2AF81F9B44EB326A0E2E545ADDCFF54940 * get_gestureManagerInstance_30() const { return ___gestureManagerInstance_30; }
	inline GestureManagerInstance_tFD447E2AF81F9B44EB326A0E2E545ADDCFF54940 ** get_address_of_gestureManagerInstance_30() { return &___gestureManagerInstance_30; }
	inline void set_gestureManagerInstance_30(GestureManagerInstance_tFD447E2AF81F9B44EB326A0E2E545ADDCFF54940 * value)
	{
		___gestureManagerInstance_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gestureManagerInstance_30), (void*)value);
	}

	inline static int32_t get_offset_of_delayedStateChange_31() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___delayedStateChange_31)); }
	inline int32_t get_delayedStateChange_31() const { return ___delayedStateChange_31; }
	inline int32_t* get_address_of_delayedStateChange_31() { return &___delayedStateChange_31; }
	inline void set_delayedStateChange_31(int32_t value)
	{
		___delayedStateChange_31 = value;
	}

	inline static int32_t get_offset_of_requiredGestureFailed_32() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___requiredGestureFailed_32)); }
	inline bool get_requiredGestureFailed_32() const { return ___requiredGestureFailed_32; }
	inline bool* get_address_of_requiredGestureFailed_32() { return &___requiredGestureFailed_32; }
	inline void set_requiredGestureFailed_32(bool value)
	{
		___requiredGestureFailed_32 = value;
	}

	inline static int32_t get_offset_of_fakePointer_33() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___fakePointer_33)); }
	inline FakePointer_t26DD1DA5C9B97D4C54BAD2CCF51A0465FD87F46E * get_fakePointer_33() const { return ___fakePointer_33; }
	inline FakePointer_t26DD1DA5C9B97D4C54BAD2CCF51A0465FD87F46E ** get_address_of_fakePointer_33() { return &___fakePointer_33; }
	inline void set_fakePointer_33(FakePointer_t26DD1DA5C9B97D4C54BAD2CCF51A0465FD87F46E * value)
	{
		___fakePointer_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fakePointer_33), (void*)value);
	}

	inline static int32_t get_offset_of_state_34() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___state_34)); }
	inline int32_t get_state_34() const { return ___state_34; }
	inline int32_t* get_address_of_state_34() { return &___state_34; }
	inline void set_state_34(int32_t value)
	{
		___state_34 = value;
	}

	inline static int32_t get_offset_of_cachedScreenPosition_35() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___cachedScreenPosition_35)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_cachedScreenPosition_35() const { return ___cachedScreenPosition_35; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_cachedScreenPosition_35() { return &___cachedScreenPosition_35; }
	inline void set_cachedScreenPosition_35(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___cachedScreenPosition_35 = value;
	}

	inline static int32_t get_offset_of_cachedPreviousScreenPosition_36() { return static_cast<int32_t>(offsetof(Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90, ___cachedPreviousScreenPosition_36)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_cachedPreviousScreenPosition_36() const { return ___cachedPreviousScreenPosition_36; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_cachedPreviousScreenPosition_36() { return &___cachedPreviousScreenPosition_36; }
	inline void set_cachedPreviousScreenPosition_36(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___cachedPreviousScreenPosition_36 = value;
	}
};


// TouchScript.Layers.StandardLayer
struct StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E  : public TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218
{
public:
	// System.Boolean TouchScript.Layers.StandardLayer::basicEditor
	bool ___basicEditor_20;
	// System.Boolean TouchScript.Layers.StandardLayer::advancedProps
	bool ___advancedProps_21;
	// System.Boolean TouchScript.Layers.StandardLayer::hitProps
	bool ___hitProps_22;
	// System.Boolean TouchScript.Layers.StandardLayer::hit3DObjects
	bool ___hit3DObjects_23;
	// System.Boolean TouchScript.Layers.StandardLayer::hit2DObjects
	bool ___hit2DObjects_24;
	// System.Boolean TouchScript.Layers.StandardLayer::hitWorldSpaceUI
	bool ___hitWorldSpaceUI_25;
	// System.Boolean TouchScript.Layers.StandardLayer::hitScreenSpaceUI
	bool ___hitScreenSpaceUI_26;
	// UnityEngine.LayerMask TouchScript.Layers.StandardLayer::layerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask_27;
	// System.Boolean TouchScript.Layers.StandardLayer::useHitFilters
	bool ___useHitFilters_28;
	// System.Boolean TouchScript.Layers.StandardLayer::lookForCameraObjects
	bool ___lookForCameraObjects_29;
	// TouchScript.Layers.UI.TouchScriptInputModule TouchScript.Layers.StandardLayer::inputModule
	TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * ___inputModule_30;
	// UnityEngine.Camera TouchScript.Layers.StandardLayer::_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____camera_31;

public:
	inline static int32_t get_offset_of_basicEditor_20() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___basicEditor_20)); }
	inline bool get_basicEditor_20() const { return ___basicEditor_20; }
	inline bool* get_address_of_basicEditor_20() { return &___basicEditor_20; }
	inline void set_basicEditor_20(bool value)
	{
		___basicEditor_20 = value;
	}

	inline static int32_t get_offset_of_advancedProps_21() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___advancedProps_21)); }
	inline bool get_advancedProps_21() const { return ___advancedProps_21; }
	inline bool* get_address_of_advancedProps_21() { return &___advancedProps_21; }
	inline void set_advancedProps_21(bool value)
	{
		___advancedProps_21 = value;
	}

	inline static int32_t get_offset_of_hitProps_22() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___hitProps_22)); }
	inline bool get_hitProps_22() const { return ___hitProps_22; }
	inline bool* get_address_of_hitProps_22() { return &___hitProps_22; }
	inline void set_hitProps_22(bool value)
	{
		___hitProps_22 = value;
	}

	inline static int32_t get_offset_of_hit3DObjects_23() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___hit3DObjects_23)); }
	inline bool get_hit3DObjects_23() const { return ___hit3DObjects_23; }
	inline bool* get_address_of_hit3DObjects_23() { return &___hit3DObjects_23; }
	inline void set_hit3DObjects_23(bool value)
	{
		___hit3DObjects_23 = value;
	}

	inline static int32_t get_offset_of_hit2DObjects_24() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___hit2DObjects_24)); }
	inline bool get_hit2DObjects_24() const { return ___hit2DObjects_24; }
	inline bool* get_address_of_hit2DObjects_24() { return &___hit2DObjects_24; }
	inline void set_hit2DObjects_24(bool value)
	{
		___hit2DObjects_24 = value;
	}

	inline static int32_t get_offset_of_hitWorldSpaceUI_25() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___hitWorldSpaceUI_25)); }
	inline bool get_hitWorldSpaceUI_25() const { return ___hitWorldSpaceUI_25; }
	inline bool* get_address_of_hitWorldSpaceUI_25() { return &___hitWorldSpaceUI_25; }
	inline void set_hitWorldSpaceUI_25(bool value)
	{
		___hitWorldSpaceUI_25 = value;
	}

	inline static int32_t get_offset_of_hitScreenSpaceUI_26() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___hitScreenSpaceUI_26)); }
	inline bool get_hitScreenSpaceUI_26() const { return ___hitScreenSpaceUI_26; }
	inline bool* get_address_of_hitScreenSpaceUI_26() { return &___hitScreenSpaceUI_26; }
	inline void set_hitScreenSpaceUI_26(bool value)
	{
		___hitScreenSpaceUI_26 = value;
	}

	inline static int32_t get_offset_of_layerMask_27() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___layerMask_27)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_layerMask_27() const { return ___layerMask_27; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_layerMask_27() { return &___layerMask_27; }
	inline void set_layerMask_27(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___layerMask_27 = value;
	}

	inline static int32_t get_offset_of_useHitFilters_28() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___useHitFilters_28)); }
	inline bool get_useHitFilters_28() const { return ___useHitFilters_28; }
	inline bool* get_address_of_useHitFilters_28() { return &___useHitFilters_28; }
	inline void set_useHitFilters_28(bool value)
	{
		___useHitFilters_28 = value;
	}

	inline static int32_t get_offset_of_lookForCameraObjects_29() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___lookForCameraObjects_29)); }
	inline bool get_lookForCameraObjects_29() const { return ___lookForCameraObjects_29; }
	inline bool* get_address_of_lookForCameraObjects_29() { return &___lookForCameraObjects_29; }
	inline void set_lookForCameraObjects_29(bool value)
	{
		___lookForCameraObjects_29 = value;
	}

	inline static int32_t get_offset_of_inputModule_30() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ___inputModule_30)); }
	inline TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * get_inputModule_30() const { return ___inputModule_30; }
	inline TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 ** get_address_of_inputModule_30() { return &___inputModule_30; }
	inline void set_inputModule_30(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * value)
	{
		___inputModule_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputModule_30), (void*)value);
	}

	inline static int32_t get_offset_of__camera_31() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E, ____camera_31)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__camera_31() const { return ____camera_31; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__camera_31() { return &____camera_31; }
	inline void set__camera_31(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____camera_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_31), (void*)value);
	}
};

struct StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields
{
public:
	// System.Comparison`1<TouchScript.Hit.RaycastHitUI> TouchScript.Layers.StandardLayer::_raycastHitUIComparerFunc
	Comparison_1_t179960122638E98D42AAC569F3F9DB0F9E8875E7 * ____raycastHitUIComparerFunc_10;
	// System.Comparison`1<UnityEngine.RaycastHit> TouchScript.Layers.StandardLayer::_raycastHitComparerFunc
	Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0 * ____raycastHitComparerFunc_11;
	// System.Comparison`1<TouchScript.Hit.HitData> TouchScript.Layers.StandardLayer::_hitDataComparerFunc
	Comparison_1_tDAA7AC4763D996C84004288387226A5CF08B89E3 * ____hitDataComparerFunc_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Layers.ProjectionParams> TouchScript.Layers.StandardLayer::projectionParamsCache
	Dictionary_2_tC38DF89CF01647D5D1B88F5448E467C3A753D4AC * ___projectionParamsCache_13;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> TouchScript.Layers.StandardLayer::raycasters
	List_1_tBC81A7DE12BDADB43C5817DF67BD79E70CFFFC54 * ___raycasters_14;
	// System.Collections.Generic.List`1<TouchScript.Hit.RaycastHitUI> TouchScript.Layers.StandardLayer::raycastHitUIList
	List_1_t5BE66AD783939C74D9631BE264D292FAEF76288A * ___raycastHitUIList_15;
	// System.Collections.Generic.List`1<UnityEngine.RaycastHit> TouchScript.Layers.StandardLayer::raycastHitList
	List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * ___raycastHitList_16;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitData> TouchScript.Layers.StandardLayer::hitList
	List_1_tBDE67F26B44653001EC551805FA2746879F76B55 * ___hitList_17;
	// UnityEngine.RaycastHit[] TouchScript.Layers.StandardLayer::raycastHits
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___raycastHits_18;
	// UnityEngine.RaycastHit2D[] TouchScript.Layers.StandardLayer::raycastHits2D
	RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* ___raycastHits2D_19;

public:
	inline static int32_t get_offset_of__raycastHitUIComparerFunc_10() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ____raycastHitUIComparerFunc_10)); }
	inline Comparison_1_t179960122638E98D42AAC569F3F9DB0F9E8875E7 * get__raycastHitUIComparerFunc_10() const { return ____raycastHitUIComparerFunc_10; }
	inline Comparison_1_t179960122638E98D42AAC569F3F9DB0F9E8875E7 ** get_address_of__raycastHitUIComparerFunc_10() { return &____raycastHitUIComparerFunc_10; }
	inline void set__raycastHitUIComparerFunc_10(Comparison_1_t179960122638E98D42AAC569F3F9DB0F9E8875E7 * value)
	{
		____raycastHitUIComparerFunc_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raycastHitUIComparerFunc_10), (void*)value);
	}

	inline static int32_t get_offset_of__raycastHitComparerFunc_11() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ____raycastHitComparerFunc_11)); }
	inline Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0 * get__raycastHitComparerFunc_11() const { return ____raycastHitComparerFunc_11; }
	inline Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0 ** get_address_of__raycastHitComparerFunc_11() { return &____raycastHitComparerFunc_11; }
	inline void set__raycastHitComparerFunc_11(Comparison_1_t8B53B4CEDFCAA2901ADED4D0797304CC695D21E0 * value)
	{
		____raycastHitComparerFunc_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raycastHitComparerFunc_11), (void*)value);
	}

	inline static int32_t get_offset_of__hitDataComparerFunc_12() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ____hitDataComparerFunc_12)); }
	inline Comparison_1_tDAA7AC4763D996C84004288387226A5CF08B89E3 * get__hitDataComparerFunc_12() const { return ____hitDataComparerFunc_12; }
	inline Comparison_1_tDAA7AC4763D996C84004288387226A5CF08B89E3 ** get_address_of__hitDataComparerFunc_12() { return &____hitDataComparerFunc_12; }
	inline void set__hitDataComparerFunc_12(Comparison_1_tDAA7AC4763D996C84004288387226A5CF08B89E3 * value)
	{
		____hitDataComparerFunc_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hitDataComparerFunc_12), (void*)value);
	}

	inline static int32_t get_offset_of_projectionParamsCache_13() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ___projectionParamsCache_13)); }
	inline Dictionary_2_tC38DF89CF01647D5D1B88F5448E467C3A753D4AC * get_projectionParamsCache_13() const { return ___projectionParamsCache_13; }
	inline Dictionary_2_tC38DF89CF01647D5D1B88F5448E467C3A753D4AC ** get_address_of_projectionParamsCache_13() { return &___projectionParamsCache_13; }
	inline void set_projectionParamsCache_13(Dictionary_2_tC38DF89CF01647D5D1B88F5448E467C3A753D4AC * value)
	{
		___projectionParamsCache_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionParamsCache_13), (void*)value);
	}

	inline static int32_t get_offset_of_raycasters_14() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ___raycasters_14)); }
	inline List_1_tBC81A7DE12BDADB43C5817DF67BD79E70CFFFC54 * get_raycasters_14() const { return ___raycasters_14; }
	inline List_1_tBC81A7DE12BDADB43C5817DF67BD79E70CFFFC54 ** get_address_of_raycasters_14() { return &___raycasters_14; }
	inline void set_raycasters_14(List_1_tBC81A7DE12BDADB43C5817DF67BD79E70CFFFC54 * value)
	{
		___raycasters_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycasters_14), (void*)value);
	}

	inline static int32_t get_offset_of_raycastHitUIList_15() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ___raycastHitUIList_15)); }
	inline List_1_t5BE66AD783939C74D9631BE264D292FAEF76288A * get_raycastHitUIList_15() const { return ___raycastHitUIList_15; }
	inline List_1_t5BE66AD783939C74D9631BE264D292FAEF76288A ** get_address_of_raycastHitUIList_15() { return &___raycastHitUIList_15; }
	inline void set_raycastHitUIList_15(List_1_t5BE66AD783939C74D9631BE264D292FAEF76288A * value)
	{
		___raycastHitUIList_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastHitUIList_15), (void*)value);
	}

	inline static int32_t get_offset_of_raycastHitList_16() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ___raycastHitList_16)); }
	inline List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * get_raycastHitList_16() const { return ___raycastHitList_16; }
	inline List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D ** get_address_of_raycastHitList_16() { return &___raycastHitList_16; }
	inline void set_raycastHitList_16(List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * value)
	{
		___raycastHitList_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastHitList_16), (void*)value);
	}

	inline static int32_t get_offset_of_hitList_17() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ___hitList_17)); }
	inline List_1_tBDE67F26B44653001EC551805FA2746879F76B55 * get_hitList_17() const { return ___hitList_17; }
	inline List_1_tBDE67F26B44653001EC551805FA2746879F76B55 ** get_address_of_hitList_17() { return &___hitList_17; }
	inline void set_hitList_17(List_1_tBDE67F26B44653001EC551805FA2746879F76B55 * value)
	{
		___hitList_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitList_17), (void*)value);
	}

	inline static int32_t get_offset_of_raycastHits_18() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ___raycastHits_18)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get_raycastHits_18() const { return ___raycastHits_18; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of_raycastHits_18() { return &___raycastHits_18; }
	inline void set_raycastHits_18(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		___raycastHits_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastHits_18), (void*)value);
	}

	inline static int32_t get_offset_of_raycastHits2D_19() { return static_cast<int32_t>(offsetof(StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E_StaticFields, ___raycastHits2D_19)); }
	inline RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* get_raycastHits2D_19() const { return ___raycastHits2D_19; }
	inline RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09** get_address_of_raycastHits2D_19() { return &___raycastHits2D_19; }
	inline void set_raycastHits2D_19(RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* value)
	{
		___raycastHits2D_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastHits2D_19), (void*)value);
	}
};


// TouchScript.Core.TouchManagerInstance
struct TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98  : public DebuggableMonoBehaviour_tFE11E4537DDA6B44E9D8FA5900FF454360108109
{
public:
	// System.EventHandler`1<TouchScript.PointerEventArgs> TouchScript.Core.TouchManagerInstance::pointersAddedInvoker
	EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * ___pointersAddedInvoker_4;
	// System.EventHandler`1<TouchScript.PointerEventArgs> TouchScript.Core.TouchManagerInstance::pointersUpdatedInvoker
	EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * ___pointersUpdatedInvoker_5;
	// System.EventHandler`1<TouchScript.PointerEventArgs> TouchScript.Core.TouchManagerInstance::pointersPressedInvoker
	EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * ___pointersPressedInvoker_6;
	// System.EventHandler`1<TouchScript.PointerEventArgs> TouchScript.Core.TouchManagerInstance::pointersReleasedInvoker
	EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * ___pointersReleasedInvoker_7;
	// System.EventHandler`1<TouchScript.PointerEventArgs> TouchScript.Core.TouchManagerInstance::pointersRemovedInvoker
	EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * ___pointersRemovedInvoker_8;
	// System.EventHandler`1<TouchScript.PointerEventArgs> TouchScript.Core.TouchManagerInstance::pointersCancelledInvoker
	EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * ___pointersCancelledInvoker_9;
	// System.EventHandler TouchScript.Core.TouchManagerInstance::frameStartedInvoker
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___frameStartedInvoker_10;
	// System.EventHandler TouchScript.Core.TouchManagerInstance::frameFinishedInvoker
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___frameFinishedInvoker_11;
	// System.Boolean TouchScript.Core.TouchManagerInstance::<IsInsidePointerFrame>k__BackingField
	bool ___U3CIsInsidePointerFrameU3Ek__BackingField_12;
	// System.Boolean TouchScript.Core.TouchManagerInstance::shouldCreateCameraLayer
	bool ___shouldCreateCameraLayer_15;
	// System.Boolean TouchScript.Core.TouchManagerInstance::shouldCreateStandardInput
	bool ___shouldCreateStandardInput_16;
	// TouchScript.Devices.Display.IDisplayDevice TouchScript.Core.TouchManagerInstance::displayDevice
	RuntimeObject* ___displayDevice_17;
	// System.Single TouchScript.Core.TouchManagerInstance::dpi
	float ___dpi_18;
	// System.Single TouchScript.Core.TouchManagerInstance::dotsPerCentimeter
	float ___dotsPerCentimeter_19;
	// TouchScript.ILayerManager TouchScript.Core.TouchManagerInstance::layerManager
	RuntimeObject* ___layerManager_20;
	// System.Collections.Generic.List`1<TouchScript.InputSources.IInputSource> TouchScript.Core.TouchManagerInstance::inputs
	List_1_tC2B7D5677160D687BC7BFD96F466161A531A95DB * ___inputs_21;
	// System.Int32 TouchScript.Core.TouchManagerInstance::inputCount
	int32_t ___inputCount_22;
	// System.Collections.Generic.List`1<TouchScript.Pointers.Pointer> TouchScript.Core.TouchManagerInstance::pointers
	List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * ___pointers_23;
	// System.Collections.Generic.HashSet`1<TouchScript.Pointers.Pointer> TouchScript.Core.TouchManagerInstance::pressedPointers
	HashSet_1_t9D765003069DFF4AACE9F388D2DFB7CF38826180 * ___pressedPointers_24;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Pointers.Pointer> TouchScript.Core.TouchManagerInstance::idToPointer
	Dictionary_2_t28436064F1BE05B849CFCDE018CDE6CDE7836E51 * ___idToPointer_25;
	// System.Collections.Generic.List`1<TouchScript.Pointers.Pointer> TouchScript.Core.TouchManagerInstance::pointersAdded
	List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * ___pointersAdded_26;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.Core.TouchManagerInstance::pointersUpdated
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___pointersUpdated_27;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.Core.TouchManagerInstance::pointersPressed
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___pointersPressed_28;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.Core.TouchManagerInstance::pointersReleased
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___pointersReleased_29;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.Core.TouchManagerInstance::pointersRemoved
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___pointersRemoved_30;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.Core.TouchManagerInstance::pointersCancelled
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___pointersCancelled_31;
	// System.Int32 TouchScript.Core.TouchManagerInstance::nextPointerId
	int32_t ___nextPointerId_34;
	// System.Object TouchScript.Core.TouchManagerInstance::pointerLock
	RuntimeObject * ___pointerLock_35;
	// System.Func`2<TouchScript.Layers.TouchLayer,System.Boolean> TouchScript.Core.TouchManagerInstance::_layerAddPointer
	Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * ____layerAddPointer_36;
	// System.Func`2<TouchScript.Layers.TouchLayer,System.Boolean> TouchScript.Core.TouchManagerInstance::_layerUpdatePointer
	Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * ____layerUpdatePointer_37;
	// System.Func`2<TouchScript.Layers.TouchLayer,System.Boolean> TouchScript.Core.TouchManagerInstance::_layerRemovePointer
	Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * ____layerRemovePointer_38;
	// System.Func`2<TouchScript.Layers.TouchLayer,System.Boolean> TouchScript.Core.TouchManagerInstance::_layerCancelPointer
	Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * ____layerCancelPointer_39;
	// TouchScript.Pointers.Pointer TouchScript.Core.TouchManagerInstance::tmpPointer
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * ___tmpPointer_40;
	// UnityEngine.Profiling.CustomSampler TouchScript.Core.TouchManagerInstance::samplerUpdateInputs
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___samplerUpdateInputs_41;
	// UnityEngine.Profiling.CustomSampler TouchScript.Core.TouchManagerInstance::samplerUpdateAdded
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___samplerUpdateAdded_42;
	// UnityEngine.Profiling.CustomSampler TouchScript.Core.TouchManagerInstance::samplerUpdatePressed
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___samplerUpdatePressed_43;
	// UnityEngine.Profiling.CustomSampler TouchScript.Core.TouchManagerInstance::samplerUpdateUpdated
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___samplerUpdateUpdated_44;
	// UnityEngine.Profiling.CustomSampler TouchScript.Core.TouchManagerInstance::samplerUpdateReleased
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___samplerUpdateReleased_45;
	// UnityEngine.Profiling.CustomSampler TouchScript.Core.TouchManagerInstance::samplerUpdateRemoved
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___samplerUpdateRemoved_46;
	// UnityEngine.Profiling.CustomSampler TouchScript.Core.TouchManagerInstance::samplerUpdateCancelled
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___samplerUpdateCancelled_47;

public:
	inline static int32_t get_offset_of_pointersAddedInvoker_4() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersAddedInvoker_4)); }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * get_pointersAddedInvoker_4() const { return ___pointersAddedInvoker_4; }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB ** get_address_of_pointersAddedInvoker_4() { return &___pointersAddedInvoker_4; }
	inline void set_pointersAddedInvoker_4(EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * value)
	{
		___pointersAddedInvoker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersAddedInvoker_4), (void*)value);
	}

	inline static int32_t get_offset_of_pointersUpdatedInvoker_5() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersUpdatedInvoker_5)); }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * get_pointersUpdatedInvoker_5() const { return ___pointersUpdatedInvoker_5; }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB ** get_address_of_pointersUpdatedInvoker_5() { return &___pointersUpdatedInvoker_5; }
	inline void set_pointersUpdatedInvoker_5(EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * value)
	{
		___pointersUpdatedInvoker_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersUpdatedInvoker_5), (void*)value);
	}

	inline static int32_t get_offset_of_pointersPressedInvoker_6() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersPressedInvoker_6)); }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * get_pointersPressedInvoker_6() const { return ___pointersPressedInvoker_6; }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB ** get_address_of_pointersPressedInvoker_6() { return &___pointersPressedInvoker_6; }
	inline void set_pointersPressedInvoker_6(EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * value)
	{
		___pointersPressedInvoker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersPressedInvoker_6), (void*)value);
	}

	inline static int32_t get_offset_of_pointersReleasedInvoker_7() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersReleasedInvoker_7)); }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * get_pointersReleasedInvoker_7() const { return ___pointersReleasedInvoker_7; }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB ** get_address_of_pointersReleasedInvoker_7() { return &___pointersReleasedInvoker_7; }
	inline void set_pointersReleasedInvoker_7(EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * value)
	{
		___pointersReleasedInvoker_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersReleasedInvoker_7), (void*)value);
	}

	inline static int32_t get_offset_of_pointersRemovedInvoker_8() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersRemovedInvoker_8)); }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * get_pointersRemovedInvoker_8() const { return ___pointersRemovedInvoker_8; }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB ** get_address_of_pointersRemovedInvoker_8() { return &___pointersRemovedInvoker_8; }
	inline void set_pointersRemovedInvoker_8(EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * value)
	{
		___pointersRemovedInvoker_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersRemovedInvoker_8), (void*)value);
	}

	inline static int32_t get_offset_of_pointersCancelledInvoker_9() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersCancelledInvoker_9)); }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * get_pointersCancelledInvoker_9() const { return ___pointersCancelledInvoker_9; }
	inline EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB ** get_address_of_pointersCancelledInvoker_9() { return &___pointersCancelledInvoker_9; }
	inline void set_pointersCancelledInvoker_9(EventHandler_1_tA1858089806AF33A7E0521665210EA0D35E6C8AB * value)
	{
		___pointersCancelledInvoker_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersCancelledInvoker_9), (void*)value);
	}

	inline static int32_t get_offset_of_frameStartedInvoker_10() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___frameStartedInvoker_10)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_frameStartedInvoker_10() const { return ___frameStartedInvoker_10; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_frameStartedInvoker_10() { return &___frameStartedInvoker_10; }
	inline void set_frameStartedInvoker_10(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___frameStartedInvoker_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameStartedInvoker_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameFinishedInvoker_11() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___frameFinishedInvoker_11)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_frameFinishedInvoker_11() const { return ___frameFinishedInvoker_11; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_frameFinishedInvoker_11() { return &___frameFinishedInvoker_11; }
	inline void set_frameFinishedInvoker_11(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___frameFinishedInvoker_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameFinishedInvoker_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInsidePointerFrameU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___U3CIsInsidePointerFrameU3Ek__BackingField_12)); }
	inline bool get_U3CIsInsidePointerFrameU3Ek__BackingField_12() const { return ___U3CIsInsidePointerFrameU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsInsidePointerFrameU3Ek__BackingField_12() { return &___U3CIsInsidePointerFrameU3Ek__BackingField_12; }
	inline void set_U3CIsInsidePointerFrameU3Ek__BackingField_12(bool value)
	{
		___U3CIsInsidePointerFrameU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_shouldCreateCameraLayer_15() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___shouldCreateCameraLayer_15)); }
	inline bool get_shouldCreateCameraLayer_15() const { return ___shouldCreateCameraLayer_15; }
	inline bool* get_address_of_shouldCreateCameraLayer_15() { return &___shouldCreateCameraLayer_15; }
	inline void set_shouldCreateCameraLayer_15(bool value)
	{
		___shouldCreateCameraLayer_15 = value;
	}

	inline static int32_t get_offset_of_shouldCreateStandardInput_16() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___shouldCreateStandardInput_16)); }
	inline bool get_shouldCreateStandardInput_16() const { return ___shouldCreateStandardInput_16; }
	inline bool* get_address_of_shouldCreateStandardInput_16() { return &___shouldCreateStandardInput_16; }
	inline void set_shouldCreateStandardInput_16(bool value)
	{
		___shouldCreateStandardInput_16 = value;
	}

	inline static int32_t get_offset_of_displayDevice_17() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___displayDevice_17)); }
	inline RuntimeObject* get_displayDevice_17() const { return ___displayDevice_17; }
	inline RuntimeObject** get_address_of_displayDevice_17() { return &___displayDevice_17; }
	inline void set_displayDevice_17(RuntimeObject* value)
	{
		___displayDevice_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayDevice_17), (void*)value);
	}

	inline static int32_t get_offset_of_dpi_18() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___dpi_18)); }
	inline float get_dpi_18() const { return ___dpi_18; }
	inline float* get_address_of_dpi_18() { return &___dpi_18; }
	inline void set_dpi_18(float value)
	{
		___dpi_18 = value;
	}

	inline static int32_t get_offset_of_dotsPerCentimeter_19() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___dotsPerCentimeter_19)); }
	inline float get_dotsPerCentimeter_19() const { return ___dotsPerCentimeter_19; }
	inline float* get_address_of_dotsPerCentimeter_19() { return &___dotsPerCentimeter_19; }
	inline void set_dotsPerCentimeter_19(float value)
	{
		___dotsPerCentimeter_19 = value;
	}

	inline static int32_t get_offset_of_layerManager_20() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___layerManager_20)); }
	inline RuntimeObject* get_layerManager_20() const { return ___layerManager_20; }
	inline RuntimeObject** get_address_of_layerManager_20() { return &___layerManager_20; }
	inline void set_layerManager_20(RuntimeObject* value)
	{
		___layerManager_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerManager_20), (void*)value);
	}

	inline static int32_t get_offset_of_inputs_21() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___inputs_21)); }
	inline List_1_tC2B7D5677160D687BC7BFD96F466161A531A95DB * get_inputs_21() const { return ___inputs_21; }
	inline List_1_tC2B7D5677160D687BC7BFD96F466161A531A95DB ** get_address_of_inputs_21() { return &___inputs_21; }
	inline void set_inputs_21(List_1_tC2B7D5677160D687BC7BFD96F466161A531A95DB * value)
	{
		___inputs_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputs_21), (void*)value);
	}

	inline static int32_t get_offset_of_inputCount_22() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___inputCount_22)); }
	inline int32_t get_inputCount_22() const { return ___inputCount_22; }
	inline int32_t* get_address_of_inputCount_22() { return &___inputCount_22; }
	inline void set_inputCount_22(int32_t value)
	{
		___inputCount_22 = value;
	}

	inline static int32_t get_offset_of_pointers_23() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointers_23)); }
	inline List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * get_pointers_23() const { return ___pointers_23; }
	inline List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 ** get_address_of_pointers_23() { return &___pointers_23; }
	inline void set_pointers_23(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * value)
	{
		___pointers_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointers_23), (void*)value);
	}

	inline static int32_t get_offset_of_pressedPointers_24() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pressedPointers_24)); }
	inline HashSet_1_t9D765003069DFF4AACE9F388D2DFB7CF38826180 * get_pressedPointers_24() const { return ___pressedPointers_24; }
	inline HashSet_1_t9D765003069DFF4AACE9F388D2DFB7CF38826180 ** get_address_of_pressedPointers_24() { return &___pressedPointers_24; }
	inline void set_pressedPointers_24(HashSet_1_t9D765003069DFF4AACE9F388D2DFB7CF38826180 * value)
	{
		___pressedPointers_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pressedPointers_24), (void*)value);
	}

	inline static int32_t get_offset_of_idToPointer_25() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___idToPointer_25)); }
	inline Dictionary_2_t28436064F1BE05B849CFCDE018CDE6CDE7836E51 * get_idToPointer_25() const { return ___idToPointer_25; }
	inline Dictionary_2_t28436064F1BE05B849CFCDE018CDE6CDE7836E51 ** get_address_of_idToPointer_25() { return &___idToPointer_25; }
	inline void set_idToPointer_25(Dictionary_2_t28436064F1BE05B849CFCDE018CDE6CDE7836E51 * value)
	{
		___idToPointer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idToPointer_25), (void*)value);
	}

	inline static int32_t get_offset_of_pointersAdded_26() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersAdded_26)); }
	inline List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * get_pointersAdded_26() const { return ___pointersAdded_26; }
	inline List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 ** get_address_of_pointersAdded_26() { return &___pointersAdded_26; }
	inline void set_pointersAdded_26(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * value)
	{
		___pointersAdded_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersAdded_26), (void*)value);
	}

	inline static int32_t get_offset_of_pointersUpdated_27() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersUpdated_27)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_pointersUpdated_27() const { return ___pointersUpdated_27; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_pointersUpdated_27() { return &___pointersUpdated_27; }
	inline void set_pointersUpdated_27(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___pointersUpdated_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersUpdated_27), (void*)value);
	}

	inline static int32_t get_offset_of_pointersPressed_28() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersPressed_28)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_pointersPressed_28() const { return ___pointersPressed_28; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_pointersPressed_28() { return &___pointersPressed_28; }
	inline void set_pointersPressed_28(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___pointersPressed_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersPressed_28), (void*)value);
	}

	inline static int32_t get_offset_of_pointersReleased_29() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersReleased_29)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_pointersReleased_29() const { return ___pointersReleased_29; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_pointersReleased_29() { return &___pointersReleased_29; }
	inline void set_pointersReleased_29(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___pointersReleased_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersReleased_29), (void*)value);
	}

	inline static int32_t get_offset_of_pointersRemoved_30() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersRemoved_30)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_pointersRemoved_30() const { return ___pointersRemoved_30; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_pointersRemoved_30() { return &___pointersRemoved_30; }
	inline void set_pointersRemoved_30(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___pointersRemoved_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersRemoved_30), (void*)value);
	}

	inline static int32_t get_offset_of_pointersCancelled_31() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointersCancelled_31)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_pointersCancelled_31() const { return ___pointersCancelled_31; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_pointersCancelled_31() { return &___pointersCancelled_31; }
	inline void set_pointersCancelled_31(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___pointersCancelled_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointersCancelled_31), (void*)value);
	}

	inline static int32_t get_offset_of_nextPointerId_34() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___nextPointerId_34)); }
	inline int32_t get_nextPointerId_34() const { return ___nextPointerId_34; }
	inline int32_t* get_address_of_nextPointerId_34() { return &___nextPointerId_34; }
	inline void set_nextPointerId_34(int32_t value)
	{
		___nextPointerId_34 = value;
	}

	inline static int32_t get_offset_of_pointerLock_35() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___pointerLock_35)); }
	inline RuntimeObject * get_pointerLock_35() const { return ___pointerLock_35; }
	inline RuntimeObject ** get_address_of_pointerLock_35() { return &___pointerLock_35; }
	inline void set_pointerLock_35(RuntimeObject * value)
	{
		___pointerLock_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerLock_35), (void*)value);
	}

	inline static int32_t get_offset_of__layerAddPointer_36() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ____layerAddPointer_36)); }
	inline Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * get__layerAddPointer_36() const { return ____layerAddPointer_36; }
	inline Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 ** get_address_of__layerAddPointer_36() { return &____layerAddPointer_36; }
	inline void set__layerAddPointer_36(Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * value)
	{
		____layerAddPointer_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____layerAddPointer_36), (void*)value);
	}

	inline static int32_t get_offset_of__layerUpdatePointer_37() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ____layerUpdatePointer_37)); }
	inline Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * get__layerUpdatePointer_37() const { return ____layerUpdatePointer_37; }
	inline Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 ** get_address_of__layerUpdatePointer_37() { return &____layerUpdatePointer_37; }
	inline void set__layerUpdatePointer_37(Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * value)
	{
		____layerUpdatePointer_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____layerUpdatePointer_37), (void*)value);
	}

	inline static int32_t get_offset_of__layerRemovePointer_38() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ____layerRemovePointer_38)); }
	inline Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * get__layerRemovePointer_38() const { return ____layerRemovePointer_38; }
	inline Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 ** get_address_of__layerRemovePointer_38() { return &____layerRemovePointer_38; }
	inline void set__layerRemovePointer_38(Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * value)
	{
		____layerRemovePointer_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____layerRemovePointer_38), (void*)value);
	}

	inline static int32_t get_offset_of__layerCancelPointer_39() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ____layerCancelPointer_39)); }
	inline Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * get__layerCancelPointer_39() const { return ____layerCancelPointer_39; }
	inline Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 ** get_address_of__layerCancelPointer_39() { return &____layerCancelPointer_39; }
	inline void set__layerCancelPointer_39(Func_2_t52CB105F7AE5072EBB09DC92D8D12CF977370074 * value)
	{
		____layerCancelPointer_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____layerCancelPointer_39), (void*)value);
	}

	inline static int32_t get_offset_of_tmpPointer_40() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___tmpPointer_40)); }
	inline Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * get_tmpPointer_40() const { return ___tmpPointer_40; }
	inline Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B ** get_address_of_tmpPointer_40() { return &___tmpPointer_40; }
	inline void set_tmpPointer_40(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * value)
	{
		___tmpPointer_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tmpPointer_40), (void*)value);
	}

	inline static int32_t get_offset_of_samplerUpdateInputs_41() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___samplerUpdateInputs_41)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_samplerUpdateInputs_41() const { return ___samplerUpdateInputs_41; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_samplerUpdateInputs_41() { return &___samplerUpdateInputs_41; }
	inline void set_samplerUpdateInputs_41(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___samplerUpdateInputs_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplerUpdateInputs_41), (void*)value);
	}

	inline static int32_t get_offset_of_samplerUpdateAdded_42() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___samplerUpdateAdded_42)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_samplerUpdateAdded_42() const { return ___samplerUpdateAdded_42; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_samplerUpdateAdded_42() { return &___samplerUpdateAdded_42; }
	inline void set_samplerUpdateAdded_42(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___samplerUpdateAdded_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplerUpdateAdded_42), (void*)value);
	}

	inline static int32_t get_offset_of_samplerUpdatePressed_43() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___samplerUpdatePressed_43)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_samplerUpdatePressed_43() const { return ___samplerUpdatePressed_43; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_samplerUpdatePressed_43() { return &___samplerUpdatePressed_43; }
	inline void set_samplerUpdatePressed_43(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___samplerUpdatePressed_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplerUpdatePressed_43), (void*)value);
	}

	inline static int32_t get_offset_of_samplerUpdateUpdated_44() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___samplerUpdateUpdated_44)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_samplerUpdateUpdated_44() const { return ___samplerUpdateUpdated_44; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_samplerUpdateUpdated_44() { return &___samplerUpdateUpdated_44; }
	inline void set_samplerUpdateUpdated_44(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___samplerUpdateUpdated_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplerUpdateUpdated_44), (void*)value);
	}

	inline static int32_t get_offset_of_samplerUpdateReleased_45() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___samplerUpdateReleased_45)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_samplerUpdateReleased_45() const { return ___samplerUpdateReleased_45; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_samplerUpdateReleased_45() { return &___samplerUpdateReleased_45; }
	inline void set_samplerUpdateReleased_45(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___samplerUpdateReleased_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplerUpdateReleased_45), (void*)value);
	}

	inline static int32_t get_offset_of_samplerUpdateRemoved_46() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___samplerUpdateRemoved_46)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_samplerUpdateRemoved_46() const { return ___samplerUpdateRemoved_46; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_samplerUpdateRemoved_46() { return &___samplerUpdateRemoved_46; }
	inline void set_samplerUpdateRemoved_46(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___samplerUpdateRemoved_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplerUpdateRemoved_46), (void*)value);
	}

	inline static int32_t get_offset_of_samplerUpdateCancelled_47() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98, ___samplerUpdateCancelled_47)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_samplerUpdateCancelled_47() const { return ___samplerUpdateCancelled_47; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_samplerUpdateCancelled_47() { return &___samplerUpdateCancelled_47; }
	inline void set_samplerUpdateCancelled_47(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___samplerUpdateCancelled_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplerUpdateCancelled_47), (void*)value);
	}
};

struct TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98_StaticFields
{
public:
	// System.Boolean TouchScript.Core.TouchManagerInstance::shuttingDown
	bool ___shuttingDown_13;
	// TouchScript.Core.TouchManagerInstance TouchScript.Core.TouchManagerInstance::instance
	TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * ___instance_14;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>> TouchScript.Core.TouchManagerInstance::pointerListPool
	ObjectPool_1_tB6C670E254C5F1207034237EC832F816A97151AE * ___pointerListPool_32;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>> TouchScript.Core.TouchManagerInstance::intListPool
	ObjectPool_1_t532A94013AD8D6EE8F519265AA43B31BF5EB0B87 * ___intListPool_33;

public:
	inline static int32_t get_offset_of_shuttingDown_13() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98_StaticFields, ___shuttingDown_13)); }
	inline bool get_shuttingDown_13() const { return ___shuttingDown_13; }
	inline bool* get_address_of_shuttingDown_13() { return &___shuttingDown_13; }
	inline void set_shuttingDown_13(bool value)
	{
		___shuttingDown_13 = value;
	}

	inline static int32_t get_offset_of_instance_14() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98_StaticFields, ___instance_14)); }
	inline TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * get_instance_14() const { return ___instance_14; }
	inline TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 ** get_address_of_instance_14() { return &___instance_14; }
	inline void set_instance_14(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * value)
	{
		___instance_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_14), (void*)value);
	}

	inline static int32_t get_offset_of_pointerListPool_32() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98_StaticFields, ___pointerListPool_32)); }
	inline ObjectPool_1_tB6C670E254C5F1207034237EC832F816A97151AE * get_pointerListPool_32() const { return ___pointerListPool_32; }
	inline ObjectPool_1_tB6C670E254C5F1207034237EC832F816A97151AE ** get_address_of_pointerListPool_32() { return &___pointerListPool_32; }
	inline void set_pointerListPool_32(ObjectPool_1_tB6C670E254C5F1207034237EC832F816A97151AE * value)
	{
		___pointerListPool_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerListPool_32), (void*)value);
	}

	inline static int32_t get_offset_of_intListPool_33() { return static_cast<int32_t>(offsetof(TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98_StaticFields, ___intListPool_33)); }
	inline ObjectPool_1_t532A94013AD8D6EE8F519265AA43B31BF5EB0B87 * get_intListPool_33() const { return ___intListPool_33; }
	inline ObjectPool_1_t532A94013AD8D6EE8F519265AA43B31BF5EB0B87 ** get_address_of_intListPool_33() { return &___intListPool_33; }
	inline void set_intListPool_33(ObjectPool_1_t532A94013AD8D6EE8F519265AA43B31BF5EB0B87 * value)
	{
		___intListPool_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intListPool_33), (void*)value);
	}
};


// TouchScript.Hit.Untouchable
struct Untouchable_t4B18828E6570ACE237D613D7FB27CA220E8F7A33  : public HitTest_tE32CEF25F8B0640C77DFDDC28F38100EF0175086
{
public:
	// System.Boolean TouchScript.Hit.Untouchable::DiscardPointer
	bool ___DiscardPointer_4;

public:
	inline static int32_t get_offset_of_DiscardPointer_4() { return static_cast<int32_t>(offsetof(Untouchable_t4B18828E6570ACE237D613D7FB27CA220E8F7A33, ___DiscardPointer_4)); }
	inline bool get_DiscardPointer_4() const { return ___DiscardPointer_4; }
	inline bool* get_address_of_DiscardPointer_4() { return &___DiscardPointer_4; }
	inline void set_DiscardPointer_4(bool value)
	{
		___DiscardPointer_4 = value;
	}
};


// TouchScript.Gestures.LongPressGesture
struct LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB  : public Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.LongPressGesture::longPressedInvoker
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___longPressedInvoker_38;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.LongPressGesture::OnLongPress
	GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * ___OnLongPress_39;
	// System.Single TouchScript.Gestures.LongPressGesture::timeToPress
	float ___timeToPress_40;
	// System.Single TouchScript.Gestures.LongPressGesture::distanceLimit
	float ___distanceLimit_41;
	// System.Single TouchScript.Gestures.LongPressGesture::distanceLimitInPixelsSquared
	float ___distanceLimitInPixelsSquared_42;
	// UnityEngine.Vector2 TouchScript.Gestures.LongPressGesture::totalMovement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___totalMovement_43;
	// UnityEngine.Profiling.CustomSampler TouchScript.Gestures.LongPressGesture::gestureSampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___gestureSampler_44;

public:
	inline static int32_t get_offset_of_longPressedInvoker_38() { return static_cast<int32_t>(offsetof(LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB, ___longPressedInvoker_38)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_longPressedInvoker_38() const { return ___longPressedInvoker_38; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_longPressedInvoker_38() { return &___longPressedInvoker_38; }
	inline void set_longPressedInvoker_38(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___longPressedInvoker_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longPressedInvoker_38), (void*)value);
	}

	inline static int32_t get_offset_of_OnLongPress_39() { return static_cast<int32_t>(offsetof(LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB, ___OnLongPress_39)); }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * get_OnLongPress_39() const { return ___OnLongPress_39; }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF ** get_address_of_OnLongPress_39() { return &___OnLongPress_39; }
	inline void set_OnLongPress_39(GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * value)
	{
		___OnLongPress_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLongPress_39), (void*)value);
	}

	inline static int32_t get_offset_of_timeToPress_40() { return static_cast<int32_t>(offsetof(LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB, ___timeToPress_40)); }
	inline float get_timeToPress_40() const { return ___timeToPress_40; }
	inline float* get_address_of_timeToPress_40() { return &___timeToPress_40; }
	inline void set_timeToPress_40(float value)
	{
		___timeToPress_40 = value;
	}

	inline static int32_t get_offset_of_distanceLimit_41() { return static_cast<int32_t>(offsetof(LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB, ___distanceLimit_41)); }
	inline float get_distanceLimit_41() const { return ___distanceLimit_41; }
	inline float* get_address_of_distanceLimit_41() { return &___distanceLimit_41; }
	inline void set_distanceLimit_41(float value)
	{
		___distanceLimit_41 = value;
	}

	inline static int32_t get_offset_of_distanceLimitInPixelsSquared_42() { return static_cast<int32_t>(offsetof(LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB, ___distanceLimitInPixelsSquared_42)); }
	inline float get_distanceLimitInPixelsSquared_42() const { return ___distanceLimitInPixelsSquared_42; }
	inline float* get_address_of_distanceLimitInPixelsSquared_42() { return &___distanceLimitInPixelsSquared_42; }
	inline void set_distanceLimitInPixelsSquared_42(float value)
	{
		___distanceLimitInPixelsSquared_42 = value;
	}

	inline static int32_t get_offset_of_totalMovement_43() { return static_cast<int32_t>(offsetof(LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB, ___totalMovement_43)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_totalMovement_43() const { return ___totalMovement_43; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_totalMovement_43() { return &___totalMovement_43; }
	inline void set_totalMovement_43(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___totalMovement_43 = value;
	}

	inline static int32_t get_offset_of_gestureSampler_44() { return static_cast<int32_t>(offsetof(LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB, ___gestureSampler_44)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_gestureSampler_44() const { return ___gestureSampler_44; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_gestureSampler_44() { return &___gestureSampler_44; }
	inline void set_gestureSampler_44(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___gestureSampler_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gestureSampler_44), (void*)value);
	}
};


// TouchScript.Gestures.TapGesture
struct TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576  : public Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TapGesture::tappedInvoker
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___tappedInvoker_38;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.TapGesture::OnTap
	GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * ___OnTap_39;
	// System.Int32 TouchScript.Gestures.TapGesture::numberOfTapsRequired
	int32_t ___numberOfTapsRequired_40;
	// System.Single TouchScript.Gestures.TapGesture::timeLimit
	float ___timeLimit_41;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimit
	float ___distanceLimit_42;
	// System.Boolean TouchScript.Gestures.TapGesture::combinePointers
	bool ___combinePointers_43;
	// System.Single TouchScript.Gestures.TapGesture::combinePointersInterval
	float ___combinePointersInterval_44;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimitInPixelsSquared
	float ___distanceLimitInPixelsSquared_45;
	// System.Boolean TouchScript.Gestures.TapGesture::isActive
	bool ___isActive_46;
	// System.Int32 TouchScript.Gestures.TapGesture::tapsDone
	int32_t ___tapsDone_47;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::startPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPosition_48;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::totalMovement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___totalMovement_49;
	// TouchScript.Utils.TimedSequence`1<TouchScript.Pointers.Pointer> TouchScript.Gestures.TapGesture::pointerSequence
	TimedSequence_1_t20720AFDBC6E44963A16C08EE2CE2B976DF49AFC * ___pointerSequence_50;
	// UnityEngine.Profiling.CustomSampler TouchScript.Gestures.TapGesture::gestureSampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___gestureSampler_51;

public:
	inline static int32_t get_offset_of_tappedInvoker_38() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___tappedInvoker_38)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_tappedInvoker_38() const { return ___tappedInvoker_38; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_tappedInvoker_38() { return &___tappedInvoker_38; }
	inline void set_tappedInvoker_38(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___tappedInvoker_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tappedInvoker_38), (void*)value);
	}

	inline static int32_t get_offset_of_OnTap_39() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___OnTap_39)); }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * get_OnTap_39() const { return ___OnTap_39; }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF ** get_address_of_OnTap_39() { return &___OnTap_39; }
	inline void set_OnTap_39(GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * value)
	{
		___OnTap_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTap_39), (void*)value);
	}

	inline static int32_t get_offset_of_numberOfTapsRequired_40() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___numberOfTapsRequired_40)); }
	inline int32_t get_numberOfTapsRequired_40() const { return ___numberOfTapsRequired_40; }
	inline int32_t* get_address_of_numberOfTapsRequired_40() { return &___numberOfTapsRequired_40; }
	inline void set_numberOfTapsRequired_40(int32_t value)
	{
		___numberOfTapsRequired_40 = value;
	}

	inline static int32_t get_offset_of_timeLimit_41() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___timeLimit_41)); }
	inline float get_timeLimit_41() const { return ___timeLimit_41; }
	inline float* get_address_of_timeLimit_41() { return &___timeLimit_41; }
	inline void set_timeLimit_41(float value)
	{
		___timeLimit_41 = value;
	}

	inline static int32_t get_offset_of_distanceLimit_42() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___distanceLimit_42)); }
	inline float get_distanceLimit_42() const { return ___distanceLimit_42; }
	inline float* get_address_of_distanceLimit_42() { return &___distanceLimit_42; }
	inline void set_distanceLimit_42(float value)
	{
		___distanceLimit_42 = value;
	}

	inline static int32_t get_offset_of_combinePointers_43() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___combinePointers_43)); }
	inline bool get_combinePointers_43() const { return ___combinePointers_43; }
	inline bool* get_address_of_combinePointers_43() { return &___combinePointers_43; }
	inline void set_combinePointers_43(bool value)
	{
		___combinePointers_43 = value;
	}

	inline static int32_t get_offset_of_combinePointersInterval_44() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___combinePointersInterval_44)); }
	inline float get_combinePointersInterval_44() const { return ___combinePointersInterval_44; }
	inline float* get_address_of_combinePointersInterval_44() { return &___combinePointersInterval_44; }
	inline void set_combinePointersInterval_44(float value)
	{
		___combinePointersInterval_44 = value;
	}

	inline static int32_t get_offset_of_distanceLimitInPixelsSquared_45() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___distanceLimitInPixelsSquared_45)); }
	inline float get_distanceLimitInPixelsSquared_45() const { return ___distanceLimitInPixelsSquared_45; }
	inline float* get_address_of_distanceLimitInPixelsSquared_45() { return &___distanceLimitInPixelsSquared_45; }
	inline void set_distanceLimitInPixelsSquared_45(float value)
	{
		___distanceLimitInPixelsSquared_45 = value;
	}

	inline static int32_t get_offset_of_isActive_46() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___isActive_46)); }
	inline bool get_isActive_46() const { return ___isActive_46; }
	inline bool* get_address_of_isActive_46() { return &___isActive_46; }
	inline void set_isActive_46(bool value)
	{
		___isActive_46 = value;
	}

	inline static int32_t get_offset_of_tapsDone_47() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___tapsDone_47)); }
	inline int32_t get_tapsDone_47() const { return ___tapsDone_47; }
	inline int32_t* get_address_of_tapsDone_47() { return &___tapsDone_47; }
	inline void set_tapsDone_47(int32_t value)
	{
		___tapsDone_47 = value;
	}

	inline static int32_t get_offset_of_startPosition_48() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___startPosition_48)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startPosition_48() const { return ___startPosition_48; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startPosition_48() { return &___startPosition_48; }
	inline void set_startPosition_48(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startPosition_48 = value;
	}

	inline static int32_t get_offset_of_totalMovement_49() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___totalMovement_49)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_totalMovement_49() const { return ___totalMovement_49; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_totalMovement_49() { return &___totalMovement_49; }
	inline void set_totalMovement_49(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___totalMovement_49 = value;
	}

	inline static int32_t get_offset_of_pointerSequence_50() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___pointerSequence_50)); }
	inline TimedSequence_1_t20720AFDBC6E44963A16C08EE2CE2B976DF49AFC * get_pointerSequence_50() const { return ___pointerSequence_50; }
	inline TimedSequence_1_t20720AFDBC6E44963A16C08EE2CE2B976DF49AFC ** get_address_of_pointerSequence_50() { return &___pointerSequence_50; }
	inline void set_pointerSequence_50(TimedSequence_1_t20720AFDBC6E44963A16C08EE2CE2B976DF49AFC * value)
	{
		___pointerSequence_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerSequence_50), (void*)value);
	}

	inline static int32_t get_offset_of_gestureSampler_51() { return static_cast<int32_t>(offsetof(TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576, ___gestureSampler_51)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_gestureSampler_51() const { return ___gestureSampler_51; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_gestureSampler_51() { return &___gestureSampler_51; }
	inline void set_gestureSampler_51(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___gestureSampler_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gestureSampler_51), (void*)value);
	}
};


// TouchScript.Layers.UI.TouchScriptInputModule
struct TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.String TouchScript.Layers.UI.TouchScriptInputModule::HorizontalAxis
	String_t* ___HorizontalAxis_10;
	// System.String TouchScript.Layers.UI.TouchScriptInputModule::VerticalAxis
	String_t* ___VerticalAxis_11;
	// System.String TouchScript.Layers.UI.TouchScriptInputModule::SubmitButton
	String_t* ___SubmitButton_12;
	// System.String TouchScript.Layers.UI.TouchScriptInputModule::CancelButton
	String_t* ___CancelButton_13;
	// System.Single TouchScript.Layers.UI.TouchScriptInputModule::InputActionsPerSecond
	float ___InputActionsPerSecond_14;
	// System.Single TouchScript.Layers.UI.TouchScriptInputModule::RepeatDelay
	float ___RepeatDelay_15;
	// System.Int32 TouchScript.Layers.UI.TouchScriptInputModule::refCount
	int32_t ___refCount_21;
	// TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule TouchScript.Layers.UI.TouchScriptInputModule::ui
	UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * ___ui_22;

public:
	inline static int32_t get_offset_of_HorizontalAxis_10() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1, ___HorizontalAxis_10)); }
	inline String_t* get_HorizontalAxis_10() const { return ___HorizontalAxis_10; }
	inline String_t** get_address_of_HorizontalAxis_10() { return &___HorizontalAxis_10; }
	inline void set_HorizontalAxis_10(String_t* value)
	{
		___HorizontalAxis_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HorizontalAxis_10), (void*)value);
	}

	inline static int32_t get_offset_of_VerticalAxis_11() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1, ___VerticalAxis_11)); }
	inline String_t* get_VerticalAxis_11() const { return ___VerticalAxis_11; }
	inline String_t** get_address_of_VerticalAxis_11() { return &___VerticalAxis_11; }
	inline void set_VerticalAxis_11(String_t* value)
	{
		___VerticalAxis_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VerticalAxis_11), (void*)value);
	}

	inline static int32_t get_offset_of_SubmitButton_12() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1, ___SubmitButton_12)); }
	inline String_t* get_SubmitButton_12() const { return ___SubmitButton_12; }
	inline String_t** get_address_of_SubmitButton_12() { return &___SubmitButton_12; }
	inline void set_SubmitButton_12(String_t* value)
	{
		___SubmitButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubmitButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_CancelButton_13() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1, ___CancelButton_13)); }
	inline String_t* get_CancelButton_13() const { return ___CancelButton_13; }
	inline String_t** get_address_of_CancelButton_13() { return &___CancelButton_13; }
	inline void set_CancelButton_13(String_t* value)
	{
		___CancelButton_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CancelButton_13), (void*)value);
	}

	inline static int32_t get_offset_of_InputActionsPerSecond_14() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1, ___InputActionsPerSecond_14)); }
	inline float get_InputActionsPerSecond_14() const { return ___InputActionsPerSecond_14; }
	inline float* get_address_of_InputActionsPerSecond_14() { return &___InputActionsPerSecond_14; }
	inline void set_InputActionsPerSecond_14(float value)
	{
		___InputActionsPerSecond_14 = value;
	}

	inline static int32_t get_offset_of_RepeatDelay_15() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1, ___RepeatDelay_15)); }
	inline float get_RepeatDelay_15() const { return ___RepeatDelay_15; }
	inline float* get_address_of_RepeatDelay_15() { return &___RepeatDelay_15; }
	inline void set_RepeatDelay_15(float value)
	{
		___RepeatDelay_15 = value;
	}

	inline static int32_t get_offset_of_refCount_21() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1, ___refCount_21)); }
	inline int32_t get_refCount_21() const { return ___refCount_21; }
	inline int32_t* get_address_of_refCount_21() { return &___refCount_21; }
	inline void set_refCount_21(int32_t value)
	{
		___refCount_21 = value;
	}

	inline static int32_t get_offset_of_ui_22() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1, ___ui_22)); }
	inline UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * get_ui_22() const { return ___ui_22; }
	inline UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A ** get_address_of_ui_22() { return &___ui_22; }
	inline void set_ui_22(UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * value)
	{
		___ui_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ui_22), (void*)value);
	}
};

struct TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1_StaticFields
{
public:
	// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule::shuttingDown
	bool ___shuttingDown_16;
	// TouchScript.Layers.UI.TouchScriptInputModule TouchScript.Layers.UI.TouchScriptInputModule::instance
	TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * ___instance_17;
	// System.Reflection.FieldInfo TouchScript.Layers.UI.TouchScriptInputModule::raycastersProp
	FieldInfo_t * ___raycastersProp_18;
	// System.Reflection.PropertyInfo TouchScript.Layers.UI.TouchScriptInputModule::canvasProp
	PropertyInfo_t * ___canvasProp_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Canvas> TouchScript.Layers.UI.TouchScriptInputModule::raycasterCanvasCache
	Dictionary_2_tA0A98779192E365DAF1C3E7C6A23648B1B6B7E33 * ___raycasterCanvasCache_20;

public:
	inline static int32_t get_offset_of_shuttingDown_16() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1_StaticFields, ___shuttingDown_16)); }
	inline bool get_shuttingDown_16() const { return ___shuttingDown_16; }
	inline bool* get_address_of_shuttingDown_16() { return &___shuttingDown_16; }
	inline void set_shuttingDown_16(bool value)
	{
		___shuttingDown_16 = value;
	}

	inline static int32_t get_offset_of_instance_17() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1_StaticFields, ___instance_17)); }
	inline TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * get_instance_17() const { return ___instance_17; }
	inline TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 ** get_address_of_instance_17() { return &___instance_17; }
	inline void set_instance_17(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * value)
	{
		___instance_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_17), (void*)value);
	}

	inline static int32_t get_offset_of_raycastersProp_18() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1_StaticFields, ___raycastersProp_18)); }
	inline FieldInfo_t * get_raycastersProp_18() const { return ___raycastersProp_18; }
	inline FieldInfo_t ** get_address_of_raycastersProp_18() { return &___raycastersProp_18; }
	inline void set_raycastersProp_18(FieldInfo_t * value)
	{
		___raycastersProp_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastersProp_18), (void*)value);
	}

	inline static int32_t get_offset_of_canvasProp_19() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1_StaticFields, ___canvasProp_19)); }
	inline PropertyInfo_t * get_canvasProp_19() const { return ___canvasProp_19; }
	inline PropertyInfo_t ** get_address_of_canvasProp_19() { return &___canvasProp_19; }
	inline void set_canvasProp_19(PropertyInfo_t * value)
	{
		___canvasProp_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasProp_19), (void*)value);
	}

	inline static int32_t get_offset_of_raycasterCanvasCache_20() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1_StaticFields, ___raycasterCanvasCache_20)); }
	inline Dictionary_2_tA0A98779192E365DAF1C3E7C6A23648B1B6B7E33 * get_raycasterCanvasCache_20() const { return ___raycasterCanvasCache_20; }
	inline Dictionary_2_tA0A98779192E365DAF1C3E7C6A23648B1B6B7E33 ** get_address_of_raycasterCanvasCache_20() { return &___raycasterCanvasCache_20; }
	inline void set_raycasterCanvasCache_20(Dictionary_2_tA0A98779192E365DAF1C3E7C6A23648B1B6B7E33 * value)
	{
		___raycasterCanvasCache_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycasterCanvasCache_20), (void*)value);
	}
};


// TouchScript.Gestures.TransformGestures.Base.TransformGestureBase
struct TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813  : public Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::transformStartedInvoker
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___transformStartedInvoker_40;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::transformedInvoker
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___transformedInvoker_41;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::transformCompletedInvoker
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___transformCompletedInvoker_42;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::OnTransformStart
	GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * ___OnTransformStart_43;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::OnTransform
	GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * ___OnTransform_44;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::OnTransformComplete
	GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * ___OnTransformComplete_45;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::screenTransformPixelThreshold
	float ___screenTransformPixelThreshold_46;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::screenTransformPixelThresholdSquared
	float ___screenTransformPixelThresholdSquared_47;
	// TouchScript.Gestures.TransformGestures.TransformGesture/TransformType TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::transformMask
	int32_t ___transformMask_48;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::deltaPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___deltaPosition_49;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::deltaRotation
	float ___deltaRotation_50;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::deltaScale
	float ___deltaScale_51;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::rotationAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationAxis_52;
	// System.Boolean TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::isTransforming
	bool ___isTransforming_53;
	// System.Boolean TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::targetPositionOverridden
	bool ___targetPositionOverridden_54;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_55;
	// TouchScript.Gestures.TransformGestures.TransformGesture/TransformType TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::type
	int32_t ___type_56;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::screenTransformThreshold
	float ___screenTransformThreshold_57;

public:
	inline static int32_t get_offset_of_transformStartedInvoker_40() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___transformStartedInvoker_40)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_transformStartedInvoker_40() const { return ___transformStartedInvoker_40; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_transformStartedInvoker_40() { return &___transformStartedInvoker_40; }
	inline void set_transformStartedInvoker_40(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___transformStartedInvoker_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformStartedInvoker_40), (void*)value);
	}

	inline static int32_t get_offset_of_transformedInvoker_41() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___transformedInvoker_41)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_transformedInvoker_41() const { return ___transformedInvoker_41; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_transformedInvoker_41() { return &___transformedInvoker_41; }
	inline void set_transformedInvoker_41(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___transformedInvoker_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformedInvoker_41), (void*)value);
	}

	inline static int32_t get_offset_of_transformCompletedInvoker_42() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___transformCompletedInvoker_42)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_transformCompletedInvoker_42() const { return ___transformCompletedInvoker_42; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_transformCompletedInvoker_42() { return &___transformCompletedInvoker_42; }
	inline void set_transformCompletedInvoker_42(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___transformCompletedInvoker_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformCompletedInvoker_42), (void*)value);
	}

	inline static int32_t get_offset_of_OnTransformStart_43() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___OnTransformStart_43)); }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * get_OnTransformStart_43() const { return ___OnTransformStart_43; }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF ** get_address_of_OnTransformStart_43() { return &___OnTransformStart_43; }
	inline void set_OnTransformStart_43(GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * value)
	{
		___OnTransformStart_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTransformStart_43), (void*)value);
	}

	inline static int32_t get_offset_of_OnTransform_44() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___OnTransform_44)); }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * get_OnTransform_44() const { return ___OnTransform_44; }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF ** get_address_of_OnTransform_44() { return &___OnTransform_44; }
	inline void set_OnTransform_44(GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * value)
	{
		___OnTransform_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTransform_44), (void*)value);
	}

	inline static int32_t get_offset_of_OnTransformComplete_45() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___OnTransformComplete_45)); }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * get_OnTransformComplete_45() const { return ___OnTransformComplete_45; }
	inline GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF ** get_address_of_OnTransformComplete_45() { return &___OnTransformComplete_45; }
	inline void set_OnTransformComplete_45(GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * value)
	{
		___OnTransformComplete_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTransformComplete_45), (void*)value);
	}

	inline static int32_t get_offset_of_screenTransformPixelThreshold_46() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___screenTransformPixelThreshold_46)); }
	inline float get_screenTransformPixelThreshold_46() const { return ___screenTransformPixelThreshold_46; }
	inline float* get_address_of_screenTransformPixelThreshold_46() { return &___screenTransformPixelThreshold_46; }
	inline void set_screenTransformPixelThreshold_46(float value)
	{
		___screenTransformPixelThreshold_46 = value;
	}

	inline static int32_t get_offset_of_screenTransformPixelThresholdSquared_47() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___screenTransformPixelThresholdSquared_47)); }
	inline float get_screenTransformPixelThresholdSquared_47() const { return ___screenTransformPixelThresholdSquared_47; }
	inline float* get_address_of_screenTransformPixelThresholdSquared_47() { return &___screenTransformPixelThresholdSquared_47; }
	inline void set_screenTransformPixelThresholdSquared_47(float value)
	{
		___screenTransformPixelThresholdSquared_47 = value;
	}

	inline static int32_t get_offset_of_transformMask_48() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___transformMask_48)); }
	inline int32_t get_transformMask_48() const { return ___transformMask_48; }
	inline int32_t* get_address_of_transformMask_48() { return &___transformMask_48; }
	inline void set_transformMask_48(int32_t value)
	{
		___transformMask_48 = value;
	}

	inline static int32_t get_offset_of_deltaPosition_49() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___deltaPosition_49)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_deltaPosition_49() const { return ___deltaPosition_49; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_deltaPosition_49() { return &___deltaPosition_49; }
	inline void set_deltaPosition_49(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___deltaPosition_49 = value;
	}

	inline static int32_t get_offset_of_deltaRotation_50() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___deltaRotation_50)); }
	inline float get_deltaRotation_50() const { return ___deltaRotation_50; }
	inline float* get_address_of_deltaRotation_50() { return &___deltaRotation_50; }
	inline void set_deltaRotation_50(float value)
	{
		___deltaRotation_50 = value;
	}

	inline static int32_t get_offset_of_deltaScale_51() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___deltaScale_51)); }
	inline float get_deltaScale_51() const { return ___deltaScale_51; }
	inline float* get_address_of_deltaScale_51() { return &___deltaScale_51; }
	inline void set_deltaScale_51(float value)
	{
		___deltaScale_51 = value;
	}

	inline static int32_t get_offset_of_rotationAxis_52() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___rotationAxis_52)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotationAxis_52() const { return ___rotationAxis_52; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotationAxis_52() { return &___rotationAxis_52; }
	inline void set_rotationAxis_52(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotationAxis_52 = value;
	}

	inline static int32_t get_offset_of_isTransforming_53() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___isTransforming_53)); }
	inline bool get_isTransforming_53() const { return ___isTransforming_53; }
	inline bool* get_address_of_isTransforming_53() { return &___isTransforming_53; }
	inline void set_isTransforming_53(bool value)
	{
		___isTransforming_53 = value;
	}

	inline static int32_t get_offset_of_targetPositionOverridden_54() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___targetPositionOverridden_54)); }
	inline bool get_targetPositionOverridden_54() const { return ___targetPositionOverridden_54; }
	inline bool* get_address_of_targetPositionOverridden_54() { return &___targetPositionOverridden_54; }
	inline void set_targetPositionOverridden_54(bool value)
	{
		___targetPositionOverridden_54 = value;
	}

	inline static int32_t get_offset_of_targetPosition_55() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___targetPosition_55)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_55() const { return ___targetPosition_55; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_55() { return &___targetPosition_55; }
	inline void set_targetPosition_55(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_55 = value;
	}

	inline static int32_t get_offset_of_type_56() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___type_56)); }
	inline int32_t get_type_56() const { return ___type_56; }
	inline int32_t* get_address_of_type_56() { return &___type_56; }
	inline void set_type_56(int32_t value)
	{
		___type_56 = value;
	}

	inline static int32_t get_offset_of_screenTransformThreshold_57() { return static_cast<int32_t>(offsetof(TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813, ___screenTransformThreshold_57)); }
	inline float get_screenTransformThreshold_57() const { return ___screenTransformThreshold_57; }
	inline float* get_address_of_screenTransformThreshold_57() { return &___screenTransformThreshold_57; }
	inline void set_screenTransformThreshold_57(float value)
	{
		___screenTransformThreshold_57 = value;
	}
};


// TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase
struct TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27  : public TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813
{
public:
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::minScreenPointsPixelDistance
	float ___minScreenPointsPixelDistance_58;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::minScreenPointsPixelDistanceSquared
	float ___minScreenPointsPixelDistanceSquared_59;
	// UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::screenPixelTranslationBuffer
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPixelTranslationBuffer_60;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::screenPixelRotationBuffer
	float ___screenPixelRotationBuffer_61;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::angleBuffer
	float ___angleBuffer_62;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::screenPixelScalingBuffer
	float ___screenPixelScalingBuffer_63;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::scaleBuffer
	float ___scaleBuffer_64;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::minScreenPointsDistance
	float ___minScreenPointsDistance_65;

public:
	inline static int32_t get_offset_of_minScreenPointsPixelDistance_58() { return static_cast<int32_t>(offsetof(TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27, ___minScreenPointsPixelDistance_58)); }
	inline float get_minScreenPointsPixelDistance_58() const { return ___minScreenPointsPixelDistance_58; }
	inline float* get_address_of_minScreenPointsPixelDistance_58() { return &___minScreenPointsPixelDistance_58; }
	inline void set_minScreenPointsPixelDistance_58(float value)
	{
		___minScreenPointsPixelDistance_58 = value;
	}

	inline static int32_t get_offset_of_minScreenPointsPixelDistanceSquared_59() { return static_cast<int32_t>(offsetof(TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27, ___minScreenPointsPixelDistanceSquared_59)); }
	inline float get_minScreenPointsPixelDistanceSquared_59() const { return ___minScreenPointsPixelDistanceSquared_59; }
	inline float* get_address_of_minScreenPointsPixelDistanceSquared_59() { return &___minScreenPointsPixelDistanceSquared_59; }
	inline void set_minScreenPointsPixelDistanceSquared_59(float value)
	{
		___minScreenPointsPixelDistanceSquared_59 = value;
	}

	inline static int32_t get_offset_of_screenPixelTranslationBuffer_60() { return static_cast<int32_t>(offsetof(TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27, ___screenPixelTranslationBuffer_60)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPixelTranslationBuffer_60() const { return ___screenPixelTranslationBuffer_60; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPixelTranslationBuffer_60() { return &___screenPixelTranslationBuffer_60; }
	inline void set_screenPixelTranslationBuffer_60(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPixelTranslationBuffer_60 = value;
	}

	inline static int32_t get_offset_of_screenPixelRotationBuffer_61() { return static_cast<int32_t>(offsetof(TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27, ___screenPixelRotationBuffer_61)); }
	inline float get_screenPixelRotationBuffer_61() const { return ___screenPixelRotationBuffer_61; }
	inline float* get_address_of_screenPixelRotationBuffer_61() { return &___screenPixelRotationBuffer_61; }
	inline void set_screenPixelRotationBuffer_61(float value)
	{
		___screenPixelRotationBuffer_61 = value;
	}

	inline static int32_t get_offset_of_angleBuffer_62() { return static_cast<int32_t>(offsetof(TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27, ___angleBuffer_62)); }
	inline float get_angleBuffer_62() const { return ___angleBuffer_62; }
	inline float* get_address_of_angleBuffer_62() { return &___angleBuffer_62; }
	inline void set_angleBuffer_62(float value)
	{
		___angleBuffer_62 = value;
	}

	inline static int32_t get_offset_of_screenPixelScalingBuffer_63() { return static_cast<int32_t>(offsetof(TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27, ___screenPixelScalingBuffer_63)); }
	inline float get_screenPixelScalingBuffer_63() const { return ___screenPixelScalingBuffer_63; }
	inline float* get_address_of_screenPixelScalingBuffer_63() { return &___screenPixelScalingBuffer_63; }
	inline void set_screenPixelScalingBuffer_63(float value)
	{
		___screenPixelScalingBuffer_63 = value;
	}

	inline static int32_t get_offset_of_scaleBuffer_64() { return static_cast<int32_t>(offsetof(TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27, ___scaleBuffer_64)); }
	inline float get_scaleBuffer_64() const { return ___scaleBuffer_64; }
	inline float* get_address_of_scaleBuffer_64() { return &___scaleBuffer_64; }
	inline void set_scaleBuffer_64(float value)
	{
		___scaleBuffer_64 = value;
	}

	inline static int32_t get_offset_of_minScreenPointsDistance_65() { return static_cast<int32_t>(offsetof(TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27, ___minScreenPointsDistance_65)); }
	inline float get_minScreenPointsDistance_65() const { return ___minScreenPointsDistance_65; }
	inline float* get_address_of_minScreenPointsDistance_65() { return &___minScreenPointsDistance_65; }
	inline void set_minScreenPointsDistance_65(float value)
	{
		___minScreenPointsDistance_65 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC005492A35FF3810936B20F0D2CB95C92703DD39_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_GetEventHandler_TisRuntimeObject_m6438D665F9FC8B7823449A1BE5B86AE4D044E357_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t10AC44967751F27B2BFC1CDA880B1466D87483F1 * ___functor2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mF48BF6C7ED453A0A5CDFABFB4975E7C876509603_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t10AC44967751F27B2BFC1CDA880B1466D87483F1 * ___callbackFunction2, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 TouchScript.Utils.TransformUtils::GlobalToLocalVector(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformUtils_GlobalToLocalVector_m08D695AF6AAB1A196454D7014B960BDF37381E88 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___global1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void TouchScript.Utils.TransformUtils::initStringBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtils_initStringBuilder_m17C010C3B98D4689ED949E1AB6DB2EC0F0E81470 (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Insert_m2B101CF8B6D47CFC7602CBABC101569E513D234F (StringBuilder_t * __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TouchScript.Gestures.TransformGestures.Base.TransformGestureBase>()
inline TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * Component_GetComponent_TisTransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813_m12AF12EDFBDD96E618ED51D57010C1180F58B659 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m25E894A925A36601684C7D06070580874F026874 (EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TouchScript.Gestures.Gesture::add_StateChanged(System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gesture_add_StateChanged_m3B0018E1D7936419AADABC22F8A669980AB165EF (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 * ___value0, const RuntimeMethod* method);
// TouchScript.ITouchManager TouchScript.TouchManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchManager_get_Instance_mDEE153FA655A86C7A9D11B0C67D1CB453C638A25 (const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TouchScript.Behaviors.Transformer::stateIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_stateIdle_m8F6E2242AB89DD9945CD4D58AA1B3C22236B58B8 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Gestures.Gesture::remove_StateChanged(System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gesture_remove_StateChanged_mE7316E417B3CBB9FDEA7D65D8F07FF0DFA8BAA39 (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 * ___value0, const RuntimeMethod* method);
// System.Void TouchScript.Behaviors.Transformer::setState(TouchScript.Behaviors.Transformer/TransformerState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transformer_setState_mAE98D184176F8322D63A3E07D0B542DFB55DEBE3_inline (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Void TouchScript.Behaviors.Transformer::stateManual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_stateManual_m1DEC3799D60D19F445FA2D4BA2DE085A5AE1DE4E (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method);
// TouchScript.Gestures.TransformGestures.TransformGesture/TransformType TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_TransformMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformGestureBase_get_TransformMask_m0A4820044580E026617CF37DFE1441F4EEF69153_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_DeltaScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TransformGestureBase_get_DeltaScale_m74220090BFD11D010E6ABF1ACBA24B2F6B303080_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_DeltaRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TransformGestureBase_get_DeltaRotation_mDD8BD4073EC667C1CBDF9D6C48796731B7501C9A_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_RotationAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformGestureBase_get_RotationAxis_m02512396E34D1C189B179847020EE9DC88F3D3C8_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_DeltaPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformGestureBase_get_DeltaPosition_m0F5B048117EC12115F346566505E421499284639_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::OverrideTargetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformGestureBase_OverrideTargetPosition_mAB01384950D727842CF5BF24D023B9280BEC45C0 (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void TouchScript.Behaviors.Transformer::applyValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_applyValues_m69FA85A0704CC0689CBF4C7C3D691A0D23D254A6 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method);
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GestureStateChangeEventArgs_get_State_m34F507EFBB2EA79E6EE0B639D9FB8EF0BEFB1F3B_inline (GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * __this, const RuntimeMethod* method);
// System.Void TouchScript.Behaviors.Transformer::manualUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_manualUpdate_mAEAE77FE46B49D19DF20A63E7EC18BB6D57FFBE9 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Behaviors.Transformer::stateAutomatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_stateAutomatic_mB8FAE11BBAC89EA30232205DD85960E016241F94 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method);
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.GestureStateChangeEventArgs::get_PreviousState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GestureStateChangeEventArgs_get_PreviousState_m46B298BB680F621F87D99779987C97EA209EB718_inline (GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * __this, const RuntimeMethod* method);
// System.Void TouchScript.Behaviors.Transformer::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_update_m945597D5F71590639ABBFB91988A6B412BDE844B (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::updateMinScreenPointsDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoPointTransformGestureBase_updateMinScreenPointsDistance_mD973DE3861F0E21BC27A38EC12A17DD87F5E71C8 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformGestureBase_OnEnable_m785D31F544FB529F5A551C1DB22E1567D1370CC9 (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Gestures.Gesture::pointersUpdated(System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gesture_pointersUpdated_mDB672DA3AFDA4EF22CDF64636CBE523FF315CDB3 (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, RuntimeObject* ___pointers0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>::get_Item(System.Int32)
inline Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_inline (List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * (*) (List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// TouchScript.Layers.ProjectionParams TouchScript.Pointers.Pointer::get_ProjectionParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * Pointer_get_ProjectionParams_m3CA51C3A4B427362732A5EDAC567DA3455694282 (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// TouchScript.Gestures.Gesture/PointersNumState TouchScript.Gestures.Gesture::get_pointersNumState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gesture_get_pointersNumState_mCF5797DA98213A7E94B170524C4D1A14FAAC9278_inline (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, const RuntimeMethod* method);
// TouchScript.Gestures.TransformGestures.TransformGesture/TransformType TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformGestureBase_get_Type_m93AA1A91375B88929A905699AAF947D66BFA4FF5_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Utils.Geom.TwoD::PointToLineDistance2(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoD_PointToLineDistance2_mF9F1AA939C59ECAC379D5F430E985B4796FB587C (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lineStart0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lineEnd1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point12, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point23, float* ___dist14, float* ___dist25, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gesture_get_State_mE078CD64034A0A21C076C3B703BEC2920FBC5090_inline (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, const RuntimeMethod* method);
// System.Boolean TouchScript.Gestures.Gesture::setState(TouchScript.Gestures.Gesture/GestureState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gesture_setState_m39529F73B75151D1F9D9B8404A49A9BCDFC77F3F (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::resetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformGestureBase_resetValues_m4D75E6AA864555A69BE9CB1730B96094E875DDC5 (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformGestureBase_reset_m1C31927F37E1EB3F72DEF23A908607C7E0A56C3E (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Int32 TouchScript.Gestures.Gesture::get_NumPointers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gesture_get_NumPointers_m87B20BC5C694ACB88D70D568BBD7C421A560BA86_inline (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 TouchScript.Pointers.Pointer::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Pointer_get_Position_m4E72C345860B25642E55A7BAFE830F2DDD7027B4_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 TouchScript.Pointers.Pointer::get_PreviousPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Pointer_get_PreviousPosition_mBC5A988DF9BD295CA0034BFF5E6526BBC188D43B_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method);
// TouchScript.Core.TouchManagerInstance TouchScript.Gestures.Gesture::get_touchManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * Gesture_get_touchManager_m62A37E7BB349DAD73E7BCF46F2CAC30641601C88_inline (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, const RuntimeMethod* method);
// System.Single TouchScript.Core.TouchManagerInstance::get_DotsPerCentimeter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TouchManagerInstance_get_DotsPerCentimeter_m1B48CD34B01817954E86526D4EF650F17EF73195_inline (TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformGestureBase__ctor_m4B837C6E28C80A47C6DCD1F1584F9AF3369F2542 (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Hit.HitTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitTest__ctor_mCA89929E139F89B0EDFFD61665E7C02CB8AF9BC3 (HitTest_tE32CEF25F8B0640C77DFDDC28F38100EF0175086 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_m457BE1719C1CF9A9BD6D6BFB02505E9778D68D6F (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_frame(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int64_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TouchScript.Examples.Portal.Planet>()
inline Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210 * Component_GetComponent_TisPlanet_t24425248AAAE5648C27C10E1AA8431B341B1D210_mE1E90F555DBAA445E6CFFA8E289D45FF7AD01CCD (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void TouchScript.Examples.Portal.Planet::Fall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet_Fall_m418075FCE29296C42C17898831BF243A5DB8F06C (Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void TouchScript.Layers.ProjectionParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionParams__ctor_m82B45BECFB53B67685614FF762F93CCBAE5997AB (ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * __this, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 TouchScript.Utils.Geom.ProjectionUtils::CameraToPlaneProjection(UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionUtils_CameraToPlaneProjection_mC1A8E2D588F9EE1C3D94E643F90A2A3AA8C0D382 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___projectionPlane2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<TouchScript.Gestures.Gesture>::.ctor()
inline void UnityEvent_1__ctor_mC3D2855F27182E641292E7BC95897B444B6FA4D6 (UnityEvent_1_tD4246030226F4144B39294A9484E152A5249BF4B * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tD4246030226F4144B39294A9484E152A5249BF4B *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void TouchScript.Core.GestureManagerInstance/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDDC0F16595C5F277D8F4A8D201DB5D355BB36C56 (U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::.ctor(System.Int32)
inline void List_1__ctor_mD7FAB47EB79E810A78BA1E380A42BABAC3801194 (List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>::Clear()
inline void List_1_Clear_m66B083B554C59C9707F21BECA0A0491CA56AA110 (List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>::.ctor(System.Int32)
inline void List_1__ctor_mFE77211EF52E5EED34AF7FE8462DEF4125F91415 (List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>::Clear()
inline void List_1_Clear_mCD0EEDC8DD813A9A8573E01F6BA012F17A081A14 (List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(System.Int32)
inline void List_1__ctor_m3EED555DE083A34B0F2CAB4EE64DB7D09D6F5BE2 (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear()
inline void List_1_Clear_mFAD32CB3130E71D5F5B9B07957BBC7F70096A936 (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258 (const RuntimeMethod* method);
// System.Single TouchScript.Gestures.LongPressGesture::get_TimeToPress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LongPressGesture_get_TimeToPress_mD7355052B743900CF7F6D270370AB96DA8541C36_inline (LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * __this, const RuntimeMethod* method);
// UnityEngine.Transform TouchScript.Hit.HitData::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * HitData_get_Target_mDCBC396875ED34440B0C5F8D8B2C27BFCA4A7B0B_inline (HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_IsChildOf_m1783A88A490931E98F4D5E361595A518E09FD4BC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// TouchScript.ILayerManager TouchScript.LayerManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LayerManager_get_Instance_m42BD8871420217FA6822F57708709ECF0D49EE38 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void TouchScript.Layers.StandardLayer::setupInputModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardLayer_setupInputModule_mFAF68C9F80F4253243010D19EE407D4C6DFD8BED (StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E * __this, const RuntimeMethod* method);
// System.Single TouchScript.Gestures.TapGesture::get_TimeLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapGesture_get_TimeLimit_mFB00C58209EEA02FA1F470B6185A1143EF07D392_inline (TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * __this, const RuntimeMethod* method);
// System.Void TouchScript.InputSources.InputHandlers.TouchHandler/TouchState::.ctor(TouchScript.Pointers.Pointer,UnityEngine.TouchPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchState__ctor_mB0D84CF0746D5AA8A091457FAEE46400EAC67359 (TouchState_t648502A120A8AA87F740560422538F317A483E56 * __this, Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * ___pointer0, int32_t ___phase1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>>::.ctor()
inline void UnityEvent_1__ctor_m774D443F08E5AE90D2BC22A380ADC258DA8BE9F9 (UnityEvent_1_t1C0EAC39F0669D2DF7E6E070EFF4363AA5F60788 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1C0EAC39F0669D2DF7E6E070EFF4363AA5F60788 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void TouchScript.Core.TouchManagerInstance/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m13E0BA01A89D660DE87DEAE75689ECC7B64B7432 (U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Void TouchScript.Core.TouchManagerInstance::createCameraLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManagerInstance_createCameraLayer_m36F1C0EE9D0D27C242A2EADC780FD9BC66BCBC95 (TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Core.TouchManagerInstance::createInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchManagerInstance_createInput_mADD9702A5657E77E31A98E999A10A06BA1E61233 (TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mB86963336046BCC851EDB7F7B4BC04CE55C3276A (Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mC005492A35FF3810936B20F0D2CB95C92703DD39_gshared)(__this, ___capacity0, method);
}
// UnityEngine.Profiling.CustomSampler UnityEngine.Profiling.CustomSampler::Create(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6 (String_t* ___name0, bool ___collectGpuData1, const RuntimeMethod* method);
// UnityEngine.EventSystems.PointerEventData TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::GetLastPointerEventData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * UIStandardInputModule_GetLastPointerEventData_m40B4EB1DF30123C99563D99F3D74C8D4EDBA5D60 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, int32_t ___id0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerEventData_get_pointerEnter_m6F16C8962F195BB6ED58150986AEF584E4B979CB_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m112BCAAE5FE5B09885E2E42287E2CDC01B4516FC (Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * __this, int32_t ___key0, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 *, int32_t, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline (BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerId_m7CD30C18A42AD6A99B435816B58F6CFDF42777D4_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Add(!0,!1)
inline void Dictionary_2_Add_mF3E0C0B4EBA974F04D4FBF35CCFF7E4EB72CDD86 (Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * __this, int32_t ___key0, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 *, int32_t, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_GetEventHandler_TisISelectHandler_t9E3C913E19619F48362FBF67E14CCBFEDA4742C2_m241D0C68CC4C49641D5E11D81FA47FDA06BE4D63 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m6438D665F9FC8B7823449A1BE5B86AE4D044E357_gshared)(___root0, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m7F0F2E78C18FD468E8B5083AFDA6E9D9364D3D5F (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selected0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___pointer1, const RuntimeMethod* method);
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_GetPointerData_m04D86A1860BEF77090A0D302FC534EAB5F2E5EC1 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, int32_t ___id0, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** ___data1, bool ___create2, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::get_updateSelectedHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C * ExecuteEvents_get_updateSelectedHandler_mA6B61ECA1F26501A2294B4EB06EBC2532E423891_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIUpdateSelectedHandler_tD5D76B759B900C3F557E3CEC55F6E08EE6909806_mBFD650297AF62567370432ED0EC48C057FBA7C72 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.Vector2 TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::GetRawMoveVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIStandardInputModule_GetRawMoveVector_m47AC3597C4020F02640B7BB705D29F87D8FEDEF6 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::get_moveDir()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AxisEventData_get_moveDir_mEE3B3409B871B022C83343228C554D4CBA4FDB7C_inline (AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::get_moveHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD * ExecuteEvents_get_moveHandler_mEA286929FEB1FF5040F9FA8913B5B819808F9F90_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IMoveHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIMoveHandler_t603A54D1EA15704B37D022CCE294EFE3F831559F_m0504DE3A83975304D129D6089B0608393E0C7AF7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::get_submitHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 * ExecuteEvents_get_submitHandler_m6B589A2BEB9E2CF3BDAB2E39E1A67BF76B4D6095_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ISubmitHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisISubmitHandler_t20677BB54F3FD568032702852052A70355A0D774_m85570C9153E80406C8213FBC08891128A51BB892 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::get_cancelHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 * ExecuteEvents_get_cancelHandler_m3DC78C07BF9678E9DF9064D9BC987E9F1FA221C8_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ICancelHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisICancelHandler_t9288977907DA5B88ED40625672C05460E60752F8_m198C79464DD56A595A6161B19B78E5E2FD1044D9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::SendUpdateEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_SendUpdateEventToSelectedObject_mEAA026FDD41EBF7E5762524D38C90E034AD03B0F (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventSystem_get_sendNavigationEvents_m6577B15136A3AAE95673BBE20109F12C4BB2D023_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::SendMoveEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_SendMoveEventToSelectedObject_mE11872AD627199062B23DCD1D2C74A7B918840C7 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, const RuntimeMethod* method);
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::SendSubmitEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_SendSubmitEventToSelectedObject_m532DDF040F42C47DF78CDCC56F4171B5AC791D39 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Remove(!0)
inline bool Dictionary_2_Remove_mE9C5ED7783AAC1B89224E1AF553DCA9E4B96679A (Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastResult_set_gameObject_m3A1B023B578A8142A437B0C27AAE045DED6AAA20_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer> TouchScript.PointerEventArgs::get_Pointers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointerEventArgs_get_Pointers_m42550633F7D17F8698C95490CB2ECD6051746CD7_inline (PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * __this, const RuntimeMethod* method);
// TouchScript.Pointers.Pointer/PointerButtonState TouchScript.Pointers.Pointer::get_Buttons()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Buttons_mF086BE54F232C26195D85A878BF79DF2CA5324DF_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method);
// TouchScript.Hit.HitData TouchScript.Pointers.Pointer::GetPressData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  Pointer_GetPressData_mEBDE2A1EF35C622247FE94D7A7D67C3EF510E384_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method);
// TouchScript.Hit.HitData/HitType TouchScript.Hit.HitData::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HitData_get_Type_m4F3E6C3C75C4C632944A1A73356D5AC0B7F9B09F_inline (HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 * __this, const RuntimeMethod* method);
// TouchScript.Hit.HitData TouchScript.Pointers.Pointer::GetOverData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  Pointer_GetOverData_mBA01649B10072200A7C812BEFF814B094A7466B9 (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, bool ___forceRecalculate0, const RuntimeMethod* method);
// System.Int32 TouchScript.Pointers.Pointer::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m0D7215B40F4759E2E7F3261DBB1484C7530C060C_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_m30E0BE702A57A13FEA52CA55D4B29DDE66931261_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// TouchScript.Hit.RaycastHitUI TouchScript.Hit.HitData::get_RaycastHitUI()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  HitData_get_RaycastHitUI_m46041A06F4A3347C96EFDD9DF6F7C10E78A0E05F_inline (HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 * __this, const RuntimeMethod* method);
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::convertRaycast(TouchScript.Hit.RaycastHitUI,UnityEngine.EventSystems.RaycastResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_convertRaycast_mAC2E3FF8D9D4FC6AC8D8F5302A94E0AE8C378259 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  ___old0, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * ___current1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerCurrentRaycast_m16C21C39E7763E52ABE4485B4171FC4DF2A2A6BC_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_HandlePointerExitAndEnter_mC94EE79B9295384EF83DAABA1FB5EF1146DF969F (BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___currentPointerData0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newEnterTarget1, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventData_IsPointerMoving_m4D3F38B1E1DA05DF39C98D39F1355A0456C84923 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_dragging_m7FD3F5D4D8DAC559A57EDB88F2B2B5DEA4B48266_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_pressPosition_mB8F60EB21F6E6892EC731382614BAB85E29ED642_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventSystem_get_pixelDragThreshold_mE6BC245DF53C04B06DCDF7663BF40087696D793A_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_useDragThreshold_m683F708E7E5F8351D8DD354A3B2CA9B290683BEE_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_ShouldStartDrag_m62D5D05F1910044E2EFE84173682FB24359C6440 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pressPos0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentPos1, float ___threshold2, bool ___useDragThreshold3, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_beginDragHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 * ExecuteEvents_get_beginDragHandler_mB0F124732A2AA52CFCE805209E45FED043ECF2DF_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IBeginDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_mCA6F9E32CFBC40460751C2A05C463AF7C5CDE0C8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_dragging_mEB739C44F1B1848B4B3F4E7FBB9B376587C2C7E1_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerEventData_get_pointerPress_mB55C5528AF445DB7B912086E43F0BCD9CDFF409C_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerUpHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * ExecuteEvents_get_pointerUpHandler_m9E843EA7C17EDBEFF9F3003FAEEA4FB644562E67_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m5CFAF671C2B33AF8E9153FA4826D93B9308C4C07_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPress_mF37D23566DDB326EB2CFE59592F8538F23BA0EC0 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_m0BEEB9CA5E44F570C2C0803553BA9736F4DF58F0_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_dragHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E * ExecuteEvents_get_dragHandler_m641349957A945DA8FEF7DDA58260469EC20DC84C_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mA661CB69E2CA9AF862894036847115E9825F48D3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.Vector2 TouchScript.Pointers.MousePointer::get_ScrollDelta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MousePointer_get_ScrollDelta_mC3F557B38D03EC1EFFC8610C47F084AC2506554A_inline (MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_scrollDelta_m3ECB852D4D953D59C617DF0FE9E44B0EEF8AEA13_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IScrollHandler>(UnityEngine.GameObject)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_GetEventHandler_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_mAC9DF9D93BF477348C4D0C918293847319BD04E1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m6438D665F9FC8B7823449A1BE5B86AE4D044E357_gshared)(___root0, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::get_scrollHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF * ExecuteEvents_get_scrollHandler_m4C8DF1B6D5EC3243AFE2EAEA87BAE72E87AB6456_inline (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IScrollHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_m9A7CDD374FDCD7D5FCF1E1F91DE2458B86A22069 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF * ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF *, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mF48BF6C7ED453A0A5CDFABFB4975E7C876509603_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_useDragThreshold_m146893D383B122225651D7882A6998FFB4274C85_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_mE644EE1603DFF2087224FF6364EA0204D04D7939_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_mAF28B12216468A02DACA9900B0A57FA1BF3B94F4_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method);
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_DeselectIfSelectionChanged_m78394F4A59843A87487B121BC1CE7E2B6726EC56 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentOverGo0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___pointerEvent1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerEnter_mA547F8B280EA1AE5DE27EB5FF14AC3CF156A86D1_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerDownHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C * ExecuteEvents_get_pointerDownHandler_m9C9261D6CAB8B6DB61C1165F28B52A3EC1F84C3A_inline (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_tD8B28A09D1D5F93DAB6905DE3890FC73E6DF1E0C_m85F0FBE1A24E6569B49441102862CB6A96563E5C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C * ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C *, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mF48BF6C7ED453A0A5CDFABFB4975E7C876509603_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m07A94374DDEDD87BB9A9B5A869150F0C5A8722DA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m6438D665F9FC8B7823449A1BE5B86AE4D044E357_gshared)(___root0, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerEventData_get_lastPress_m362C5876B8C9F50BACC27D9026DB3709D6950C0B_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_clickTime_m08F7FD164EFE2AE7B47A15C70BC418632B9E5950_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_mB44AAB99335BD7D2BD93E40DAC282A56202E44F2_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickCount_m2EAAB7F43CE26BF505B7FCF7D509C988DCFD7F28_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickTime_m215E254F8585FFC518E3161FAF9137388F64AC58_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_GetEventHandler_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mFA11ACE98FA239AFB5E9CF1A9C95284D3F12E8F8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m6438D665F9FC8B7823449A1BE5B86AE4D044E357_gshared)(___root0, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m2E9F059EC1CDF71E0A097A0D3CCBA564E0C463C2_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_initializePotentialDrag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA * ExecuteEvents_get_initializePotentialDrag_m726CADE4F0D36D5A2699A9CD02699116D34C799A_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IInitializePotentialDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m41B2C8664EE6E01D2D569C0EB09200D3FB172A5D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_eligibleForClick_mEE3ADEFAD3CF5BCBBAC695A1974870E9F3781AA7_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerClickHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 * ExecuteEvents_get_pointerClickHandler_m8D0C77485F58F6FA716E739DB2594DF069530EBB_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m008259182237138FF111EC7A20CE559CBE1B67C2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::get_dropHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A * ExecuteEvents_get_dropHandler_mD0816EFA2E1E46EF2B3B06C64868B197B574A1C3_inline (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IDropHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t4C6C44AF24CF3830774D87C0F4326DD208882F09_m2EC13CE27119899D978C098DE2D7992FFCFE21A1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A * ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A *, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mF48BF6C7ED453A0A5CDFABFB4975E7C876509603_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_endDragHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 * ExecuteEvents_get_endDragHandler_mB81B25D98F3A84B074490C936E178DEB5E0D6EC3_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IEndDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mD0EAD259C83B2289D29ABC4AEC5A4639CEA75D01 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 * ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m20F4B1FD39A6BA916CF0A469A0D71DE4DC727B26_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerExitHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * ExecuteEvents_get_pointerExitHandler_mE6B90ECE2E2AFFBF4487BE3B3E9A1F43A5C72BCB_inline (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerExitHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 *, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mF48BF6C7ED453A0A5CDFABFB4975E7C876509603_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::RemovePointerData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_RemovePointerData_mC0070394962968B82467BC7CF8EFF2DE05FF225F (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643 (float ___dot0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 TouchScript.Utils.TransformUtils::GlobalToLocalPosition(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformUtils_GlobalToLocalPosition_mE3A7B38E16C6A065DB1F19BC378A1A4341D12974 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___global1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.parent == null) return global;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (transform.parent == null) return global;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___global1;
		return L_3;
	}

IL_0010:
	{
		// return transform.parent.InverseTransformPoint(global);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___transform0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___global1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 TouchScript.Utils.TransformUtils::GlobalToLocalDirection(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformUtils_GlobalToLocalDirection_m2C4191FFA5CE1A7B77FC73AB999B1C8D49F5E1F2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___global1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.parent == null) return global;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (transform.parent == null) return global;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___global1;
		return L_3;
	}

IL_0010:
	{
		// return transform.parent.InverseTransformDirection(global);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___transform0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___global1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 TouchScript.Utils.TransformUtils::GlobalToLocalVector(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformUtils_GlobalToLocalVector_m08D695AF6AAB1A196454D7014B960BDF37381E88 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___global1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B4_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B5_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B7_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B6_0 = NULL;
	float G_B8_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B8_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B10_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B11_1 = NULL;
	{
		// var parent = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (parent == null) return global;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// if (parent == null) return global;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___global1;
		return L_4;
	}

IL_0012:
	{
		// var scale = parent.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var vector = GlobalToLocalVector(parent, global);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___global1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = TransformUtils_GlobalToLocalVector_m08D695AF6AAB1A196454D7014B960BDF37381E88(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// vector = Quaternion.Inverse(parent.localRotation) * vector;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// vector.x = Mathf.Approximately(scale.x, 0) ? 0 : vector.x / scale.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		float L_16 = L_15.get_x_2();
		bool L_17;
		L_17 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_16, (0.0f), /*hidden argument*/NULL);
		G_B3_0 = (&V_2);
		if (L_17)
		{
			G_B4_0 = (&V_2);
			goto IL_0056;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_2;
		float L_19 = L_18.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		float L_21 = L_20.get_x_2();
		G_B5_0 = ((float)((float)L_19/(float)L_21));
		G_B5_1 = G_B3_0;
		goto IL_005b;
	}

IL_0056:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_005b:
	{
		G_B5_1->set_x_2(G_B5_0);
		// vector.y = Mathf.Approximately(scale.y, 0) ? 0 : vector.y / scale.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		float L_23 = L_22.get_y_3();
		bool L_24;
		L_24 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_23, (0.0f), /*hidden argument*/NULL);
		G_B6_0 = (&V_2);
		if (L_24)
		{
			G_B7_0 = (&V_2);
			goto IL_0083;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_2;
		float L_26 = L_25.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_1;
		float L_28 = L_27.get_y_3();
		G_B8_0 = ((float)((float)L_26/(float)L_28));
		G_B8_1 = G_B6_0;
		goto IL_0088;
	}

IL_0083:
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B7_0;
	}

IL_0088:
	{
		G_B8_1->set_y_3(G_B8_0);
		// vector.z = Mathf.Approximately(scale.z, 0) ? 0 : vector.z / scale.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_1;
		float L_30 = L_29.get_z_4();
		bool L_31;
		L_31 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_30, (0.0f), /*hidden argument*/NULL);
		G_B9_0 = (&V_2);
		if (L_31)
		{
			G_B10_0 = (&V_2);
			goto IL_00b0;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_2;
		float L_33 = L_32.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_1;
		float L_35 = L_34.get_z_4();
		G_B11_0 = ((float)((float)L_33/(float)L_35));
		G_B11_1 = G_B9_0;
		goto IL_00b5;
	}

IL_00b0:
	{
		G_B11_0 = (0.0f);
		G_B11_1 = G_B10_0;
	}

IL_00b5:
	{
		G_B11_1->set_z_4(G_B11_0);
		// return vector;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_2;
		return L_36;
	}
}
// System.String TouchScript.Utils.TransformUtils::GetHeirarchyPath(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformUtils_GetHeirarchyPath_m436606DEC76F4F731EC07348BD8FFE994405B1BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// initStringBuilder();
		TransformUtils_initStringBuilder_m17C010C3B98D4689ED949E1AB6DB2EC0F0E81470(/*hidden argument*/NULL);
		// if (transform == null) return null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if (transform == null) return null;
		return (String_t*)NULL;
	}

IL_0010:
	{
		// sb.Insert(0, transform.name);
		StringBuilder_t * L_2 = ((TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_StaticFields*)il2cpp_codegen_static_fields_for(TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_il2cpp_TypeInfo_var))->get_sb_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___transform0;
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Insert_m2B101CF8B6D47CFC7602CBABC101569E513D234F(L_2, 0, L_4, /*hidden argument*/NULL);
		// sb.Insert(0, "/");
		StringBuilder_t * L_6 = ((TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_StaticFields*)il2cpp_codegen_static_fields_for(TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_il2cpp_TypeInfo_var))->get_sb_0();
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Insert_m2B101CF8B6D47CFC7602CBABC101569E513D234F(L_6, 0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		// transform = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___transform0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		___transform0 = L_9;
	}

IL_003b:
	{
		// while (transform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = ___transform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0010;
		}
	}
	{
		// return sb.ToString();
		StringBuilder_t * L_12 = ((TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_StaticFields*)il2cpp_codegen_static_fields_for(TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_il2cpp_TypeInfo_var))->get_sb_0();
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_13;
	}
}
// System.Void TouchScript.Utils.TransformUtils::initStringBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtils_initStringBuilder_m17C010C3B98D4689ED949E1AB6DB2EC0F0E81470 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sb == null) sb = new StringBuilder();
		StringBuilder_t * L_0 = ((TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_StaticFields*)il2cpp_codegen_static_fields_for(TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_il2cpp_TypeInfo_var))->get_sb_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// if (sb == null) sb = new StringBuilder();
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_1, /*hidden argument*/NULL);
		((TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_StaticFields*)il2cpp_codegen_static_fields_for(TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_il2cpp_TypeInfo_var))->set_sb_0(L_1);
	}

IL_0011:
	{
		// sb.Length = 0;
		StringBuilder_t * L_2 = ((TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_StaticFields*)il2cpp_codegen_static_fields_for(TransformUtils_t6FF80A9577D1EEB21FE20B10D1616E44014F7137_il2cpp_TypeInfo_var))->get_sb_0();
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_2, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean TouchScript.Behaviors.Transformer::get_EnableSmoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transformer_get_EnableSmoothing_m571CF3B2BFB9AB785C3D285A24521C2C5BAF453F (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// get { return enableSmoothing; }
		bool L_0 = __this->get_enableSmoothing_4();
		return L_0;
	}
}
// System.Void TouchScript.Behaviors.Transformer::set_EnableSmoothing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_set_EnableSmoothing_m0AB1A6D8C11D2DF903E834D872C8D867EC3A9D0B (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { enableSmoothing = value; }
		bool L_0 = ___value0;
		__this->set_enableSmoothing_4(L_0);
		// set { enableSmoothing = value; }
		return;
	}
}
// System.Single TouchScript.Behaviors.Transformer::get_SmoothingFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Transformer_get_SmoothingFactor_mA9D17175F8B45F24C883DFF3A337EFA6323E3763 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// get { return smoothingFactor * 100000f; }
		float L_0 = __this->get_smoothingFactor_5();
		return ((float)il2cpp_codegen_multiply((float)L_0, (float)(100000.0f)));
	}
}
// System.Void TouchScript.Behaviors.Transformer::set_SmoothingFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_set_SmoothingFactor_m7A1E27C5E8F848F132A3BA9DC9A2AFA3B6BBF4EE (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { smoothingFactor = Mathf.Clamp(value / 100000f, 0, 1); }
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)L_0/(float)(100000.0f))), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_smoothingFactor_5(L_1);
		// set { smoothingFactor = Mathf.Clamp(value / 100000f, 0, 1); }
		return;
	}
}
// System.Single TouchScript.Behaviors.Transformer::get_PositionThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Transformer_get_PositionThreshold_m76416D112D2C4FF8495F998B7F83404BCEC8CE19 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// get { return Mathf.Sqrt(positionThreshold); }
		float L_0 = __this->get_positionThreshold_6();
		float L_1;
		L_1 = sqrtf(L_0);
		return L_1;
	}
}
// System.Void TouchScript.Behaviors.Transformer::set_PositionThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_set_PositionThreshold_mC248B01259E994D7D64041F4593F6B960A58EE1D (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { positionThreshold = value * value; }
		float L_0 = ___value0;
		float L_1 = ___value0;
		__this->set_positionThreshold_6(((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)));
		// set { positionThreshold = value * value; }
		return;
	}
}
// System.Single TouchScript.Behaviors.Transformer::get_RotationThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Transformer_get_RotationThreshold_mA3895DACFC6CF2439039B96F3117B22DAA139F3B (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// get { return rotationThreshold; }
		float L_0 = __this->get_rotationThreshold_7();
		return L_0;
	}
}
// System.Void TouchScript.Behaviors.Transformer::set_RotationThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_set_RotationThreshold_m85242FEE501B2125EB6173414F62F450F098A634 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { rotationThreshold = value; }
		float L_0 = ___value0;
		__this->set_rotationThreshold_7(L_0);
		// set { rotationThreshold = value; }
		return;
	}
}
// System.Single TouchScript.Behaviors.Transformer::get_ScaleThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Transformer_get_ScaleThreshold_mB1C4E2BB3838088E68A69533F21327ECA64F8054 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// get { return Mathf.Sqrt(scaleThreshold); }
		float L_0 = __this->get_scaleThreshold_8();
		float L_1;
		L_1 = sqrtf(L_0);
		return L_1;
	}
}
// System.Void TouchScript.Behaviors.Transformer::set_ScaleThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_set_ScaleThreshold_mC29D7F745C2A18895D82047C57A71345F923071B (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { scaleThreshold = value * value; }
		float L_0 = ___value0;
		float L_1 = ___value0;
		__this->set_scaleThreshold_8(((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)));
		// set { scaleThreshold = value * value; }
		return;
	}
}
// System.Boolean TouchScript.Behaviors.Transformer::get_AllowChangingFromOutside()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transformer_get_AllowChangingFromOutside_mF04A57B5C730D4E69CA83D59FB7E6B04ACB803C1 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// get { return allowChangingFromOutside; }
		bool L_0 = __this->get_allowChangingFromOutside_9();
		return L_0;
	}
}
// System.Void TouchScript.Behaviors.Transformer::set_AllowChangingFromOutside(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_set_AllowChangingFromOutside_m186E4CE8F76BF7BFCD717F87A015280FD7082D4A (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { allowChangingFromOutside = value; }
		bool L_0 = ___value0;
		__this->set_allowChangingFromOutside_9(L_0);
		// set { allowChangingFromOutside = value; }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_Awake_m59E0603143057E512ED5540AB7B30623DD0DE3F5 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// cachedTransform = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set_cachedTransform_12(L_0);
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_OnEnable_m01E2C9B5DF795085AD4037C5292A3D6B42CF7FB9 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813_m12AF12EDFBDD96E618ED51D57010C1180F58B659_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m25E894A925A36601684C7D06070580874F026874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchManager_t8DA7636C0CDED9E9398BABA6237F0D2AEE5D4D1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t74D13726A50EBC46CF7CB927CDD809CD17F25A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transformer_frameFinishedHandler_m3CE7B9EAFF151252DF8A83452DCF44FA758509A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transformer_stateChangedHandler_m73369F7BFBD8D61A57C85E9AFD5A171B68552E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gesture = GetComponent<TransformGestureBase>();
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_0;
		L_0 = Component_GetComponent_TisTransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813_m12AF12EDFBDD96E618ED51D57010C1180F58B659(__this, /*hidden argument*/Component_GetComponent_TisTransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813_m12AF12EDFBDD96E618ED51D57010C1180F58B659_RuntimeMethod_var);
		__this->set_gesture_11(L_0);
		// gesture.StateChanged += stateChangedHandler;
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_1 = __this->get_gesture_11();
		EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 * L_2 = (EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 *)il2cpp_codegen_object_new(EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m25E894A925A36601684C7D06070580874F026874(L_2, __this, (intptr_t)((intptr_t)Transformer_stateChangedHandler_m73369F7BFBD8D61A57C85E9AFD5A171B68552E53_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m25E894A925A36601684C7D06070580874F026874_RuntimeMethod_var);
		Gesture_add_StateChanged_m3B0018E1D7936419AADABC22F8A669980AB165EF(L_1, L_2, /*hidden argument*/NULL);
		// TouchManager.Instance.FrameFinished += frameFinishedHandler;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t74D13726A50EBC46CF7CB927CDD809CD17F25A05_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = TouchManager_get_Instance_mDEE153FA655A86C7A9D11B0C67D1CB453C638A25(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_4, __this, (intptr_t)((intptr_t)Transformer_frameFinishedHandler_m3CE7B9EAFF151252DF8A83452DCF44FA758509A2_RuntimeMethod_var), /*hidden argument*/NULL);
		InterfaceActionInvoker1< EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * >::Invoke(2 /* System.Void TouchScript.ITouchManager::add_FrameFinished(System.EventHandler) */, ITouchManager_t8DA7636C0CDED9E9398BABA6237F0D2AEE5D4D1C_il2cpp_TypeInfo_var, L_3, L_4);
		// stateIdle();
		Transformer_stateIdle_m8F6E2242AB89DD9945CD4D58AA1B3C22236B58B8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_OnDisable_mAF7829BEA399E981BF5654EBF1E92B7E27B09AFF (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m25E894A925A36601684C7D06070580874F026874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchManager_t8DA7636C0CDED9E9398BABA6237F0D2AEE5D4D1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_t74D13726A50EBC46CF7CB927CDD809CD17F25A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transformer_frameFinishedHandler_m3CE7B9EAFF151252DF8A83452DCF44FA758509A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transformer_stateChangedHandler_m73369F7BFBD8D61A57C85E9AFD5A171B68552E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gesture != null) gesture.StateChanged -= stateChangedHandler;
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_0 = __this->get_gesture_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// if (gesture != null) gesture.StateChanged -= stateChangedHandler;
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_2 = __this->get_gesture_11();
		EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 * L_3 = (EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72 *)il2cpp_codegen_object_new(EventHandler_1_tE528B1CB8B4D294FFB473A9327A3A8251B53FC72_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m25E894A925A36601684C7D06070580874F026874(L_3, __this, (intptr_t)((intptr_t)Transformer_stateChangedHandler_m73369F7BFBD8D61A57C85E9AFD5A171B68552E53_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m25E894A925A36601684C7D06070580874F026874_RuntimeMethod_var);
		Gesture_remove_StateChanged_mE7316E417B3CBB9FDEA7D65D8F07FF0DFA8BAA39(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (TouchManager.Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t74D13726A50EBC46CF7CB927CDD809CD17F25A05_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = TouchManager_get_Instance_mDEE153FA655A86C7A9D11B0C67D1CB453C638A25(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// TouchManager.Instance.FrameFinished -= frameFinishedHandler;
		IL2CPP_RUNTIME_CLASS_INIT(TouchManager_t74D13726A50EBC46CF7CB927CDD809CD17F25A05_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = TouchManager_get_Instance_mDEE153FA655A86C7A9D11B0C67D1CB453C638A25(/*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_6 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_6, __this, (intptr_t)((intptr_t)Transformer_frameFinishedHandler_m3CE7B9EAFF151252DF8A83452DCF44FA758509A2_RuntimeMethod_var), /*hidden argument*/NULL);
		InterfaceActionInvoker1< EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * >::Invoke(3 /* System.Void TouchScript.ITouchManager::remove_FrameFinished(System.EventHandler) */, ITouchManager_t8DA7636C0CDED9E9398BABA6237F0D2AEE5D4D1C_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0042:
	{
		// stateIdle();
		Transformer_stateIdle_m8F6E2242AB89DD9945CD4D58AA1B3C22236B58B8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::stateIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_stateIdle_m8F6E2242AB89DD9945CD4D58AA1B3C22236B58B8 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var prevState = state;
		int32_t L_0 = __this->get_state_10();
		V_0 = L_0;
		// setState(TransformerState.Idle);
		Transformer_setState_mAE98D184176F8322D63A3E07D0B542DFB55DEBE3_inline(__this, 0, /*hidden argument*/NULL);
		// if (enableSmoothing && prevState == TransformerState.Automatic)
		bool L_1 = __this->get_enableSmoothing_4();
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_007d;
		}
	}
	{
		// transform.position = lastPosition = targetPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_targetPosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4;
		V_2 = L_5;
		__this->set_lastPosition_17(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_2;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// var newLocalScale = lastScale = targetScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_targetScale_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7;
		V_2 = L_8;
		__this->set_lastScale_18(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		V_1 = L_9;
		// if (newLocalScale != transform.localScale) transform.localScale = newLocalScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_10, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		// if (newLocalScale != transform.localScale) transform.localScale = newLocalScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// transform.rotation = lastRotation = targetRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = __this->get_targetRotation_16();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = L_17;
		V_3 = L_18;
		__this->set_lastRotation_19(L_18);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = V_3;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_19, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// transformMask = TransformGesture.TransformType.None;
		__this->set_transformMask_13(0);
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::stateManual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_stateManual_m1DEC3799D60D19F445FA2D4BA2DE085A5AE1DE4E (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// setState(TransformerState.Manual);
		Transformer_setState_mAE98D184176F8322D63A3E07D0B542DFB55DEBE3_inline(__this, 1, /*hidden argument*/NULL);
		// targetPosition = lastPosition = cachedTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_cachedTransform_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1;
		V_0 = L_2;
		__this->set_lastPosition_17(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		__this->set_targetPosition_14(L_3);
		// targetRotation = lastRotation = cachedTransform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_cachedTransform_12();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = L_5;
		V_1 = L_6;
		__this->set_lastRotation_19(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = V_1;
		__this->set_targetRotation_16(L_7);
		// targetScale = lastScale = cachedTransform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_cachedTransform_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9;
		V_0 = L_10;
		__this->set_lastScale_18(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		__this->set_targetScale_15(L_11);
		// transformMask = TransformGesture.TransformType.None;
		__this->set_transformMask_13(0);
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::stateAutomatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_stateAutomatic_mB8FAE11BBAC89EA30232205DD85960E016241F94 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// setState(TransformerState.Automatic);
		Transformer_setState_mAE98D184176F8322D63A3E07D0B542DFB55DEBE3_inline(__this, 2, /*hidden argument*/NULL);
		// if (!enableSmoothing || transformMask == TransformGesture.TransformType.None) stateIdle();
		bool L_0 = __this->get_enableSmoothing_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_transformMask_13();
		if (L_1)
		{
			goto IL_001d;
		}
	}

IL_0017:
	{
		// if (!enableSmoothing || transformMask == TransformGesture.TransformType.None) stateIdle();
		Transformer_stateIdle_m8F6E2242AB89DD9945CD4D58AA1B3C22236B58B8(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::setState(TouchScript.Behaviors.Transformer/TransformerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_setState_mAE98D184176F8322D63A3E07D0B542DFB55DEBE3 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	{
		// state = newState;
		int32_t L_0 = ___newState0;
		__this->set_state_10(L_0);
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_update_m945597D5F71590639ABBFB91988A6B412BDE844B (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (state == TransformerState.Idle) return;
		int32_t L_0 = __this->get_state_10();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (state == TransformerState.Idle) return;
		return;
	}

IL_0009:
	{
		// if (!enableSmoothing) return;
		bool L_1 = __this->get_enableSmoothing_4();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (!enableSmoothing) return;
		return;
	}

IL_0012:
	{
		// var fraction = 1 - Mathf.Pow(smoothingFactor, Time.unscaledDeltaTime);
		float L_2 = __this->get_smoothingFactor_5();
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		float L_4;
		L_4 = powf(L_2, L_3);
		V_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4));
		// var changed = false;
		V_1 = (bool)0;
		// if ((transformMask & TransformGesture.TransformType.Scaling) != 0)
		int32_t L_5 = __this->get_transformMask_13();
		if (!((int32_t)((int32_t)L_5&(int32_t)4)))
		{
			goto IL_012b;
		}
	}
	{
		// var scale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (allowChangingFromOutside)
		bool L_8 = __this->get_allowChangingFromOutside_9();
		if (!L_8)
		{
			goto IL_00c7;
		}
	}
	{
		// if (!Mathf.Approximately(scale.x, lastScale.x))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		float L_10 = L_9.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_lastScale_18();
		float L_12 = L_11->get_x_2();
		bool L_13;
		L_13 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_10, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0075;
		}
	}
	{
		// targetScale.x = scale.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_targetScale_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_2;
		float L_16 = L_15.get_x_2();
		L_14->set_x_2(L_16);
	}

IL_0075:
	{
		// if (!Mathf.Approximately(scale.y, lastScale.y))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		float L_18 = L_17.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of_lastScale_18();
		float L_20 = L_19->get_y_3();
		bool L_21;
		L_21 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_18, L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_009e;
		}
	}
	{
		// targetScale.y = scale.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_targetScale_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		float L_24 = L_23.get_y_3();
		L_22->set_y_3(L_24);
	}

IL_009e:
	{
		// if (!Mathf.Approximately(scale.z, lastScale.z))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_2;
		float L_26 = L_25.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_lastScale_18();
		float L_28 = L_27->get_z_4();
		bool L_29;
		L_29 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_26, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00c7;
		}
	}
	{
		// targetScale.z = scale.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_targetScale_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_2;
		float L_32 = L_31.get_z_4();
		L_30->set_z_4(L_32);
	}

IL_00c7:
	{
		// var newLocalScale = Vector3.Lerp(scale, targetScale, fraction);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_targetScale_15();
		float L_35 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_33, L_34, L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		// if (newLocalScale != scale)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
		bool L_39;
		L_39 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00fb;
		}
	}
	{
		// transform.localScale = newLocalScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_3;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_40, L_41, /*hidden argument*/NULL);
		// lastScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_42, /*hidden argument*/NULL);
		__this->set_lastScale_18(L_43);
	}

IL_00fb:
	{
		// if (state == TransformerState.Automatic && !changed && (targetScale - lastScale).sqrMagnitude > scaleThreshold) changed = true;
		int32_t L_44 = __this->get_state_10();
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_012b;
		}
	}
	{
		bool L_45 = V_1;
		if (L_45)
		{
			goto IL_012b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = __this->get_targetScale_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = __this->get_lastScale_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_46, L_47, /*hidden argument*/NULL);
		V_4 = L_48;
		float L_49;
		L_49 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_50 = __this->get_scaleThreshold_8();
		if ((!(((float)L_49) > ((float)L_50))))
		{
			goto IL_012b;
		}
	}
	{
		// if (state == TransformerState.Automatic && !changed && (targetScale - lastScale).sqrMagnitude > scaleThreshold) changed = true;
		V_1 = (bool)1;
	}

IL_012b:
	{
		// if ((transformMask & TransformGesture.TransformType.Rotation) != 0)
		int32_t L_51 = __this->get_transformMask_13();
		if (!((int32_t)((int32_t)L_51&(int32_t)2)))
		{
			goto IL_01c3;
		}
	}
	{
		// if (allowChangingFromOutside)
		bool L_52 = __this->get_allowChangingFromOutside_9();
		if (!L_52)
		{
			goto IL_0169;
		}
	}
	{
		// if (transform.rotation != lastRotation) targetRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54;
		L_54 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_53, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55 = __this->get_lastRotation_19();
		bool L_56;
		L_56 = Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439(L_54, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0169;
		}
	}
	{
		// if (transform.rotation != lastRotation) targetRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_58;
		L_58 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_57, /*hidden argument*/NULL);
		__this->set_targetRotation_16(L_58);
	}

IL_0169:
	{
		// transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, fraction);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_61;
		L_61 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_60, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62 = __this->get_targetRotation_16();
		float L_63 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_64;
		L_64 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_61, L_62, L_63, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_59, L_64, /*hidden argument*/NULL);
		// lastRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_66;
		L_66 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_65, /*hidden argument*/NULL);
		__this->set_lastRotation_19(L_66);
		// if (state == TransformerState.Automatic && !changed && Quaternion.Angle(targetRotation, lastRotation) > rotationThreshold) changed = true;
		int32_t L_67 = __this->get_state_10();
		if ((!(((uint32_t)L_67) == ((uint32_t)2))))
		{
			goto IL_01c3;
		}
	}
	{
		bool L_68 = V_1;
		if (L_68)
		{
			goto IL_01c3;
		}
	}
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_69 = __this->get_targetRotation_16();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_70 = __this->get_lastRotation_19();
		float L_71;
		L_71 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_69, L_70, /*hidden argument*/NULL);
		float L_72 = __this->get_rotationThreshold_7();
		if ((!(((float)L_71) > ((float)L_72))))
		{
			goto IL_01c3;
		}
	}
	{
		// if (state == TransformerState.Automatic && !changed && Quaternion.Angle(targetRotation, lastRotation) > rotationThreshold) changed = true;
		V_1 = (bool)1;
	}

IL_01c3:
	{
		// if ((transformMask & TransformGesture.TransformType.Translation) != 0)
		int32_t L_73 = __this->get_transformMask_13();
		if (!((int32_t)((int32_t)L_73&(int32_t)1)))
		{
			goto IL_02c3;
		}
	}
	{
		// var pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_74, /*hidden argument*/NULL);
		V_5 = L_75;
		// if (allowChangingFromOutside)
		bool L_76 = __this->get_allowChangingFromOutside_9();
		if (!L_76)
		{
			goto IL_0269;
		}
	}
	{
		// if (!Mathf.Approximately(pos.x, lastPosition.x))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = V_5;
		float L_78 = L_77.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_79 = __this->get_address_of_lastPosition_17();
		float L_80 = L_79->get_x_2();
		bool L_81;
		L_81 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_78, L_80, /*hidden argument*/NULL);
		if (L_81)
		{
			goto IL_0213;
		}
	}
	{
		// targetPosition.x = pos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_82 = __this->get_address_of_targetPosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = V_5;
		float L_84 = L_83.get_x_2();
		L_82->set_x_2(L_84);
	}

IL_0213:
	{
		// if (!Mathf.Approximately(pos.y, lastPosition.y))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85 = V_5;
		float L_86 = L_85.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_87 = __this->get_address_of_lastPosition_17();
		float L_88 = L_87->get_y_3();
		bool L_89;
		L_89 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_86, L_88, /*hidden argument*/NULL);
		if (L_89)
		{
			goto IL_023e;
		}
	}
	{
		// targetPosition.y = pos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_90 = __this->get_address_of_targetPosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = V_5;
		float L_92 = L_91.get_y_3();
		L_90->set_y_3(L_92);
	}

IL_023e:
	{
		// if (!Mathf.Approximately(pos.z, lastPosition.z))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = V_5;
		float L_94 = L_93.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_95 = __this->get_address_of_lastPosition_17();
		float L_96 = L_95->get_z_4();
		bool L_97;
		L_97 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_94, L_96, /*hidden argument*/NULL);
		if (L_97)
		{
			goto IL_0269;
		}
	}
	{
		// targetPosition.z = pos.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_98 = __this->get_address_of_targetPosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99 = V_5;
		float L_100 = L_99.get_z_4();
		L_98->set_z_4(L_100);
	}

IL_0269:
	{
		// transform.position = Vector3.Lerp(pos, targetPosition, fraction);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
		L_101 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103 = __this->get_targetPosition_14();
		float L_104 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
		L_105 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_102, L_103, L_104, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_101, L_105, /*hidden argument*/NULL);
		// lastPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_106;
		L_106 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_106, /*hidden argument*/NULL);
		__this->set_lastPosition_17(L_107);
		// if (state == TransformerState.Automatic && !changed && (targetPosition - lastPosition).sqrMagnitude > positionThreshold) changed = true;
		int32_t L_108 = __this->get_state_10();
		if ((!(((uint32_t)L_108) == ((uint32_t)2))))
		{
			goto IL_02c3;
		}
	}
	{
		bool L_109 = V_1;
		if (L_109)
		{
			goto IL_02c3;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110 = __this->get_targetPosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = __this->get_lastPosition_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112;
		L_112 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_110, L_111, /*hidden argument*/NULL);
		V_4 = L_112;
		float L_113;
		L_113 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_114 = __this->get_positionThreshold_6();
		if ((!(((float)L_113) > ((float)L_114))))
		{
			goto IL_02c3;
		}
	}
	{
		// if (state == TransformerState.Automatic && !changed && (targetPosition - lastPosition).sqrMagnitude > positionThreshold) changed = true;
		V_1 = (bool)1;
	}

IL_02c3:
	{
		// if (state == TransformerState.Automatic && !changed) stateIdle();
		int32_t L_115 = __this->get_state_10();
		if ((!(((uint32_t)L_115) == ((uint32_t)2))))
		{
			goto IL_02d5;
		}
	}
	{
		bool L_116 = V_1;
		if (L_116)
		{
			goto IL_02d5;
		}
	}
	{
		// if (state == TransformerState.Automatic && !changed) stateIdle();
		Transformer_stateIdle_m8F6E2242AB89DD9945CD4D58AA1B3C22236B58B8(__this, /*hidden argument*/NULL);
	}

IL_02d5:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::manualUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_manualUpdate_mAEAE77FE46B49D19DF20A63E7EC18BB6D57FFBE9 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (state != TransformerState.Manual) stateManual();
		int32_t L_0 = __this->get_state_10();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		// if (state != TransformerState.Manual) stateManual();
		Transformer_stateManual_m1DEC3799D60D19F445FA2D4BA2DE085A5AE1DE4E(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// var mask = gesture.TransformMask;
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_1 = __this->get_gesture_11();
		int32_t L_2;
		L_2 = TransformGestureBase_get_TransformMask_m0A4820044580E026617CF37DFE1441F4EEF69153_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if ((mask & TransformGesture.TransformType.Scaling) != 0) targetScale *= gesture.DeltaScale;
		int32_t L_3 = V_0;
		if (!((int32_t)((int32_t)L_3&(int32_t)4)))
		{
			goto IL_003c;
		}
	}
	{
		// if ((mask & TransformGesture.TransformType.Scaling) != 0) targetScale *= gesture.DeltaScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_targetScale_15();
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_5 = __this->get_gesture_11();
		float L_6;
		L_6 = TransformGestureBase_get_DeltaScale_m74220090BFD11D010E6ABF1ACBA24B2F6B303080_inline(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_6, /*hidden argument*/NULL);
		__this->set_targetScale_15(L_7);
	}

IL_003c:
	{
		// if ((mask & TransformGesture.TransformType.Rotation) != 0)
		int32_t L_8 = V_0;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_006d;
		}
	}
	{
		// targetRotation = Quaternion.AngleAxis(gesture.DeltaRotation, gesture.RotationAxis) * targetRotation;
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_9 = __this->get_gesture_11();
		float L_10;
		L_10 = TransformGestureBase_get_DeltaRotation_mDD8BD4073EC667C1CBDF9D6C48796731B7501C9A_inline(L_9, /*hidden argument*/NULL);
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_11 = __this->get_gesture_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = TransformGestureBase_get_RotationAxis_m02512396E34D1C189B179847020EE9DC88F3D3C8_inline(L_11, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_10, L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = __this->get_targetRotation_16();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_13, L_14, /*hidden argument*/NULL);
		__this->set_targetRotation_16(L_15);
	}

IL_006d:
	{
		// if ((mask & TransformGesture.TransformType.Translation) != 0) targetPosition += gesture.DeltaPosition;
		int32_t L_16 = V_0;
		if (!((int32_t)((int32_t)L_16&(int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		// if ((mask & TransformGesture.TransformType.Translation) != 0) targetPosition += gesture.DeltaPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_targetPosition_14();
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_18 = __this->get_gesture_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = TransformGestureBase_get_DeltaPosition_m0F5B048117EC12115F346566505E421499284639_inline(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_19, /*hidden argument*/NULL);
		__this->set_targetPosition_14(L_20);
	}

IL_008e:
	{
		// transformMask |= mask;
		int32_t L_21 = __this->get_transformMask_13();
		int32_t L_22 = V_0;
		__this->set_transformMask_13(((int32_t)((int32_t)L_21|(int32_t)L_22)));
		// gesture.OverrideTargetPosition(targetPosition);
		TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * L_23 = __this->get_gesture_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = __this->get_targetPosition_14();
		TransformGestureBase_OverrideTargetPosition_mAB01384950D727842CF5BF24D023B9280BEC45C0(L_23, L_24, /*hidden argument*/NULL);
		// if (!enableSmoothing) applyValues();
		bool L_25 = __this->get_enableSmoothing_4();
		if (L_25)
		{
			goto IL_00bb;
		}
	}
	{
		// if (!enableSmoothing) applyValues();
		Transformer_applyValues_m69FA85A0704CC0689CBF4C7C3D691A0D23D254A6(__this, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::applyValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_applyValues_m69FA85A0704CC0689CBF4C7C3D691A0D23D254A6 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// if ((transformMask & TransformGesture.TransformType.Scaling) != 0) cachedTransform.localScale = targetScale;
		int32_t L_0 = __this->get_transformMask_13();
		if (!((int32_t)((int32_t)L_0&(int32_t)4)))
		{
			goto IL_001b;
		}
	}
	{
		// if ((transformMask & TransformGesture.TransformType.Scaling) != 0) cachedTransform.localScale = targetScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_cachedTransform_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_targetScale_15();
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// if ((transformMask & TransformGesture.TransformType.Rotation) != 0) cachedTransform.rotation = targetRotation;
		int32_t L_3 = __this->get_transformMask_13();
		if (!((int32_t)((int32_t)L_3&(int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		// if ((transformMask & TransformGesture.TransformType.Rotation) != 0) cachedTransform.rotation = targetRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_cachedTransform_12();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = __this->get_targetRotation_16();
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// if ((transformMask & TransformGesture.TransformType.Translation) != 0) cachedTransform.position = targetPosition;
		int32_t L_6 = __this->get_transformMask_13();
		if (!((int32_t)((int32_t)L_6&(int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		// if ((transformMask & TransformGesture.TransformType.Translation) != 0) cachedTransform.position = targetPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_cachedTransform_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_targetPosition_14();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// transformMask = TransformGesture.TransformType.None;
		__this->set_transformMask_13(0);
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::stateChangedHandler(System.Object,TouchScript.Gestures.GestureStateChangeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_stateChangedHandler_m73369F7BFBD8D61A57C85E9AFD5A171B68552E53 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, RuntimeObject * ___sender0, GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * ___gestureStateChangeEventArgs1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (gestureStateChangeEventArgs.State)
		GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * L_0 = ___gestureStateChangeEventArgs1;
		int32_t L_1;
		L_1 = GestureStateChangeEventArgs_get_State_m34F507EFBB2EA79E6EE0B639D9FB8EF0BEFB1F3B_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_0031;
			}
			case 4:
			{
				goto IL_0038;
			}
			case 5:
			{
				goto IL_0038;
			}
			case 6:
			{
				goto IL_003f;
			}
		}
	}
	{
		return;
	}

IL_002a:
	{
		// stateManual();
		Transformer_stateManual_m1DEC3799D60D19F445FA2D4BA2DE085A5AE1DE4E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0031:
	{
		// manualUpdate();
		Transformer_manualUpdate_mAEAE77FE46B49D19DF20A63E7EC18BB6D57FFBE9(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0038:
	{
		// stateAutomatic();
		Transformer_stateAutomatic_mB8FAE11BBAC89EA30232205DD85960E016241F94(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003f:
	{
		// if (gestureStateChangeEventArgs.PreviousState == Gesture.GestureState.Possible) stateAutomatic();
		GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * L_3 = ___gestureStateChangeEventArgs1;
		int32_t L_4;
		L_4 = GestureStateChangeEventArgs_get_PreviousState_m46B298BB680F621F87D99779987C97EA209EB718_inline(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		// if (gestureStateChangeEventArgs.PreviousState == Gesture.GestureState.Possible) stateAutomatic();
		Transformer_stateAutomatic_mB8FAE11BBAC89EA30232205DD85960E016241F94(__this, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::frameFinishedHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer_frameFinishedHandler_m3CE7B9EAFF151252DF8A83452DCF44FA758509A2 (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___eventArgs1, const RuntimeMethod* method)
{
	{
		// update();
		Transformer_update_m945597D5F71590639ABBFB91988A6B412BDE844B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Behaviors.Transformer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transformer__ctor_mA68091FE591B48509C8F3ACC526244DA0C42AF3E (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, const RuntimeMethod* method)
{
	{
		// private float smoothingFactor = 1f / 100000f;
		__this->set_smoothingFactor_5((9.99999975E-06f));
		// private float positionThreshold = 0.01f;
		__this->set_positionThreshold_6((0.00999999978f));
		// private float rotationThreshold = 0.1f;
		__this->set_rotationThreshold_7((0.100000001f));
		// private float scaleThreshold = 0.01f;
		__this->set_scaleThreshold_8((0.00999999978f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single TouchScript.Utils.Geom.TwoD::PointToLineDistance(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TwoD_PointToLineDistance_mB8ABC912C96D4E94F8A51A93F56C15A394024B6D (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lineStart0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lineEnd1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var dx = lineEnd.x - lineStart.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lineEnd1;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___lineStart0;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		// var dy = lineEnd.y - lineStart.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lineEnd1;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___lineStart0;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		// return (dy * point.x - dx * point.y + lineEnd.x * lineStart.y - lineEnd.y * lineStart.x) / Mathf.Sqrt(dx * dx + dy * dy);
		float L_8 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___point2;
		float L_10 = L_9.get_x_0();
		float L_11 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = ___point2;
		float L_13 = L_12.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___lineEnd1;
		float L_15 = L_14.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___lineStart0;
		float L_17 = L_16.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = ___lineEnd1;
		float L_19 = L_18.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = ___lineStart0;
		float L_21 = L_20.get_x_0();
		float L_22 = V_0;
		float L_23 = V_0;
		float L_24 = V_1;
		float L_25 = V_1;
		float L_26;
		L_26 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)), (float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)))));
		return ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_10)), (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)))), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_17)))), (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_21))))/(float)L_26));
	}
}
// System.Void TouchScript.Utils.Geom.TwoD::PointToLineDistance2(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoD_PointToLineDistance2_mF9F1AA939C59ECAC379D5F430E985B4796FB587C (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lineStart0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lineEnd1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point12, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point23, float* ___dist14, float* ___dist25, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// var dx = lineEnd.x - lineStart.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lineEnd1;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___lineStart0;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		// var dy = lineEnd.y - lineStart.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lineEnd1;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___lineStart0;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		// var c = lineEnd.x * lineStart.y - lineEnd.y * lineStart.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___lineEnd1;
		float L_9 = L_8.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = ___lineStart0;
		float L_11 = L_10.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = ___lineEnd1;
		float L_13 = L_12.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___lineStart0;
		float L_15 = L_14.get_x_0();
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_15))));
		// var length = Mathf.Sqrt(dx * dx + dy * dy);
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20;
		L_20 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))));
		V_3 = L_20;
		// dist1 = (dy * point1.x - dx * point1.y + c) / length;
		float* L_21 = ___dist14;
		float L_22 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = ___point12;
		float L_24 = L_23.get_x_0();
		float L_25 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = ___point12;
		float L_27 = L_26.get_y_1();
		float L_28 = V_2;
		float L_29 = V_3;
		*((float*)L_21) = (float)((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_24)), (float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_27)))), (float)L_28))/(float)L_29));
		// dist2 = (dy * point2.x - dx * point2.y + c) / length;
		float* L_30 = ___dist25;
		float L_31 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = ___point23;
		float L_33 = L_32.get_x_0();
		float L_34 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = ___point23;
		float L_36 = L_35.get_y_1();
		float L_37 = V_2;
		float L_38 = V_3;
		*((float*)L_30) = (float)((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_33)), (float)((float)il2cpp_codegen_multiply((float)L_34, (float)L_36)))), (float)L_37))/(float)L_38));
		// }
		return;
	}
}
// UnityEngine.Vector2 TouchScript.Utils.Geom.TwoD::Rotate(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TwoD_Rotate_m269A974BB94DFF38B4B86DD0077958D4323794B1 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___angle1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var rad = angle * Mathf.Deg2Rad;
		float L_0 = ___angle1;
		// var cos = Mathf.Cos(rad);
		float L_1 = ((float)il2cpp_codegen_multiply((float)L_0, (float)(0.0174532924f)));
		float L_2;
		L_2 = cosf(L_1);
		V_0 = L_2;
		// var sin = Mathf.Sin(rad);
		float L_3;
		L_3 = sinf(L_1);
		V_1 = L_3;
		// return new Vector2(point.x * cos - point.y * sin, point.x * sin + point.y * cos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___point0;
		float L_5 = L_4.get_x_0();
		float L_6 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___point0;
		float L_8 = L_7.get_y_1();
		float L_9 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = ___point0;
		float L_11 = L_10.get_x_0();
		float L_12 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___point0;
		float L_14 = L_13.get_y_1();
		float L_15 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)))), /*hidden argument*/NULL);
		return L_16;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::get_MinScreenPointsDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TwoPointTransformGestureBase_get_MinScreenPointsDistance_m38CD557F43CDBB4E5DA4266930F97759D2B69F50 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, const RuntimeMethod* method)
{
	{
		// get { return minScreenPointsDistance; }
		float L_0 = __this->get_minScreenPointsDistance_65();
		return L_0;
	}
}
// System.Void TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::set_MinScreenPointsDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoPointTransformGestureBase_set_MinScreenPointsDistance_m8B08CC9C991413D06527628A44877B5C341C1E94 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// minScreenPointsDistance = value;
		float L_0 = ___value0;
		__this->set_minScreenPointsDistance_65(L_0);
		// updateMinScreenPointsDistance();
		TwoPointTransformGestureBase_updateMinScreenPointsDistance_mD973DE3861F0E21BC27A38EC12A17DD87F5E71C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoPointTransformGestureBase_OnEnable_m8D868F3F65712F2EFD3AF34547872F6FEE30B74B (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, const RuntimeMethod* method)
{
	{
		// base.OnEnable();
		TransformGestureBase_OnEnable_m785D31F544FB529F5A551C1DB22E1567D1370CC9(__this, /*hidden argument*/NULL);
		// updateMinScreenPointsDistance();
		TwoPointTransformGestureBase_updateMinScreenPointsDistance_mD973DE3861F0E21BC27A38EC12A17DD87F5E71C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::pointersUpdated(System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoPointTransformGestureBase_pointersUpdated_m8655CB6F3BA237430C48082113233AD6FEA2CBFF (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, RuntimeObject* ___pointers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_13;
	memset((&V_13), 0, sizeof(V_13));
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	{
		// base.pointersUpdated(pointers);
		RuntimeObject* L_0 = ___pointers0;
		Gesture_pointersUpdated_mDB672DA3AFDA4EF22CDF64636CBE523FF315CDB3(__this, L_0, /*hidden argument*/NULL);
		// var projectionParams = activePointers[0].ProjectionParams;
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_1 = ((Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 *)__this)->get_activePointers_13();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_2;
		L_2 = List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_inline(L_1, 0, /*hidden argument*/List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * L_3;
		L_3 = Pointer_get_ProjectionParams_m3CA51C3A4B427362732A5EDAC567DA3455694282(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var dP = deltaPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4;
		V_7 = L_5;
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_deltaPosition_49(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_7;
		V_1 = L_6;
		// var dR = deltaRotation = 0;
		float L_7 = (0.0f);
		V_8 = L_7;
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_deltaRotation_50(L_7);
		float L_8 = V_8;
		V_2 = L_8;
		// var dS = deltaScale = 1f;
		float L_9 = (1.0f);
		V_8 = L_9;
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_deltaScale_51(L_9);
		float L_10 = V_8;
		V_3 = L_10;
		// if (pointersNumState != PointersNumState.InRange) return;
		int32_t L_11;
		L_11 = Gesture_get_pointersNumState_mCF5797DA98213A7E94B170524C4D1A14FAAC9278_inline(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// if (pointersNumState != PointersNumState.InRange) return;
		return;
	}

IL_0055:
	{
		// var translationEnabled = (Type & TransformGesture.TransformType.Translation) == TransformGesture.TransformType.Translation;
		int32_t L_12;
		L_12 = TransformGestureBase_get_Type_m93AA1A91375B88929A905699AAF947D66BFA4FF5_inline(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		// var rotationEnabled = (Type & TransformGesture.TransformType.Rotation) == TransformGesture.TransformType.Rotation;
		int32_t L_13;
		L_13 = TransformGestureBase_get_Type_m93AA1A91375B88929A905699AAF947D66BFA4FF5_inline(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((int32_t)((int32_t)L_13&(int32_t)2))) == ((int32_t)2))? 1 : 0);
		// var scalingEnabled = (Type & TransformGesture.TransformType.Scaling) == TransformGesture.TransformType.Scaling;
		int32_t L_14;
		L_14 = TransformGestureBase_get_Type_m93AA1A91375B88929A905699AAF947D66BFA4FF5_inline(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((int32_t)((int32_t)L_14&(int32_t)4))) == ((int32_t)4))? 1 : 0);
		// if (getNumPoints() == 1 || (!rotationEnabled && !scalingEnabled))
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(51 /* System.Int32 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getNumPoints() */, __this);
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_00b7;
		}
	}

IL_008d:
	{
		// if (!translationEnabled) return; // don't look for translates
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_0092;
		}
	}
	{
		// if (!translationEnabled) return; // don't look for translates
		return;
	}

IL_0092:
	{
		// if (!relevantPointers1(pointers)) return;
		RuntimeObject* L_19 = ___pointers0;
		bool L_20;
		L_20 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(52 /* System.Boolean TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::relevantPointers1(System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>) */, __this, L_19);
		if (L_20)
		{
			goto IL_009c;
		}
	}
	{
		// if (!relevantPointers1(pointers)) return;
		return;
	}

IL_009c:
	{
		// dP = doOnePointTranslation(getPointPreviousScreenPosition(0), getPointScreenPosition(0), projectionParams);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = VirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , int32_t >::Invoke(55 /* UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getPointPreviousScreenPosition(System.Int32) */, __this, 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = VirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , int32_t >::Invoke(54 /* UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getPointScreenPosition(System.Int32) */, __this, 0);
		ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * L_23 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = VirtFuncInvoker3< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * >::Invoke(49 /* UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doOnePointTranslation(UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams) */, __this, L_21, L_22, L_23);
		V_1 = L_24;
		// }
		goto IL_0259;
	}

IL_00b7:
	{
		// if (!relevantPointers2(pointers)) return;
		RuntimeObject* L_25 = ___pointers0;
		bool L_26;
		L_26 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(53 /* System.Boolean TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::relevantPointers2(System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>) */, __this, L_25);
		if (L_26)
		{
			goto IL_00c1;
		}
	}
	{
		// if (!relevantPointers2(pointers)) return;
		return;
	}

IL_00c1:
	{
		// var newScreenPos1 = getPointScreenPosition(0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = VirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , int32_t >::Invoke(54 /* UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getPointScreenPosition(System.Int32) */, __this, 0);
		V_9 = L_27;
		// var newScreenPos2 = getPointScreenPosition(1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = VirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , int32_t >::Invoke(54 /* UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getPointScreenPosition(System.Int32) */, __this, 1);
		V_10 = L_28;
		// var oldScreenPos1 = getPointPreviousScreenPosition(0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = VirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , int32_t >::Invoke(55 /* UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getPointPreviousScreenPosition(System.Int32) */, __this, 0);
		V_11 = L_29;
		// var oldScreenPos2 = getPointPreviousScreenPosition(1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = VirtFuncInvoker1< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , int32_t >::Invoke(55 /* UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getPointPreviousScreenPosition(System.Int32) */, __this, 1);
		V_12 = L_30;
		// var newScreenDelta = newScreenPos2 - newScreenPos1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_31, L_32, /*hidden argument*/NULL);
		V_13 = L_33;
		// if (newScreenDelta.sqrMagnitude > minScreenPointsPixelDistanceSquared)
		float L_34;
		L_34 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_13), /*hidden argument*/NULL);
		float L_35 = __this->get_minScreenPointsPixelDistanceSquared_59();
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_0249;
		}
	}
	{
		// if (rotationEnabled)
		bool L_36 = V_5;
		if (!L_36)
		{
			goto IL_0182;
		}
	}
	{
		// if (isTransforming)
		bool L_37 = ((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->get_isTransforming_53();
		if (!L_37)
		{
			goto IL_0120;
		}
	}
	{
		// dR = doRotation(oldScreenPos1, oldScreenPos2, newScreenPos1, newScreenPos2, projectionParams);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = V_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_10;
		ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * L_42 = V_0;
		float L_43;
		L_43 = VirtFuncInvoker5< float, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * >::Invoke(47 /* System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doRotation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams) */, __this, L_38, L_39, L_40, L_41, L_42);
		V_2 = L_43;
		// }
		goto IL_0182;
	}

IL_0120:
	{
		// TwoD.PointToLineDistance2(oldScreenPos1, oldScreenPos2, newScreenPos1, newScreenPos2,
		//     out d1, out d2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = V_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = V_10;
		TwoD_PointToLineDistance2_mF9F1AA939C59ECAC379D5F430E985B4796FB587C(L_44, L_45, L_46, L_47, (float*)(&V_14), (float*)(&V_15), /*hidden argument*/NULL);
		// screenPixelRotationBuffer += (d1 - d2);
		float L_48 = __this->get_screenPixelRotationBuffer_61();
		float L_49 = V_14;
		float L_50 = V_15;
		__this->set_screenPixelRotationBuffer_61(((float)il2cpp_codegen_add((float)L_48, (float)((float)il2cpp_codegen_subtract((float)L_49, (float)L_50)))));
		// angleBuffer += doRotation(oldScreenPos1, oldScreenPos2, newScreenPos1, newScreenPos2, projectionParams);
		float L_51 = __this->get_angleBuffer_62();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53 = V_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55 = V_10;
		ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * L_56 = V_0;
		float L_57;
		L_57 = VirtFuncInvoker5< float, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * >::Invoke(47 /* System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doRotation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams) */, __this, L_52, L_53, L_54, L_55, L_56);
		__this->set_angleBuffer_62(((float)il2cpp_codegen_add((float)L_51, (float)L_57)));
		// if (screenPixelRotationBuffer * screenPixelRotationBuffer >=
		//     screenTransformPixelThresholdSquared)
		float L_58 = __this->get_screenPixelRotationBuffer_61();
		float L_59 = __this->get_screenPixelRotationBuffer_61();
		float L_60 = ((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->get_screenTransformPixelThresholdSquared_47();
		if ((!(((float)((float)il2cpp_codegen_multiply((float)L_58, (float)L_59))) >= ((float)L_60))))
		{
			goto IL_0182;
		}
	}
	{
		// isTransforming = true;
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_isTransforming_53((bool)1);
		// dR = angleBuffer;
		float L_61 = __this->get_angleBuffer_62();
		V_2 = L_61;
	}

IL_0182:
	{
		// if (scalingEnabled)
		bool L_62 = V_6;
		if (!L_62)
		{
			goto IL_0213;
		}
	}
	{
		// if (isTransforming)
		bool L_63 = ((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->get_isTransforming_53();
		if (!L_63)
		{
			goto IL_01a5;
		}
	}
	{
		// dS *= doScaling(oldScreenPos1, oldScreenPos2, newScreenPos1, newScreenPos2, projectionParams);
		float L_64 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66 = V_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68 = V_10;
		ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * L_69 = V_0;
		float L_70;
		L_70 = VirtFuncInvoker5< float, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * >::Invoke(48 /* System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doScaling(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams) */, __this, L_65, L_66, L_67, L_68, L_69);
		V_3 = ((float)il2cpp_codegen_multiply((float)L_64, (float)L_70));
		// }
		goto IL_0213;
	}

IL_01a5:
	{
		// var oldScreenDelta = oldScreenPos2 - oldScreenPos1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71 = V_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73;
		L_73 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_71, L_72, /*hidden argument*/NULL);
		V_16 = L_73;
		// var newDistance = newScreenDelta.magnitude;
		float L_74;
		L_74 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_13), /*hidden argument*/NULL);
		V_17 = L_74;
		// var oldDistance = oldScreenDelta.magnitude;
		float L_75;
		L_75 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_16), /*hidden argument*/NULL);
		V_18 = L_75;
		// screenPixelScalingBuffer += newDistance - oldDistance;
		float L_76 = __this->get_screenPixelScalingBuffer_63();
		float L_77 = V_17;
		float L_78 = V_18;
		__this->set_screenPixelScalingBuffer_63(((float)il2cpp_codegen_add((float)L_76, (float)((float)il2cpp_codegen_subtract((float)L_77, (float)L_78)))));
		// scaleBuffer *= doScaling(oldScreenPos1, oldScreenPos2, newScreenPos1, newScreenPos2, projectionParams);
		float L_79 = __this->get_scaleBuffer_64();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_81 = V_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_82 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83 = V_10;
		ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * L_84 = V_0;
		float L_85;
		L_85 = VirtFuncInvoker5< float, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * >::Invoke(48 /* System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doScaling(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams) */, __this, L_80, L_81, L_82, L_83, L_84);
		__this->set_scaleBuffer_64(((float)il2cpp_codegen_multiply((float)L_79, (float)L_85)));
		// if (screenPixelScalingBuffer * screenPixelScalingBuffer >=
		//     screenTransformPixelThresholdSquared)
		float L_86 = __this->get_screenPixelScalingBuffer_63();
		float L_87 = __this->get_screenPixelScalingBuffer_63();
		float L_88 = ((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->get_screenTransformPixelThresholdSquared_47();
		if ((!(((float)((float)il2cpp_codegen_multiply((float)L_86, (float)L_87))) >= ((float)L_88))))
		{
			goto IL_0213;
		}
	}
	{
		// isTransforming = true;
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_isTransforming_53((bool)1);
		// dS = scaleBuffer;
		float L_89 = __this->get_scaleBuffer_64();
		V_3 = L_89;
	}

IL_0213:
	{
		// if (translationEnabled)
		bool L_90 = V_4;
		if (!L_90)
		{
			goto IL_0259;
		}
	}
	{
		// if (dR == 0 && dS == 1) dP = doOnePointTranslation(oldScreenPos1, newScreenPos1, projectionParams);
		float L_91 = V_2;
		if ((!(((float)L_91) == ((float)(0.0f)))))
		{
			goto IL_0235;
		}
	}
	{
		float L_92 = V_3;
		if ((!(((float)L_92) == ((float)(1.0f)))))
		{
			goto IL_0235;
		}
	}
	{
		// if (dR == 0 && dS == 1) dP = doOnePointTranslation(oldScreenPos1, newScreenPos1, projectionParams);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_93 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_94 = V_9;
		ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * L_95 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = VirtFuncInvoker3< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * >::Invoke(49 /* UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doOnePointTranslation(UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams) */, __this, L_93, L_94, L_95);
		V_1 = L_96;
		goto IL_0259;
	}

IL_0235:
	{
		// dP = doTwoPointTranslation(oldScreenPos1, oldScreenPos2, newScreenPos1, newScreenPos2, dR, dS, projectionParams);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_97 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_98 = V_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_99 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_100 = V_10;
		float L_101 = V_2;
		float L_102 = V_3;
		ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * L_103 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		L_104 = VirtFuncInvoker7< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , float, float, ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * >::Invoke(50 /* UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doTwoPointTranslation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single,TouchScript.Layers.ProjectionParams) */, __this, L_97, L_98, L_99, L_100, L_101, L_102, L_103);
		V_1 = L_104;
		// }
		goto IL_0259;
	}

IL_0249:
	{
		// else if (translationEnabled)
		bool L_105 = V_4;
		if (!L_105)
		{
			goto IL_0259;
		}
	}
	{
		// dP = doOnePointTranslation(oldScreenPos1, newScreenPos1, projectionParams);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_106 = V_11;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_107 = V_9;
		ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * L_108 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = VirtFuncInvoker3< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * >::Invoke(49 /* UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doOnePointTranslation(UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams) */, __this, L_106, L_107, L_108);
		V_1 = L_109;
	}

IL_0259:
	{
		// if (dP != Vector3.zero) transformMask |= TransformGesture.TransformType.Translation;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
		L_111 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_112;
		L_112 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_110, L_111, /*hidden argument*/NULL);
		if (!L_112)
		{
			goto IL_0274;
		}
	}
	{
		// if (dP != Vector3.zero) transformMask |= TransformGesture.TransformType.Translation;
		int32_t L_113 = ((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->get_transformMask_48();
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_transformMask_48(((int32_t)((int32_t)L_113|(int32_t)1)));
	}

IL_0274:
	{
		// if (dR != 0) transformMask |= TransformGesture.TransformType.Rotation;
		float L_114 = V_2;
		if ((((float)L_114) == ((float)(0.0f))))
		{
			goto IL_028a;
		}
	}
	{
		// if (dR != 0) transformMask |= TransformGesture.TransformType.Rotation;
		int32_t L_115 = ((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->get_transformMask_48();
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_transformMask_48(((int32_t)((int32_t)L_115|(int32_t)2)));
	}

IL_028a:
	{
		// if (dS != 1) transformMask |= TransformGesture.TransformType.Scaling;
		float L_116 = V_3;
		if ((((float)L_116) == ((float)(1.0f))))
		{
			goto IL_02a0;
		}
	}
	{
		// if (dS != 1) transformMask |= TransformGesture.TransformType.Scaling;
		int32_t L_117 = ((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->get_transformMask_48();
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_transformMask_48(((int32_t)((int32_t)L_117|(int32_t)4)));
	}

IL_02a0:
	{
		// if (transformMask != 0)
		int32_t L_118 = ((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->get_transformMask_48();
		if (!L_118)
		{
			goto IL_02eb;
		}
	}
	{
		// if (State == GestureState.Possible) setState(GestureState.Began);
		int32_t L_119;
		L_119 = Gesture_get_State_mE078CD64034A0A21C076C3B703BEC2920FBC5090_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_119) == ((uint32_t)1))))
		{
			goto IL_02b9;
		}
	}
	{
		// if (State == GestureState.Possible) setState(GestureState.Began);
		bool L_120;
		L_120 = Gesture_setState_m39529F73B75151D1F9D9B8404A49A9BCDFC77F3F(__this, 2, /*hidden argument*/NULL);
	}

IL_02b9:
	{
		// switch (State)
		int32_t L_121;
		L_121 = Gesture_get_State_mE078CD64034A0A21C076C3B703BEC2920FBC5090_inline(__this, /*hidden argument*/NULL);
		V_19 = L_121;
		int32_t L_122 = V_19;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_122, (int32_t)2))) <= ((uint32_t)1))))
		{
			goto IL_02eb;
		}
	}
	{
		// deltaPosition = dP;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123 = V_1;
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_deltaPosition_49(L_123);
		// deltaRotation = dR;
		float L_124 = V_2;
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_deltaRotation_50(L_124);
		// deltaScale = dS;
		float L_125 = V_3;
		((TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 *)__this)->set_deltaScale_51(L_125);
		// setState(GestureState.Changed);
		bool L_126;
		L_126 = Gesture_setState_m39529F73B75151D1F9D9B8404A49A9BCDFC77F3F(__this, 3, /*hidden argument*/NULL);
		// resetValues();
		TransformGestureBase_resetValues_m4D75E6AA864555A69BE9CB1730B96094E875DDC5(__this, /*hidden argument*/NULL);
	}

IL_02eb:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoPointTransformGestureBase_reset_mAB62EEA18B41664C23D370950CF16AD6316944E5 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, const RuntimeMethod* method)
{
	{
		// base.reset();
		TransformGestureBase_reset_m1C31927F37E1EB3F72DEF23A908607C7E0A56C3E(__this, /*hidden argument*/NULL);
		// screenPixelTranslationBuffer = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_screenPixelTranslationBuffer_60(L_0);
		// screenPixelRotationBuffer = 0f;
		__this->set_screenPixelRotationBuffer_61((0.0f));
		// angleBuffer = 0;
		__this->set_angleBuffer_62((0.0f));
		// screenPixelScalingBuffer = 0f;
		__this->set_screenPixelScalingBuffer_63((0.0f));
		// scaleBuffer = 1f;
		__this->set_scaleBuffer_64((1.0f));
		// }
		return;
	}
}
// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doRotation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TwoPointTransformGestureBase_doRotation_m3C1D023396D5EBDD5EAE686032ECFEE4795D6B13 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oldScreenPos10, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oldScreenPos21, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newScreenPos12, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newScreenPos23, ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * ___projectionParams4, const RuntimeMethod* method)
{
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doScaling(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TwoPointTransformGestureBase_doScaling_m4FD6B8B3A94917CEB931FC77D052660500261CC3 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oldScreenPos10, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oldScreenPos21, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newScreenPos12, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newScreenPos23, ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * ___projectionParams4, const RuntimeMethod* method)
{
	{
		// return 1;
		return (1.0f);
	}
}
// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doOnePointTranslation(UnityEngine.Vector2,UnityEngine.Vector2,TouchScript.Layers.ProjectionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TwoPointTransformGestureBase_doOnePointTranslation_mB7C48EE61EAF573D2808DE60558AE953867BA088 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oldScreenPos0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newScreenPos1, ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * ___projectionParams2, const RuntimeMethod* method)
{
	{
		// return Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::doTwoPointTranslation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single,TouchScript.Layers.ProjectionParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TwoPointTransformGestureBase_doTwoPointTranslation_m012E37B2FAFC19CA3E12260E1D664787C2FE58D0 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oldScreenPos10, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oldScreenPos21, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newScreenPos12, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newScreenPos23, float ___dR4, float ___dS5, ProjectionParams_t17A0E19B34C2DEB38888BE3DC3B5AB5F6107F3F5 * ___projectionParams6, const RuntimeMethod* method)
{
	{
		// return Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getNumPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwoPointTransformGestureBase_getNumPoints_m74193185FB0F4E14AFBB9DE9F7768E1B3C8DB3B0 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, const RuntimeMethod* method)
{
	{
		// return NumPointers;
		int32_t L_0;
		L_0 = Gesture_get_NumPointers_m87B20BC5C694ACB88D70D568BBD7C421A560BA86_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::relevantPointers1(System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwoPointTransformGestureBase_relevantPointers1_m1698213DD762D664761D91D70135D1C517E5DFEC (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, RuntimeObject* ___pointers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var count = pointers.Count;
		RuntimeObject* L_0 = ___pointers0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.Pointers.Pointer>::get_Count() */, ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// for (var i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0026;
	}

IL_000b:
	{
		// if (pointers[i] == activePointers[0]) return true;
		RuntimeObject* L_2 = ___pointers0;
		int32_t L_3 = V_1;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_4;
		L_4 = InterfaceFuncInvoker1< Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>::get_Item(System.Int32) */, IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var, L_2, L_3);
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_5 = ((Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 *)__this)->get_activePointers_13();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_6;
		L_6 = List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_inline(L_5, 0, /*hidden argument*/List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		if ((!(((RuntimeObject*)(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *)L_4) == ((RuntimeObject*)(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *)L_6))))
		{
			goto IL_0022;
		}
	}
	{
		// if (pointers[i] == activePointers[0]) return true;
		return (bool)1;
	}

IL_0022:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0026:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::relevantPointers2(System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwoPointTransformGestureBase_relevantPointers2_mE93D3E579936DA5A531EBFC39FF3C493ECBAA4BA (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, RuntimeObject* ___pointers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * V_2 = NULL;
	{
		// var count = pointers.Count;
		RuntimeObject* L_0 = ___pointers0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.Pointers.Pointer>::get_Count() */, ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// for (var i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_000b:
	{
		// var pointer = pointers[i];
		RuntimeObject* L_2 = ___pointers0;
		int32_t L_3 = V_1;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_4;
		L_4 = InterfaceFuncInvoker1< Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>::get_Item(System.Int32) */, IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var, L_2, L_3);
		V_2 = L_4;
		// if (pointer == activePointers[0] || pointer == activePointers[1]) return true;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_5 = V_2;
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_6 = ((Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 *)__this)->get_activePointers_13();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_7;
		L_7 = List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_inline(L_6, 0, /*hidden argument*/List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		if ((((RuntimeObject*)(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *)L_5) == ((RuntimeObject*)(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_8 = V_2;
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_9 = ((Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 *)__this)->get_activePointers_13();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_10;
		L_10 = List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_inline(L_9, 1, /*hidden argument*/List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		if ((!(((RuntimeObject*)(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *)L_8) == ((RuntimeObject*)(Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *)L_10))))
		{
			goto IL_0033;
		}
	}

IL_0031:
	{
		// if (pointer == activePointers[0] || pointer == activePointers[1]) return true;
		return (bool)1;
	}

IL_0033:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0037:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getPointScreenPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TwoPointTransformGestureBase_getPointScreenPosition_m491D099B17BB2A2701751B7A1F37141A9B797C3D (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activePointers[index].Position;
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_0 = ((Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 *)__this)->get_activePointers_13();
		int32_t L_1 = ___index0;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_2;
		L_2 = List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Pointer_get_Position_m4E72C345860B25642E55A7BAFE830F2DDD7027B4_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::getPointPreviousScreenPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TwoPointTransformGestureBase_getPointPreviousScreenPosition_m0783D982B9BED69BFBBD68E51711B20E6399A598 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activePointers[index].PreviousPosition;
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_0 = ((Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 *)__this)->get_activePointers_13();
		int32_t L_1 = ___index0;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_2;
		L_2 = List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m57B14D2225F9DEFC378CD6529378412CF83FC61C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Pointer_get_PreviousPosition_mBC5A988DF9BD295CA0034BFF5E6526BBC188D43B_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::updateMinScreenPointsDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoPointTransformGestureBase_updateMinScreenPointsDistance_mD973DE3861F0E21BC27A38EC12A17DD87F5E71C8 (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, const RuntimeMethod* method)
{
	{
		// minScreenPointsPixelDistance = minScreenPointsDistance * touchManager.DotsPerCentimeter;
		float L_0 = __this->get_minScreenPointsDistance_65();
		TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * L_1;
		L_1 = Gesture_get_touchManager_m62A37E7BB349DAD73E7BCF46F2CAC30641601C88_inline(__this, /*hidden argument*/NULL);
		float L_2;
		L_2 = TouchManagerInstance_get_DotsPerCentimeter_m1B48CD34B01817954E86526D4EF650F17EF73195_inline(L_1, /*hidden argument*/NULL);
		__this->set_minScreenPointsPixelDistance_58(((float)il2cpp_codegen_multiply((float)L_0, (float)L_2)));
		// minScreenPointsPixelDistanceSquared = minScreenPointsPixelDistance * minScreenPointsPixelDistance;
		float L_3 = __this->get_minScreenPointsPixelDistance_58();
		float L_4 = __this->get_minScreenPointsPixelDistance_58();
		__this->set_minScreenPointsPixelDistanceSquared_59(((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)));
		// }
		return;
	}
}
// System.Void TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoPointTransformGestureBase__ctor_mB177522E0CD91EB977EF39D283AA8D310A1281DB (TwoPointTransformGestureBase_tDA8BB7E3EB0D1D2FB124AF15CF9C1A98A65B9D27 * __this, const RuntimeMethod* method)
{
	{
		// private float minScreenPointsDistance = 0.5f;
		__this->set_minScreenPointsDistance_65((0.5f));
		TransformGestureBase__ctor_m4B837C6E28C80A47C6DCD1F1584F9AF3369F2542(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TouchScript.Hit.HitResult TouchScript.Hit.Untouchable::IsHit(TouchScript.Pointers.IPointer,TouchScript.Hit.HitData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Untouchable_IsHit_mBD9CC6EA616B08A3E4F1DBE861A7C5E9033543ED (Untouchable_t4B18828E6570ACE237D613D7FB27CA220E8F7A33 * __this, RuntimeObject* ___pointer0, HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  ___hit1, const RuntimeMethod* method)
{
	{
		// return DiscardPointer ? HitResult.Discard : HitResult.Miss;
		bool L_0 = __this->get_DiscardPointer_4();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(2);
	}

IL_000a:
	{
		return (int32_t)(3);
	}
}
// System.Void TouchScript.Hit.Untouchable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Untouchable__ctor_mBC95B6234BE0E20E2EA92BA568A2CB1C326629C9 (Untouchable_t4B18828E6570ACE237D613D7FB27CA220E8F7A33 * __this, const RuntimeMethod* method)
{
	{
		HitTest__ctor_mCA89929E139F89B0EDFFD61665E7C02CB8AF9BC3(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VideoManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_Start_m906CC8FA1502280922D3B8A9BFA02E1B722342AC (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vp = this.GetComponent<VideoPlayer>();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0;
		L_0 = Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365(__this, /*hidden argument*/Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365_RuntimeMethod_var);
		__this->set_vp_5(L_0);
		// vp.url = System.IO.Path.Combine(Application.streamingAssetsPath, url);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_1 = __this->get_vp_5();
		String_t* L_2;
		L_2 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_3 = __this->get_url_4();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_2, L_3, /*hidden argument*/NULL);
		VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13(L_1, L_4, /*hidden argument*/NULL);
		// vp.Play();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = __this->get_vp_5();
		VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_Update_mC77BE392A373A8B43F66BAAA0A51A943CB04AF14 (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (vp.isPlaying && (ulong)vp.frame == vp.frameCount - 1)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_vp_5();
		bool L_1;
		L_1 = VideoPlayer_get_isPlaying_m457BE1719C1CF9A9BD6D6BFB02505E9778D68D6F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_2 = __this->get_vp_5();
		int64_t L_3;
		L_3 = VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E(L_2, /*hidden argument*/NULL);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_4 = __this->get_vp_5();
		uint64_t L_5;
		L_5 = VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044(L_4, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)((int64_t)((int64_t)1))))))))
		{
			goto IL_003c;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_6;
		L_6 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void VideoManager::skipTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_skipTutorial_mBED572807AE2FDBB61FEFBB861B525F04F81E48D (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoManager::back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_back_mAF5B8B57AB76FA11814FA5AB8BF939D0376524D5 (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// vp.Stop();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_vp_5();
		VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293(L_0, /*hidden argument*/NULL);
		// vp.frame = 1;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_1 = __this->get_vp_5();
		VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A(L_1, ((int64_t)((int64_t)1)), /*hidden argument*/NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager__ctor_mB5D382779E7296662E64C9945FEC6BEA0B30E749 (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Examples.Portal.Vortex::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vortex_OnTriggerEnter_m8E4DDA1D9E8EF17477B27870E3525B626F8E4E3B (Vortex_tDFD0E77B461DAE1C96455AB7B0FD5D36CE66C298 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlanet_t24425248AAAE5648C27C10E1AA8431B341B1D210_mE1E90F555DBAA445E6CFFA8E289D45FF7AD01CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210 * V_0 = NULL;
	{
		// var planet = other.GetComponent<Planet>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210 * L_1;
		L_1 = Component_GetComponent_TisPlanet_t24425248AAAE5648C27C10E1AA8431B341B1D210_mE1E90F555DBAA445E6CFFA8E289D45FF7AD01CCD(L_0, /*hidden argument*/Component_GetComponent_TisPlanet_t24425248AAAE5648C27C10E1AA8431B341B1D210_mE1E90F555DBAA445E6CFFA8E289D45FF7AD01CCD_RuntimeMethod_var);
		V_0 = L_1;
		// if (planet == null) return;
		Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// if (planet == null) return;
		return;
	}

IL_0011:
	{
		// planet.Fall();
		Planet_t24425248AAAE5648C27C10E1AA8431B341B1D210 * L_4 = V_0;
		Planet_Fall_m418075FCE29296C42C17898831BF243A5DB8F06C(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Vortex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vortex__ctor_m5935A628586E2152A159B3FDE77845DB49AD9C00 (Vortex_tDFD0E77B461DAE1C96455AB7B0FD5D36CE66C298 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WindowManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_Start_m6A6F3DD5B27222295CEDB2C0019D1D9D47E0163C (WindowManager_tE18412F0E79BBF0CD77BB6BFEBE04641BB2D38EA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WindowManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_Update_m3ED0BF3C83E8AD13DDBC073EA64EA3229ABA6617 (WindowManager_tE18412F0E79BBF0CD77BB6BFEBE04641BB2D38EA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WindowManager::show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_show_mE3D68274CC1028C21330C3C5C0EBFB05F0108145 (WindowManager_tE18412F0E79BBF0CD77BB6BFEBE04641BB2D38EA * __this, const RuntimeMethod* method)
{
	{
		// window.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_window_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WindowManager::hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_hide_m6AEFACA3FB2848C42973151A7013C7852158681A (WindowManager_tE18412F0E79BBF0CD77BB6BFEBE04641BB2D38EA * __this, const RuntimeMethod* method)
{
	{
		// window.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_window_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WindowManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager__ctor_mFA6DBF3834F7C93CF73FCD2D9BF1F7E733D6BFB4 (WindowManager_tE18412F0E79BBF0CD77BB6BFEBE04641BB2D38EA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Layers.WorldSpaceCanvasProjectionParams::.ctor(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldSpaceCanvasProjectionParams__ctor_m41E48F65E0E84B29E8942E06C4F708D5B8F4976D (WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5 * __this, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas0, const RuntimeMethod* method)
{
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B2_0 = NULL;
	WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5 * G_B2_1 = NULL;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B1_0 = NULL;
	WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5 * G_B1_1 = NULL;
	{
		// public WorldSpaceCanvasProjectionParams(Canvas canvas)
		ProjectionParams__ctor_m82B45BECFB53B67685614FF762F93CCBAE5997AB(__this, /*hidden argument*/NULL);
		// this.canvas = canvas;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = ___canvas0;
		__this->set_canvas_0(L_0);
		// mode = canvas.renderMode;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1 = ___canvas0;
		int32_t L_2;
		L_2 = Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D(L_1, /*hidden argument*/NULL);
		__this->set_mode_1(L_2);
		// camera = canvas.worldCamera ?? Camera.main;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3 = ___canvas0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51(L_3, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = __this;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = __this;
			goto IL_0029;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0029:
	{
		G_B2_1->set_camera_2(G_B2_0);
		// }
		return;
	}
}
// UnityEngine.Vector3 TouchScript.Layers.WorldSpaceCanvasProjectionParams::ProjectTo(UnityEngine.Vector2,UnityEngine.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WorldSpaceCanvasProjectionParams_ProjectTo_m5600F852A350275505A28BBD088D081E51B2ED36 (WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___projectionPlane1, const RuntimeMethod* method)
{
	{
		// return ProjectionUtils.CameraToPlaneProjection(screenPosition, camera, projectionPlane);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___screenPosition0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_camera_2();
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_2 = ___projectionPlane1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = ProjectionUtils_CameraToPlaneProjection_mC1A8E2D588F9EE1C3D94E643F90A2A3AA8C0D382(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 TouchScript.Layers.WorldSpaceCanvasProjectionParams::ProjectFrom(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  WorldSpaceCanvasProjectionParams_ProjectFrom_mDC1C6BDCB26FDD237044F7F958A222EDA3C5A3B0 (WorldSpaceCanvasProjectionParams_t98E85E52A11170F2E922BC2E3209D2B6909CBDE5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method)
{
	{
		// return camera.WorldToScreenPoint(worldPosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_camera_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___worldPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Gestures.Gesture/GestureEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureEvent__ctor_mD2C2C448B772B4EA3AF345ACFF1198C0D741B9F1 (GestureEvent_t9062BF4F2DF60216DDE5C5BFF8DFBAC3EACDC2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC3D2855F27182E641292E7BC95897B444B6FA4D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC3D2855F27182E641292E7BC95897B444B6FA4D6(__this, /*hidden argument*/UnityEvent_1__ctor_mC3D2855F27182E641292E7BC95897B444B6FA4D6_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Core.GestureManagerInstance/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m59175E8BB3E6E9485CAC1014E33514CF3C881A26 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * L_0 = (U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A *)il2cpp_codegen_object_new(U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDDC0F16595C5F277D8F4A8D201DB5D355BB36C56(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TouchScript.Core.GestureManagerInstance/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDDC0F16595C5F277D8F4A8D201DB5D355BB36C56 (U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.Core.GestureManagerInstance/<>c::<.cctor>b__47_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 * U3CU3Ec_U3C_cctorU3Eb__47_0_mB3F5E00A7220222E46CF679EF8D4506B4D789776 (U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD7FAB47EB79E810A78BA1E380A42BABAC3801194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<Gesture>(10), null, (l) => l.Clear(), "GestureManager/Gesture");
		List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 * L_0 = (List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 *)il2cpp_codegen_object_new(List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0_il2cpp_TypeInfo_var);
		List_1__ctor_mD7FAB47EB79E810A78BA1E380A42BABAC3801194(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_mD7FAB47EB79E810A78BA1E380A42BABAC3801194_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void TouchScript.Core.GestureManagerInstance/<>c::<.cctor>b__47_1(System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__47_1_m47CFF85EFAE5905C4EF6D937E41441F8A5738781 (U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * __this, List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m66B083B554C59C9707F21BECA0A0491CA56AA110_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<Gesture>(10), null, (l) => l.Clear(), "GestureManager/Gesture");
		List_1_t0473BFF8B75DD0ADB1549EC07AD5BE03EECAB7A0 * L_0 = ___l0;
		List_1_Clear_m66B083B554C59C9707F21BECA0A0491CA56AA110(L_0, /*hidden argument*/List_1_Clear_m66B083B554C59C9707F21BECA0A0491CA56AA110_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<TouchScript.Pointers.Pointer> TouchScript.Core.GestureManagerInstance/<>c::<.cctor>b__47_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * U3CU3Ec_U3C_cctorU3Eb__47_2_m677694E109461B2B79D9038F7C601CE97A154AD5 (U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFE77211EF52E5EED34AF7FE8462DEF4125F91415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<Pointer>(10), null, (l) => l.Clear(), "GestureManager/Pointer");
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_0 = (List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 *)il2cpp_codegen_object_new(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4_il2cpp_TypeInfo_var);
		List_1__ctor_mFE77211EF52E5EED34AF7FE8462DEF4125F91415(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_mFE77211EF52E5EED34AF7FE8462DEF4125F91415_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void TouchScript.Core.GestureManagerInstance/<>c::<.cctor>b__47_3(System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__47_3_m2204AA3B538642490C32C981983B448592FDCBE7 (U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * __this, List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mCD0EEDC8DD813A9A8573E01F6BA012F17A081A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<Pointer>(10), null, (l) => l.Clear(), "GestureManager/Pointer");
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_0 = ___l0;
		List_1_Clear_mCD0EEDC8DD813A9A8573E01F6BA012F17A081A14(L_0, /*hidden argument*/List_1_Clear_mCD0EEDC8DD813A9A8573E01F6BA012F17A081A14_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Transform> TouchScript.Core.GestureManagerInstance/<>c::<.cctor>b__47_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * U3CU3Ec_U3C_cctorU3Eb__47_4_m79886FB7B02A863CDDE4079C36F2BD743CCFA9E4 (U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3EED555DE083A34B0F2CAB4EE64DB7D09D6F5BE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<Transform>(10), null, (l) => l.Clear(), "GestureManager/Transform");
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_0 = (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)il2cpp_codegen_object_new(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		List_1__ctor_m3EED555DE083A34B0F2CAB4EE64DB7D09D6F5BE2(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_m3EED555DE083A34B0F2CAB4EE64DB7D09D6F5BE2_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void TouchScript.Core.GestureManagerInstance/<>c::<.cctor>b__47_5(System.Collections.Generic.List`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__47_5_mBF1327D7F9279E7951C6C79A92120638C536EC2F (U3CU3Ec_t86CCE0532CDC4C5F998BA6936A066DF5E968A19A * __this, List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFAD32CB3130E71D5F5B9B07957BBC7F70096A936_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<Transform>(10), null, (l) => l.Clear(), "GestureManager/Transform");
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_0 = ___l0;
		List_1_Clear_mFAD32CB3130E71D5F5B9B07957BBC7F70096A936(L_0, /*hidden argument*/List_1_Clear_mFAD32CB3130E71D5F5B9B07957BBC7F70096A936_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Examples.KillMe/<Start>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1__ctor_m73E9FFAA7E4580EC329FA6BD57110A242393A35F (U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TouchScript.Examples.KillMe/<Start>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_IDisposable_Dispose_m26466B4C40A78597B6C359F0CD3B0E58439EB837 (U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TouchScript.Examples.KillMe/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__1_MoveNext_m5B6ECCB043D346E37D7372A9E479ACCF657D274B (U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Delay != 0) yield return new WaitForSeconds(Delay);
		KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55 * L_4 = V_1;
		float L_5 = L_4->get_Delay_4();
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		// if (Delay != 0) yield return new WaitForSeconds(Delay);
		KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55 * L_6 = V_1;
		float L_7 = L_6->get_Delay_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004c:
	{
		// Destroy(gameObject);
		KillMe_t0960C1D290E870089E742163A8C7C644E0E77F55 * L_9 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TouchScript.Examples.KillMe/<Start>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC58C24AFEAF83A00A5139C008CBA6A625954655C (U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TouchScript.Examples.KillMe/<Start>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m963A4780AF60A6784CB5AD83CA80025AD335B266 (U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m963A4780AF60A6784CB5AD83CA80025AD335B266_RuntimeMethod_var)));
	}
}
// System.Object TouchScript.Examples.KillMe/<Start>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__1_System_Collections_IEnumerator_get_Current_mE45F3DCE116D90305E8044E373E0874F64E1887B (U3CStartU3Ed__1_t5AB6A57C0C910DCABB2638576F838CD66FFA99DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Gestures.LongPressGesture/<wait>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitU3Ed__25__ctor_mFC995F6422422045469F114159C1CD041E5D0DBD (U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture/<wait>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitU3Ed__25_System_IDisposable_Dispose_m3C84CF86824B229B1595BC1D215D43D8F173A511 (U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TouchScript.Gestures.LongPressGesture/<wait>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitU3Ed__25_MoveNext_m129F2514AF4BE3099A6EBB3E3FABE894E9858487 (U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * V_1 = NULL;
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var targetTime = Time.unscaledTime + TimeToPress;
		float L_4;
		L_4 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * L_5 = V_1;
		float L_6;
		L_6 = LongPressGesture_get_TimeToPress_mD7355052B743900CF7F6D270370AB96DA8541C36_inline(L_5, /*hidden argument*/NULL);
		__this->set_U3CtargetTimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_4, (float)L_6)));
		goto IL_0049;
	}

IL_0032:
	{
		// while (targetTime > Time.unscaledTime) yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0049:
	{
		// while (targetTime > Time.unscaledTime) yield return null;
		float L_7 = __this->get_U3CtargetTimeU3E5__2_3();
		float L_8;
		L_8 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		if ((((float)L_7) > ((float)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		// if (State == GestureState.Possible)
		LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * L_9 = V_1;
		int32_t L_10;
		L_10 = Gesture_get_State_mE078CD64034A0A21C076C3B703BEC2920FBC5090_inline(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		// var data = GetScreenPositionHitData();
		LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * L_11 = V_1;
		HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  L_12;
		L_12 = VirtFuncInvoker0< HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  >::Invoke(14 /* TouchScript.Hit.HitData TouchScript.Gestures.Gesture::GetScreenPositionHitData() */, L_11);
		V_2 = L_12;
		// if (data.Target == null || !data.Target.IsChildOf(cachedTransform))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = HitData_get_Target_mDCBC396875ED34440B0C5F8D8B2C27BFCA4A7B0B_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0089;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = HitData_get_Target_mDCBC396875ED34440B0C5F8D8B2C27BFCA4A7B0B_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_2), /*hidden argument*/NULL);
		LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * L_16 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = ((Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 *)L_16)->get_cachedTransform_14();
		bool L_18;
		L_18 = Transform_IsChildOf_m1783A88A490931E98F4D5E361595A518E09FD4BC(L_15, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0093;
		}
	}

IL_0089:
	{
		// setState(GestureState.Failed);
		LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * L_19 = V_1;
		bool L_20;
		L_20 = Gesture_setState_m39529F73B75151D1F9D9B8404A49A9BCDFC77F3F(L_19, 6, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_0093:
	{
		// setState(GestureState.Recognized);
		LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * L_21 = V_1;
		bool L_22;
		L_22 = Gesture_setState_m39529F73B75151D1F9D9B8404A49A9BCDFC77F3F(L_21, 4, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// }
		return (bool)0;
	}
}
// System.Object TouchScript.Gestures.LongPressGesture/<wait>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC4DFFD8963561771CC243F6569B2A9285A8474AD (U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TouchScript.Gestures.LongPressGesture/<wait>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitU3Ed__25_System_Collections_IEnumerator_Reset_mD31C1A8853624EBEF9A95D2400BFE47DCB52477B (U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwaitU3Ed__25_System_Collections_IEnumerator_Reset_mD31C1A8853624EBEF9A95D2400BFE47DCB52477B_RuntimeMethod_var)));
	}
}
// System.Object TouchScript.Gestures.LongPressGesture/<wait>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitU3Ed__25_System_Collections_IEnumerator_get_Current_mC3E44BF39D3707BCBA781DC9D318512198D4425E (U3CwaitU3Ed__25_tCD44B13A6C76D3CDCC68787507544B2012246312 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Examples.Runner/<resetUILayer>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CresetUILayerU3Ed__9__ctor_m607E3F2DC5D0218497554847E2B5258AB84DF478 (U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TouchScript.Examples.Runner/<resetUILayer>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CresetUILayerU3Ed__9_System_IDisposable_Dispose_mFDA6B30F4AEC1BBCF3C2836ADECA94394BD4DA03 (U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TouchScript.Examples.Runner/<resetUILayer>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CresetUILayerU3Ed__9_MoveNext_m238898E30F5BF6626FBFA1D463E5FC0993A2FBC4 (U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayerManager_t05BC5DF74CB32B8F804D839D8A3144716D5894E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LayerManager.Instance.AddLayer(layer, 0);
		RuntimeObject* L_5;
		L_5 = LayerManager_get_Instance_m42BD8871420217FA6822F57708709ECF0D49EE38(/*hidden argument*/NULL);
		Runner_t8888FADD2D2AB3199DB52FFA2611D8DA932E2137 * L_6 = V_1;
		TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * L_7 = L_6->get_layer_5();
		bool L_8;
		L_8 = InterfaceFuncInvoker3< bool, TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 *, int32_t, bool >::Invoke(3 /* System.Boolean TouchScript.ILayerManager::AddLayer(TouchScript.Layers.TouchLayer,System.Int32,System.Boolean) */, ILayerManager_t05BC5DF74CB32B8F804D839D8A3144716D5894E8_il2cpp_TypeInfo_var, L_5, L_7, 0, (bool)1);
		// }
		return (bool)0;
	}
}
// System.Object TouchScript.Examples.Runner/<resetUILayer>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CresetUILayerU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0B35C8BEF135468C3B2D9C8E8AAA24ACEE397F71 (U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TouchScript.Examples.Runner/<resetUILayer>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CresetUILayerU3Ed__9_System_Collections_IEnumerator_Reset_m555277F2E5EEF0BEF05C3D9986F6FA5DE0A94B78 (U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CresetUILayerU3Ed__9_System_Collections_IEnumerator_Reset_m555277F2E5EEF0BEF05C3D9986F6FA5DE0A94B78_RuntimeMethod_var)));
	}
}
// System.Object TouchScript.Examples.Runner/<resetUILayer>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CresetUILayerU3Ed__9_System_Collections_IEnumerator_get_Current_m8755266AEAA1ABE01B47EDF4F55A815A48461C77 (U3CresetUILayerU3Ed__9_t31ED0BA20F1D73EBCB5F115D8ADC5FBC9350F957 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShowMe/<Start>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__0__ctor_m63C4C987C1AF6D0099C91BF8C9591AAB506E0A07 (U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ShowMe/<Start>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_System_IDisposable_Dispose_mA5555752AE2B80A7A8E73AEF72B668ED0F0E4C4D (U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ShowMe/<Start>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__0_MoveNext_m64130C4785CDF08991C94A159B6E20683FCD1BB6 (U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShowMe_t597B31A3BE68F874BC2A433D56F7D674394BD6E5 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ShowMe_t597B31A3BE68F874BC2A433D56F7D674394BD6E5 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var canvas = GetComponent<Canvas>();
		ShowMe_t597B31A3BE68F874BC2A433D56F7D674394BD6E5 * L_4 = V_1;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_5;
		L_5 = Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1(L_4, /*hidden argument*/Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		__this->set_U3CcanvasU3E5__2_3(L_5);
		// canvas.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_6 = __this->get_U3CcanvasU3E5__2_3();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canvas.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_8 = __this->get_U3CcanvasU3E5__2_3();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ShowMe/<Start>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC8C16745DC501DAE4ABDDE1FEE8223AB3FCC1FC4 (U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ShowMe/<Start>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_System_Collections_IEnumerator_Reset_m90558A5F652A57CA723ACA7604DC462D0563E1BC (U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__0_System_Collections_IEnumerator_Reset_m90558A5F652A57CA723ACA7604DC462D0563E1BC_RuntimeMethod_var)));
	}
}
// System.Object ShowMe/<Start>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__0_System_Collections_IEnumerator_get_Current_mB603CDC52F1313A59ABC4F848ACAC3B2B11201C0 (U3CStartU3Ed__0_t0B43B868E6A3D35C674569CC9D944B0E23B7FFE6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Layers.StandardLayer/<lateEnable>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClateEnableU3Ed__46__ctor_m17EBC574F680651AD13C835865F0E7922F9E7B23 (U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TouchScript.Layers.StandardLayer/<lateEnable>d__46::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClateEnableU3Ed__46_System_IDisposable_Dispose_m6AF08B9670E7B0E94AB830393BE5A7C18C6866B7 (U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TouchScript.Layers.StandardLayer/<lateEnable>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3ClateEnableU3Ed__46_MoveNext_m60C4D8788D83489F616C0285D64CA7247F11ACB0 (U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// setupInputModule();
		StandardLayer_t2F6C176A080811BF86DBB2E4204FAD23ECE9D95E * L_5 = V_1;
		StandardLayer_setupInputModule_mFAF68C9F80F4253243010D19EE407D4C6DFD8BED(L_5, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TouchScript.Layers.StandardLayer/<lateEnable>d__46::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3ClateEnableU3Ed__46_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m13400AB3233C917424D95ED399C94248ED1F3355 (U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TouchScript.Layers.StandardLayer/<lateEnable>d__46::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClateEnableU3Ed__46_System_Collections_IEnumerator_Reset_mF7DC5B2DB8BFF62CD98686A60F937F196D139A11 (U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3ClateEnableU3Ed__46_System_Collections_IEnumerator_Reset_mF7DC5B2DB8BFF62CD98686A60F937F196D139A11_RuntimeMethod_var)));
	}
}
// System.Object TouchScript.Layers.StandardLayer/<lateEnable>d__46::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3ClateEnableU3Ed__46_System_Collections_IEnumerator_get_Current_m2AA5516DE55D74567A81E3FD4872A2E456DB5AC1 (U3ClateEnableU3Ed__46_t7C4490277B64968F905B75A212E38DB99D601C35 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Gestures.TapGesture/<wait>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitU3Ed__43__ctor_mE7477458BE062AFB744CC35A1DC155D372C21D4B (U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TouchScript.Gestures.TapGesture/<wait>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitU3Ed__43_System_IDisposable_Dispose_m083C440129A0FCA68DA191269C1BACFA33F680EE (U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TouchScript.Gestures.TapGesture/<wait>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitU3Ed__43_MoveNext_m1AD7EE24CE6C016DCEC9898285EA7EF6026B72BC (U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var targetTime = Time.unscaledTime + TimeLimit;
		float L_4;
		L_4 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * L_5 = V_1;
		float L_6;
		L_6 = TapGesture_get_TimeLimit_mFB00C58209EEA02FA1F470B6185A1143EF07D392_inline(L_5, /*hidden argument*/NULL);
		__this->set_U3CtargetTimeU3E5__2_3(((float)il2cpp_codegen_add((float)L_4, (float)L_6)));
		goto IL_0049;
	}

IL_0032:
	{
		// while (targetTime > Time.unscaledTime) yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0049:
	{
		// while (targetTime > Time.unscaledTime) yield return null;
		float L_7 = __this->get_U3CtargetTimeU3E5__2_3();
		float L_8;
		L_8 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		if ((((float)L_7) > ((float)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		// if (State == GestureState.Idle || State == GestureState.Possible) setState(GestureState.Failed);
		TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * L_9 = V_1;
		int32_t L_10;
		L_10 = Gesture_get_State_mE078CD64034A0A21C076C3B703BEC2920FBC5090_inline(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * L_11 = V_1;
		int32_t L_12;
		L_12 = Gesture_get_State_mE078CD64034A0A21C076C3B703BEC2920FBC5090_inline(L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}

IL_0067:
	{
		// if (State == GestureState.Idle || State == GestureState.Possible) setState(GestureState.Failed);
		TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * L_13 = V_1;
		bool L_14;
		L_14 = Gesture_setState_m39529F73B75151D1F9D9B8404A49A9BCDFC77F3F(L_13, 6, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return (bool)0;
	}
}
// System.Object TouchScript.Gestures.TapGesture/<wait>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB3E75D22CF4A830209421D5017AC38D78C15756A (U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TouchScript.Gestures.TapGesture/<wait>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitU3Ed__43_System_Collections_IEnumerator_Reset_m491D32473B6CEE9B00E48C2527F77A9FB8E399B8 (U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwaitU3Ed__43_System_Collections_IEnumerator_Reset_m491D32473B6CEE9B00E48C2527F77A9FB8E399B8_RuntimeMethod_var)));
	}
}
// System.Object TouchScript.Gestures.TapGesture/<wait>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitU3Ed__43_System_Collections_IEnumerator_get_Current_mC9B109443AD6C53AA46851F00077833D305AB2AC (U3CwaitU3Ed__43_t92D7BACECE24DEF7D88A65ECC98FB95817659555 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TouchScript.InputSources.InputHandlers.TouchHandler/TouchState
IL2CPP_EXTERN_C void TouchState_t648502A120A8AA87F740560422538F317A483E56_marshal_pinvoke(const TouchState_t648502A120A8AA87F740560422538F317A483E56& unmarshaled, TouchState_t648502A120A8AA87F740560422538F317A483E56_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Pointer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Pointer' of type 'TouchState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Pointer_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchState_t648502A120A8AA87F740560422538F317A483E56_marshal_pinvoke_back(const TouchState_t648502A120A8AA87F740560422538F317A483E56_marshaled_pinvoke& marshaled, TouchState_t648502A120A8AA87F740560422538F317A483E56& unmarshaled)
{
	Exception_t* ___Pointer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Pointer' of type 'TouchState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Pointer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TouchScript.InputSources.InputHandlers.TouchHandler/TouchState
IL2CPP_EXTERN_C void TouchState_t648502A120A8AA87F740560422538F317A483E56_marshal_pinvoke_cleanup(TouchState_t648502A120A8AA87F740560422538F317A483E56_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TouchScript.InputSources.InputHandlers.TouchHandler/TouchState
IL2CPP_EXTERN_C void TouchState_t648502A120A8AA87F740560422538F317A483E56_marshal_com(const TouchState_t648502A120A8AA87F740560422538F317A483E56& unmarshaled, TouchState_t648502A120A8AA87F740560422538F317A483E56_marshaled_com& marshaled)
{
	Exception_t* ___Pointer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Pointer' of type 'TouchState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Pointer_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchState_t648502A120A8AA87F740560422538F317A483E56_marshal_com_back(const TouchState_t648502A120A8AA87F740560422538F317A483E56_marshaled_com& marshaled, TouchState_t648502A120A8AA87F740560422538F317A483E56& unmarshaled)
{
	Exception_t* ___Pointer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Pointer' of type 'TouchState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Pointer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TouchScript.InputSources.InputHandlers.TouchHandler/TouchState
IL2CPP_EXTERN_C void TouchState_t648502A120A8AA87F740560422538F317A483E56_marshal_com_cleanup(TouchState_t648502A120A8AA87F740560422538F317A483E56_marshaled_com& marshaled)
{
}
// System.Void TouchScript.InputSources.InputHandlers.TouchHandler/TouchState::.ctor(TouchScript.Pointers.Pointer,UnityEngine.TouchPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchState__ctor_mB0D84CF0746D5AA8A091457FAEE46400EAC67359 (TouchState_t648502A120A8AA87F740560422538F317A483E56 * __this, Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * ___pointer0, int32_t ___phase1, const RuntimeMethod* method)
{
	{
		// Pointer = pointer;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_0 = ___pointer0;
		__this->set_Pointer_0(L_0);
		// Phase = phase;
		int32_t L_1 = ___phase1;
		__this->set_Phase_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchState__ctor_mB0D84CF0746D5AA8A091457FAEE46400EAC67359_AdjustorThunk (RuntimeObject * __this, Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * ___pointer0, int32_t ___phase1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TouchState_t648502A120A8AA87F740560422538F317A483E56 * _thisAdjusted = reinterpret_cast<TouchState_t648502A120A8AA87F740560422538F317A483E56 *>(__this + _offset);
	TouchState__ctor_mB0D84CF0746D5AA8A091457FAEE46400EAC67359(_thisAdjusted, ___pointer0, ___phase1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Layers.TouchLayer/<lateAwake>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClateAwakeU3Ed__17__ctor_mCEDF0E3EF171EF9A7ADB1110B3F4020851ECC738 (U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TouchScript.Layers.TouchLayer/<lateAwake>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClateAwakeU3Ed__17_System_IDisposable_Dispose_m267444D2F57F54A89C7184775F7B406B1946BBCE (U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TouchScript.Layers.TouchLayer/<lateAwake>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3ClateAwakeU3Ed__17_MoveNext_m17D391EF21ED1CC00905C80F35F3E8844A7DF5C7 (U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayerManager_t05BC5DF74CB32B8F804D839D8A3144716D5894E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// manager.AddLayer(this, -1, false);
		TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * L_4 = V_1;
		RuntimeObject* L_5 = L_4->get_manager_8();
		TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 * L_6 = V_1;
		bool L_7;
		L_7 = InterfaceFuncInvoker3< bool, TouchLayer_t02F45B800EB9CADDED98ECC2CA50954987588218 *, int32_t, bool >::Invoke(3 /* System.Boolean TouchScript.ILayerManager::AddLayer(TouchScript.Layers.TouchLayer,System.Int32,System.Boolean) */, ILayerManager_t05BC5DF74CB32B8F804D839D8A3144716D5894E8_il2cpp_TypeInfo_var, L_5, L_6, (-1), (bool)0);
		// }
		return (bool)0;
	}
}
// System.Object TouchScript.Layers.TouchLayer/<lateAwake>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3ClateAwakeU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFC8C42B129E51874DFA5C3BFD6494AB4132ECE36 (U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TouchScript.Layers.TouchLayer/<lateAwake>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClateAwakeU3Ed__17_System_Collections_IEnumerator_Reset_mDC6FFBE25374FEE0143A5AA8E196DCE6499E8375 (U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3ClateAwakeU3Ed__17_System_Collections_IEnumerator_Reset_mDC6FFBE25374FEE0143A5AA8E196DCE6499E8375_RuntimeMethod_var)));
	}
}
// System.Object TouchScript.Layers.TouchLayer/<lateAwake>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3ClateAwakeU3Ed__17_System_Collections_IEnumerator_get_Current_m49100538BB20897A786FD3D0D52C8A45CFA57F54 (U3ClateAwakeU3Ed__17_t5E09994FAC12BA485CF291E4024A4558A9B1B097 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.TouchManager/FrameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameEvent__ctor_mB35C05480B21B6B3D56844B32D4AB654615C9C75 (FrameEvent_tBE7C5305E37511A74D08891DE781BABE28FB3BB6 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.TouchManager/PointerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEvent__ctor_mA46229E4E7636899D5C71067BC133B0C57CE94D3 (PointerEvent_t07498AC2731735A9CFFA0FF78D2B82678C72CE95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m774D443F08E5AE90D2BC22A380ADC258DA8BE9F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m774D443F08E5AE90D2BC22A380ADC258DA8BE9F9(__this, /*hidden argument*/UnityEvent_1__ctor_m774D443F08E5AE90D2BC22A380ADC258DA8BE9F9_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Core.TouchManagerInstance/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0DEE76B891310BA8679E444980A1629A524F371A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * L_0 = (U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB *)il2cpp_codegen_object_new(U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m13E0BA01A89D660DE87DEAE75689ECC7B64B7432(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TouchScript.Core.TouchManagerInstance/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m13E0BA01A89D660DE87DEAE75689ECC7B64B7432 (U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<TouchScript.Pointers.Pointer> TouchScript.Core.TouchManagerInstance/<>c::<.cctor>b__129_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * U3CU3Ec_U3C_cctorU3Eb__129_0_mFAFBF9062D2526F30F01E67CAEC7CAED2A11F4DC (U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFE77211EF52E5EED34AF7FE8462DEF4125F91415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<Pointer>(10), null, (l) => l.Clear());
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_0 = (List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 *)il2cpp_codegen_object_new(List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4_il2cpp_TypeInfo_var);
		List_1__ctor_mFE77211EF52E5EED34AF7FE8462DEF4125F91415(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_mFE77211EF52E5EED34AF7FE8462DEF4125F91415_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void TouchScript.Core.TouchManagerInstance/<>c::<.cctor>b__129_1(System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__129_1_m312CBF87C7D9C520E4D6512BAC491F29ABC7463C (U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * __this, List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mCD0EEDC8DD813A9A8573E01F6BA012F17A081A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => new List<Pointer>(10), null, (l) => l.Clear());
		List_1_tBB23D5DE8C0D931608B7A12E2341D43610CB52F4 * L_0 = ___l0;
		List_1_Clear_mCD0EEDC8DD813A9A8573E01F6BA012F17A081A14(L_0, /*hidden argument*/List_1_Clear_mCD0EEDC8DD813A9A8573E01F6BA012F17A081A14_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> TouchScript.Core.TouchManagerInstance/<>c::<.cctor>b__129_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * U3CU3Ec_U3C_cctorU3Eb__129_2_mD55CC9A4D443F1F2D3963AC7F32DFA031C091DB4 (U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ObjectPool<List<int>> intListPool = new ObjectPool<List<int>>(3, () => new List<int>(10), null,
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91(L_0, ((int32_t)10), /*hidden argument*/List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void TouchScript.Core.TouchManagerInstance/<>c::<.cctor>b__129_3(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__129_3_mCEC671B6998103646C980F4D2CFA10F212C34C3A (U3CU3Ec_t2B14C35AF9459DB09E56B54E69161976B544A8DB * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (l) => l.Clear());
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___l0;
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_0, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Core.TouchManagerInstance/<lateAwake>d__109::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClateAwakeU3Ed__109__ctor_m53160401C7FBE72D282054C5947FD908986E57A0 (U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TouchScript.Core.TouchManagerInstance/<lateAwake>d__109::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClateAwakeU3Ed__109_System_IDisposable_Dispose_m35F625ED4EE0E275E564B0FC530F039F30792C34 (U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TouchScript.Core.TouchManagerInstance/<lateAwake>d__109::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3ClateAwakeU3Ed__109_MoveNext_mDEDCDCFC2187BA7B549A8499BFC1B981BB6C547C (U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0050;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
		// createCameraLayer();
		TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * L_3 = V_1;
		TouchManagerInstance_createCameraLayer_m36F1C0EE9D0D27C242A2EADC780FD9BC66BCBC95(L_3, /*hidden argument*/NULL);
		// createInput();
		TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * L_4 = V_1;
		TouchManagerInstance_createInput_mADD9702A5657E77E31A98E999A10A06BA1E61233(L_4, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TouchScript.Core.TouchManagerInstance/<lateAwake>d__109::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3ClateAwakeU3Ed__109_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m966239CAAFACDED0843EA7FA6A7A8A7A0F4F2BE5 (U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TouchScript.Core.TouchManagerInstance/<lateAwake>d__109::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClateAwakeU3Ed__109_System_Collections_IEnumerator_Reset_mBC61DE953C265B44B07AA64F1F134824FEE2C866 (U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3ClateAwakeU3Ed__109_System_Collections_IEnumerator_Reset_mBC61DE953C265B44B07AA64F1F134824FEE2C866_RuntimeMethod_var)));
	}
}
// System.Object TouchScript.Core.TouchManagerInstance/<lateAwake>d__109::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3ClateAwakeU3Ed__109_System_Collections_IEnumerator_get_Current_m31859D53FAA665D154D85FD16D64A8B39E07E39C (U3ClateAwakeU3Ed__109_tFC2C6918BCE9B0AFF12FDEDBB011C3C5C3D1DB3C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::.ctor(TouchScript.Layers.UI.TouchScriptInputModule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule__ctor_mA966FEA7715F42E93860E985E5712DCCEFDE766F (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB86963336046BCC851EDB7F7B4BC04CE55C3276A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F39F3906730A7A6EEF158DD8BD993B7BA9C7CC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, PointerEventData> m_PointerData = new Dictionary<int, PointerEventData>(10);
		Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * L_0 = (Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 *)il2cpp_codegen_object_new(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB86963336046BCC851EDB7F7B4BC04CE55C3276A(L_0, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_mB86963336046BCC851EDB7F7B4BC04CE55C3276A_RuntimeMethod_var);
		__this->set_m_PointerData_5(L_0);
		// public UIStandardInputModule(TouchScriptInputModule input)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.input = input;
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_1 = ___input0;
		__this->set_input_0(L_1);
		// uiSampler = CustomSampler.Create("[TouchScript] Update UI");
		IL2CPP_RUNTIME_CLASS_INIT(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_2;
		L_2 = CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6(_stringLiteral6F39F3906730A7A6EEF158DD8BD993B7BA9C7CC2, (bool)0, /*hidden argument*/NULL);
		__this->set_uiSampler_1(L_2);
		// }
		return;
	}
}
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_IsPointerOverGameObject_m8106117AB54204E77E018EF0A2D47B0D34279C47 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, int32_t ___pointerId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_0 = NULL;
	{
		// var lastPointer = GetLastPointerEventData(pointerId);
		int32_t L_0 = ___pointerId0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1;
		L_1 = UIStandardInputModule_GetLastPointerEventData_m40B4EB1DF30123C99563D99F3D74C8D4EDBA5D60(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (lastPointer != null)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return lastPointer.pointerEnter != null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = PointerEventData_get_pointerEnter_m6F16C8962F195BB6ED58150986AEF584E4B979CB_inline(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_5;
	}

IL_0018:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_GetPointerData_m04D86A1860BEF77090A0D302FC534EAB5F2E5EC1 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, int32_t ___id0, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** ___data1, bool ___create2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF3E0C0B4EBA974F04D4FBF35CCFF7E4EB72CDD86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m112BCAAE5FE5B09885E2E42287E2CDC01B4516FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_PointerData.TryGetValue(id, out data) && create)
		Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * L_0 = __this->get_m_PointerData_5();
		int32_t L_1 = ___id0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** L_2 = ___data1;
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m112BCAAE5FE5B09885E2E42287E2CDC01B4516FC(L_0, L_1, (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m112BCAAE5FE5B09885E2E42287E2CDC01B4516FC_RuntimeMethod_var);
		bool L_4 = ___create2;
		if (!((int32_t)((int32_t)((((int32_t)L_3) == ((int32_t)0))? 1 : 0)&(int32_t)L_4)))
		{
			goto IL_003d;
		}
	}
	{
		// data = new PointerEventData(input.eventSystem)
		// {
		//     pointerId = id,
		// };
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** L_5 = ___data1;
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_6 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_7;
		L_7 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_6, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_8 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_8, L_7, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_9 = L_8;
		int32_t L_10 = ___id0;
		PointerEventData_set_pointerId_m7CD30C18A42AD6A99B435816B58F6CFDF42777D4_inline(L_9, L_10, /*hidden argument*/NULL);
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_9);
		// m_PointerData.Add(id, data);
		Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * L_11 = __this->get_m_PointerData_5();
		int32_t L_12 = ___id0;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** L_13 = ___data1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_14 = *((PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 **)L_13);
		Dictionary_2_Add_mF3E0C0B4EBA974F04D4FBF35CCFF7E4EB72CDD86(L_11, L_12, L_14, /*hidden argument*/Dictionary_2_Add_mF3E0C0B4EBA974F04D4FBF35CCFF7E4EB72CDD86_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_003d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_DeselectIfSelectionChanged_m78394F4A59843A87487B121BC1CE7E2B6726EC56 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentOverGo0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___pointerEvent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisISelectHandler_t9E3C913E19619F48362FBF67E14CCBFEDA4742C2_m241D0C68CC4C49641D5E11D81FA47FDA06BE4D63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var selectHandlerGO = ExecuteEvents.GetEventHandler<ISelectHandler>(currentOverGo);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___currentOverGo0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = ExecuteEvents_GetEventHandler_TisISelectHandler_t9E3C913E19619F48362FBF67E14CCBFEDA4742C2_m241D0C68CC4C49641D5E11D81FA47FDA06BE4D63(L_0, /*hidden argument*/ExecuteEvents_GetEventHandler_TisISelectHandler_t9E3C913E19619F48362FBF67E14CCBFEDA4742C2_m241D0C68CC4C49641D5E11D81FA47FDA06BE4D63_RuntimeMethod_var);
		// if (selectHandlerGO != input.eventSystem.currentSelectedGameObject)
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_2 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_3;
		L_3 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// input.eventSystem.SetSelectedGameObject(null, pointerEvent);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_6 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_7;
		L_7 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_6, /*hidden argument*/NULL);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_8 = ___pointerEvent1;
		EventSystem_SetSelectedGameObject_m7F0F2E78C18FD468E8B5083AFDA6E9D9364D3D5F(L_7, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, L_8, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// UnityEngine.EventSystems.PointerEventData TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::GetLastPointerEventData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * UIStandardInputModule_GetLastPointerEventData_m40B4EB1DF30123C99563D99F3D74C8D4EDBA5D60 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_0 = NULL;
	{
		// GetPointerData(id, out data, false);
		int32_t L_0 = ___id0;
		bool L_1;
		L_1 = UIStandardInputModule_GetPointerData_m04D86A1860BEF77090A0D302FC534EAB5F2E5EC1(__this, L_0, (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 **)(&V_0), (bool)0, /*hidden argument*/NULL);
		// return data;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_ShouldStartDrag_m62D5D05F1910044E2EFE84173682FB24359C6440 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pressPos0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentPos1, float ___threshold2, bool ___useDragThreshold3, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!useDragThreshold)
		bool L_0 = ___useDragThreshold3;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// return (pressPos - currentPos).sqrMagnitude >= threshold * threshold;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___pressPos0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___currentPos1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		float L_5 = ___threshold2;
		float L_6 = ___threshold2;
		return (bool)((((int32_t)((!(((float)L_4) >= ((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::SendUpdateEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_SendUpdateEventToSelectedObject_mEAA026FDD41EBF7E5762524D38C90E034AD03B0F (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIUpdateSelectedHandler_tD5D76B759B900C3F557E3CEC55F6E08EE6909806_mBFD650297AF62567370432ED0EC48C057FBA7C72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * V_0 = NULL;
	{
		// if (input.eventSystem.currentSelectedGameObject == null)
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_0 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1;
		L_1 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// var data = input.GetBaseEventData();
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_4 = __this->get_input_0();
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_5;
		L_5 = VirtFuncInvoker0< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, L_4);
		V_0 = L_5;
		// ExecuteEvents.Execute(input.eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_6 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_7;
		L_7 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_6, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_7, /*hidden argument*/NULL);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C * L_10;
		L_10 = ExecuteEvents_get_updateSelectedHandler_mA6B61ECA1F26501A2294B4EB06EBC2532E423891_inline(/*hidden argument*/NULL);
		bool L_11;
		L_11 = ExecuteEvents_Execute_TisIUpdateSelectedHandler_tD5D76B759B900C3F557E3CEC55F6E08EE6909806_mBFD650297AF62567370432ED0EC48C057FBA7C72(L_8, L_9, L_10, /*hidden argument*/ExecuteEvents_Execute_TisIUpdateSelectedHandler_tD5D76B759B900C3F557E3CEC55F6E08EE6909806_mBFD650297AF62567370432ED0EC48C057FBA7C72_RuntimeMethod_var);
		// return data.used;
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_12 = V_0;
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_12);
		return L_13;
	}
}
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::SendMoveEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_SendMoveEventToSelectedObject_mE11872AD627199062B23DCD1D2C74A7B918840C7 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIMoveHandler_t603A54D1EA15704B37D022CCE294EFE3F831559F_m0504DE3A83975304D129D6089B0608393E0C7AF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * V_4 = NULL;
	int32_t G_B6_0 = 0;
	{
		// float time = Time.unscaledTime;
		float L_0;
		L_0 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		V_0 = L_0;
		// Vector2 movement = GetRawMoveVector();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = UIStandardInputModule_GetRawMoveVector_m47AC3597C4020F02640B7BB705D29F87D8FEDEF6(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// if (Mathf.Approximately(movement.x, 0f) && Mathf.Approximately(movement.y, 0f))
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = V_1;
		float L_3 = L_2.get_x_0();
		bool L_4;
		L_4 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_3, (0.0f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_1;
		float L_6 = L_5.get_y_1();
		bool L_7;
		L_7 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_6, (0.0f), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// m_ConsecutiveMoveCount = 0;
		__this->set_m_ConsecutiveMoveCount_2(0);
		// return false;
		return (bool)0;
	}

IL_003a:
	{
		// bool allow = Input.GetButtonDown(input.HorizontalAxis) || Input.GetButtonDown(input.VerticalAxis);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_8 = __this->get_input_0();
		String_t* L_9 = L_8->get_HorizontalAxis_10();
		bool L_10;
		L_10 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005e;
		}
	}
	{
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_11 = __this->get_input_0();
		String_t* L_12 = L_11->get_VerticalAxis_11();
		bool L_13;
		L_13 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_12, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_13));
		goto IL_005f;
	}

IL_005e:
	{
		G_B6_0 = 1;
	}

IL_005f:
	{
		V_2 = (bool)G_B6_0;
		// bool similarDir = (Vector2.Dot(movement, m_LastMoveVector) > 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = __this->get_m_LastMoveVector_3();
		float L_16;
		L_16 = Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline(L_14, L_15, /*hidden argument*/NULL);
		V_3 = (bool)((((float)L_16) > ((float)(0.0f)))? 1 : 0);
		// if (!allow)
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_00b7;
		}
	}
	{
		// if (similarDir && m_ConsecutiveMoveCount == 1)
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_19 = __this->get_m_ConsecutiveMoveCount_2();
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		// allow = (time > m_PrevActionTime + input.RepeatDelay);
		float L_20 = V_0;
		float L_21 = __this->get_m_PrevActionTime_4();
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_22 = __this->get_input_0();
		float L_23 = L_22->get_RepeatDelay_15();
		V_2 = (bool)((((float)L_20) > ((float)((float)il2cpp_codegen_add((float)L_21, (float)L_23))))? 1 : 0);
		goto IL_00b7;
	}

IL_009b:
	{
		// allow = (time > m_PrevActionTime + 1f / input.InputActionsPerSecond);
		float L_24 = V_0;
		float L_25 = __this->get_m_PrevActionTime_4();
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_26 = __this->get_input_0();
		float L_27 = L_26->get_InputActionsPerSecond_14();
		V_2 = (bool)((((float)L_24) > ((float)((float)il2cpp_codegen_add((float)L_25, (float)((float)((float)(1.0f)/(float)L_27))))))? 1 : 0);
	}

IL_00b7:
	{
		// if (!allow)
		bool L_28 = V_2;
		if (L_28)
		{
			goto IL_00bc;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00bc:
	{
		// var axisEventData = input.GetAxisEventData(movement.x, movement.y, 0.6f);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_29 = __this->get_input_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_1;
		float L_31 = L_30.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_1;
		float L_33 = L_32.get_y_1();
		AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * L_34;
		L_34 = VirtFuncInvoker3< AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E *, float, float, float >::Invoke(18 /* UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single) */, L_29, L_31, L_33, (0.600000024f));
		V_4 = L_34;
		// if (axisEventData.moveDir != MoveDirection.None)
		AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * L_35 = V_4;
		int32_t L_36;
		L_36 = AxisEventData_get_moveDir_mEE3B3409B871B022C83343228C554D4CBA4FDB7C_inline(L_35, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)4)))
		{
			goto IL_0129;
		}
	}
	{
		// ExecuteEvents.Execute(input.eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_37 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_38;
		L_38 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_37, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_38, /*hidden argument*/NULL);
		AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * L_40 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD * L_41;
		L_41 = ExecuteEvents_get_moveHandler_mEA286929FEB1FF5040F9FA8913B5B819808F9F90_inline(/*hidden argument*/NULL);
		bool L_42;
		L_42 = ExecuteEvents_Execute_TisIMoveHandler_t603A54D1EA15704B37D022CCE294EFE3F831559F_m0504DE3A83975304D129D6089B0608393E0C7AF7(L_39, L_40, L_41, /*hidden argument*/ExecuteEvents_Execute_TisIMoveHandler_t603A54D1EA15704B37D022CCE294EFE3F831559F_m0504DE3A83975304D129D6089B0608393E0C7AF7_RuntimeMethod_var);
		// if (!similarDir)
		bool L_43 = V_3;
		if (L_43)
		{
			goto IL_010b;
		}
	}
	{
		// m_ConsecutiveMoveCount = 0;
		__this->set_m_ConsecutiveMoveCount_2(0);
	}

IL_010b:
	{
		// m_ConsecutiveMoveCount++;
		int32_t L_44 = __this->get_m_ConsecutiveMoveCount_2();
		__this->set_m_ConsecutiveMoveCount_2(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1)));
		// m_PrevActionTime = time;
		float L_45 = V_0;
		__this->set_m_PrevActionTime_4(L_45);
		// m_LastMoveVector = movement;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = V_1;
		__this->set_m_LastMoveVector_3(L_46);
		// }
		goto IL_0130;
	}

IL_0129:
	{
		// m_ConsecutiveMoveCount = 0;
		__this->set_m_ConsecutiveMoveCount_2(0);
	}

IL_0130:
	{
		// return axisEventData.used;
		AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * L_47 = V_4;
		bool L_48;
		L_48 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_47);
		return L_48;
	}
}
// System.Boolean TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::SendSubmitEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIStandardInputModule_SendSubmitEventToSelectedObject_m532DDF040F42C47DF78CDCC56F4171B5AC791D39 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisICancelHandler_t9288977907DA5B88ED40625672C05460E60752F8_m198C79464DD56A595A6161B19B78E5E2FD1044D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisISubmitHandler_t20677BB54F3FD568032702852052A70355A0D774_m85570C9153E80406C8213FBC08891128A51BB892_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * V_0 = NULL;
	{
		// if (input.eventSystem.currentSelectedGameObject == null)
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_0 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1;
		L_1 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001a:
	{
		// var data = input.GetBaseEventData();
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_4 = __this->get_input_0();
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_5;
		L_5 = VirtFuncInvoker0< BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, L_4);
		V_0 = L_5;
		// if (Input.GetButtonDown(input.SubmitButton))
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_6 = __this->get_input_0();
		String_t* L_7 = L_6->get_SubmitButton_12();
		bool L_8;
		L_8 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// ExecuteEvents.Execute(input.eventSystem.currentSelectedGameObject, data, ExecuteEvents.submitHandler);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_9 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_10;
		L_10 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_9, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_10, /*hidden argument*/NULL);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 * L_13;
		L_13 = ExecuteEvents_get_submitHandler_m6B589A2BEB9E2CF3BDAB2E39E1A67BF76B4D6095_inline(/*hidden argument*/NULL);
		bool L_14;
		L_14 = ExecuteEvents_Execute_TisISubmitHandler_t20677BB54F3FD568032702852052A70355A0D774_m85570C9153E80406C8213FBC08891128A51BB892(L_11, L_12, L_13, /*hidden argument*/ExecuteEvents_Execute_TisISubmitHandler_t20677BB54F3FD568032702852052A70355A0D774_m85570C9153E80406C8213FBC08891128A51BB892_RuntimeMethod_var);
	}

IL_0054:
	{
		// if (Input.GetButtonDown(input.CancelButton))
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_15 = __this->get_input_0();
		String_t* L_16 = L_15->get_CancelButton_13();
		bool L_17;
		L_17 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		// ExecuteEvents.Execute(input.eventSystem.currentSelectedGameObject, data, ExecuteEvents.cancelHandler);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_18 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_19;
		L_19 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_18, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_19, /*hidden argument*/NULL);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 * L_22;
		L_22 = ExecuteEvents_get_cancelHandler_m3DC78C07BF9678E9DF9064D9BC987E9F1FA221C8_inline(/*hidden argument*/NULL);
		bool L_23;
		L_23 = ExecuteEvents_Execute_TisICancelHandler_t9288977907DA5B88ED40625672C05460E60752F8_m198C79464DD56A595A6161B19B78E5E2FD1044D9(L_20, L_21, L_22, /*hidden argument*/ExecuteEvents_Execute_TisICancelHandler_t9288977907DA5B88ED40625672C05460E60752F8_m198C79464DD56A595A6161B19B78E5E2FD1044D9_RuntimeMethod_var);
	}

IL_0082:
	{
		// return data.used;
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_24 = V_0;
		bool L_25;
		L_25 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_24);
		return L_25;
	}
}
// UnityEngine.Vector2 TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::GetRawMoveVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UIStandardInputModule_GetRawMoveVector_m47AC3597C4020F02640B7BB705D29F87D8FEDEF6 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 move = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// move.x = Input.GetAxisRaw(input.HorizontalAxis);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_1 = __this->get_input_0();
		String_t* L_2 = L_1->get_HorizontalAxis_10();
		float L_3;
		L_3 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(L_2, /*hidden argument*/NULL);
		(&V_0)->set_x_0(L_3);
		// move.y = Input.GetAxisRaw(input.VerticalAxis);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_4 = __this->get_input_0();
		String_t* L_5 = L_4->get_VerticalAxis_11();
		float L_6;
		L_6 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(L_5, /*hidden argument*/NULL);
		(&V_0)->set_y_1(L_6);
		// if (Input.GetButtonDown(input.HorizontalAxis))
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_7 = __this->get_input_0();
		String_t* L_8 = L_7->get_HorizontalAxis_10();
		bool L_9;
		L_9 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		// if (move.x < 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		float L_11 = L_10.get_x_0();
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		// move.x = -1f;
		(&V_0)->set_x_0((-1.0f));
	}

IL_005f:
	{
		// if (move.x > 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_0;
		float L_13 = L_12.get_x_0();
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// move.x = 1f;
		(&V_0)->set_x_0((1.0f));
	}

IL_0078:
	{
		// if (Input.GetButtonDown(input.VerticalAxis))
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_14 = __this->get_input_0();
		String_t* L_15 = L_14->get_VerticalAxis_11();
		bool L_16;
		L_16 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bc;
		}
	}
	{
		// if (move.y < 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		float L_18 = L_17.get_y_1();
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		// move.y = -1f;
		(&V_0)->set_y_1((-1.0f));
	}

IL_00a3:
	{
		// if (move.y > 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_0;
		float L_20 = L_19.get_y_1();
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_00bc;
		}
	}
	{
		// move.y = 1f;
		(&V_0)->set_y_1((1.0f));
	}

IL_00bc:
	{
		// return move;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_0;
		return L_21;
	}
}
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_Process_m2213DBC79A409EB5B0500B16B5014DD3B9B3E6A7 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool usedEvent = SendUpdateEventToSelectedObject();
		bool L_0;
		L_0 = UIStandardInputModule_SendUpdateEventToSelectedObject_mEAA026FDD41EBF7E5762524D38C90E034AD03B0F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (input.eventSystem.sendNavigationEvents)
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_1 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2;
		L_2 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = EventSystem_get_sendNavigationEvents_m6577B15136A3AAE95673BBE20109F12C4BB2D023_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// if (!usedEvent)
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		// usedEvent |= SendMoveEventToSelectedObject();
		bool L_5 = V_0;
		bool L_6;
		L_6 = UIStandardInputModule_SendMoveEventToSelectedObject_mE11872AD627199062B23DCD1D2C74A7B918840C7(__this, /*hidden argument*/NULL);
		V_0 = (bool)((int32_t)((int32_t)L_5|(int32_t)L_6));
	}

IL_0025:
	{
		// if (!usedEvent)
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		// SendSubmitEventToSelectedObject();
		bool L_8;
		L_8 = UIStandardInputModule_SendSubmitEventToSelectedObject_m532DDF040F42C47DF78CDCC56F4171B5AC791D39(__this, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::RemovePointerData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_RemovePointerData_mC0070394962968B82467BC7CF8EFF2DE05FF225F (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mE9C5ED7783AAC1B89224E1AF553DCA9E4B96679A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PointerData.Remove(id);
		Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * L_0 = __this->get_m_PointerData_5();
		int32_t L_1 = ___id0;
		bool L_2;
		L_2 = Dictionary_2_Remove_mE9C5ED7783AAC1B89224E1AF553DCA9E4B96679A(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_mE9C5ED7783AAC1B89224E1AF553DCA9E4B96679A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::convertRaycast(TouchScript.Hit.RaycastHitUI,UnityEngine.EventSystems.RaycastResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_convertRaycast_mAC2E3FF8D9D4FC6AC8D8F5302A94E0AE8C378259 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  ___old0, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * ___current1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * G_B2_0 = NULL;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * G_B1_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * G_B3_1 = NULL;
	{
		// current.module = old.Raycaster;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_0 = ___current1;
		RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  L_1 = ___old0;
		BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * L_2 = L_1.get_Raycaster_1();
		L_0->set_module_1(L_2);
		// current.gameObject = old.Target == null ? null : old.Target.gameObject;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_3 = ___current1;
		RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  L_4 = ___old0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_4.get_Target_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_3;
		if (L_6)
		{
			G_B2_0 = L_3;
			goto IL_0028;
		}
	}
	{
		RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  L_7 = ___old0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7.get_Target_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		RaycastResult_set_gameObject_m3A1B023B578A8142A437B0C27AAE045DED6AAA20_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// current.depth = old.Depth;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_10 = ___current1;
		RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  L_11 = ___old0;
		int32_t L_12 = L_11.get_Depth_3();
		L_10->set_depth_4(L_12);
		// current.index = old.GraphicIndex;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_13 = ___current1;
		RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  L_14 = ___old0;
		int32_t L_15 = L_14.get_GraphicIndex_2();
		L_13->set_index_3(((float)((float)L_15)));
		// current.sortingLayer = old.SortingLayer;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_16 = ___current1;
		RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  L_17 = ___old0;
		int32_t L_18 = L_17.get_SortingLayer_4();
		L_16->set_sortingLayer_5(L_18);
		// current.sortingOrder = old.SortingOrder;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_19 = ___current1;
		RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  L_20 = ___old0;
		int32_t L_21 = L_20.get_SortingOrder_5();
		L_19->set_sortingOrder_6(L_21);
		// }
		return;
	}
}
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::ProcessUpdated(System.Object,TouchScript.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_ProcessUpdated_mB34B440AC497B6BE282D6D18E1DBA05B872CFF3C (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, RuntimeObject * ___sender0, PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * ___pointerEventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_m9A7CDD374FDCD7D5FCF1E1F91DE2458B86A22069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_mCA6F9E32CFBC40460751C2A05C463AF7C5CDE0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mA661CB69E2CA9AF862894036847115E9825F48D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_mAC9DF9D93BF477348C4D0C918293847319BD04E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * V_4 = NULL;
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_6 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_7 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_8 = NULL;
	bool V_9 = false;
	MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B * V_10 = NULL;
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_12;
	memset((&V_12), 0, sizeof(V_12));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B7_0 = NULL;
	{
		// var pointers = pointerEventArgs.Pointers;
		PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * L_0 = ___pointerEventArgs1;
		RuntimeObject* L_1;
		L_1 = PointerEventArgs_get_Pointers_m42550633F7D17F8698C95490CB2ECD6051746CD7_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var raycast = new RaycastResult();
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// var count = pointers.Count;
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.Pointers.Pointer>::get_Count() */, ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
		// for (var i = 0; i < count; i++)
		V_3 = 0;
		goto IL_0220;
	}

IL_001d:
	{
		// var pointer = pointers[i];
		RuntimeObject* L_4 = V_0;
		int32_t L_5 = V_3;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_6;
		L_6 = InterfaceFuncInvoker1< Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>::get_Item(System.Int32) */, IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var, L_4, L_5);
		V_4 = L_6;
		// if ((pointer.Buttons & Pointer.PointerButtonState.AnyButtonPressed) > 0)
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_7 = V_4;
		int32_t L_8;
		L_8 = Pointer_get_Buttons_mF086BE54F232C26195D85A878BF79DF2CA5324DF_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// var press = pointer.GetPressData();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_9 = V_4;
		HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  L_10;
		L_10 = Pointer_GetPressData_mEBDE2A1EF35C622247FE94D7A7D67C3EF510E384_inline(L_9, /*hidden argument*/NULL);
		V_11 = L_10;
		// if (press.Type != HitData.HitType.UI) continue;
		int32_t L_11;
		L_11 = HitData_get_Type_m4F3E6C3C75C4C632944A1A73356D5AC0B7F9B09F_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_11), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_021c;
		}
	}

IL_0049:
	{
		// var over = pointer.GetOverData();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_12 = V_4;
		HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  L_13;
		L_13 = Pointer_GetOverData_mBA01649B10072200A7C812BEFF814B094A7466B9(L_12, (bool)0, /*hidden argument*/NULL);
		V_5 = L_13;
		// if (over.Type != HitData.HitType.UI) continue;
		int32_t L_14;
		L_14 = HitData_get_Type_m4F3E6C3C75C4C632944A1A73356D5AC0B7F9B09F_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_5), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_021c;
		}
	}
	{
		// GetPointerData(pointer.Id, out data, true);
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_15 = V_4;
		int32_t L_16;
		L_16 = Pointer_get_Id_m0D7215B40F4759E2E7F3261DBB1484C7530C060C_inline(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = UIStandardInputModule_GetPointerData_m04D86A1860BEF77090A0D302FC534EAB5F2E5EC1(__this, L_16, (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 **)(&V_6), (bool)1, /*hidden argument*/NULL);
		// data.Reset();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_18 = V_6;
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.EventSystems.AbstractEventData::Reset() */, L_18);
		// var target = over.Target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = HitData_get_Target_mDCBC396875ED34440B0C5F8D8B2C27BFCA4A7B0B_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_5), /*hidden argument*/NULL);
		V_7 = L_19;
		// var currentOverGo = target == null ? null : target.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0094;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = V_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		G_B7_0 = L_23;
		goto IL_0095;
	}

IL_0094:
	{
		G_B7_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
	}

IL_0095:
	{
		V_8 = G_B7_0;
		// data.position = pointer.Position;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_24 = V_6;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_25 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Pointer_get_Position_m4E72C345860B25642E55A7BAFE830F2DDD7027B4_inline(L_25, /*hidden argument*/NULL);
		PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline(L_24, L_26, /*hidden argument*/NULL);
		// data.delta = pointer.Position - pointer.PreviousPosition;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_27 = V_6;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_28 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Pointer_get_Position_m4E72C345860B25642E55A7BAFE830F2DDD7027B4_inline(L_28, /*hidden argument*/NULL);
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_30 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Pointer_get_PreviousPosition_mBC5A988DF9BD295CA0034BFF5E6526BBC188D43B_inline(L_30, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_29, L_31, /*hidden argument*/NULL);
		PointerEventData_set_delta_m30E0BE702A57A13FEA52CA55D4B29DDE66931261_inline(L_27, L_32, /*hidden argument*/NULL);
		// convertRaycast(over.RaycastHitUI, ref raycast);
		RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  L_33;
		L_33 = HitData_get_RaycastHitUI_m46041A06F4A3347C96EFDD9DF6F7C10E78A0E05F_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_5), /*hidden argument*/NULL);
		UIStandardInputModule_convertRaycast_mAC2E3FF8D9D4FC6AC8D8F5302A94E0AE8C378259(__this, L_33, (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_1), /*hidden argument*/NULL);
		// raycast.screenPosition = data.position;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_34 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_34, /*hidden argument*/NULL);
		(&V_1)->set_screenPosition_9(L_35);
		// data.pointerCurrentRaycast = raycast;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_36 = V_6;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_37 = V_1;
		PointerEventData_set_pointerCurrentRaycast_m16C21C39E7763E52ABE4485B4171FC4DF2A2A6BC_inline(L_36, L_37, /*hidden argument*/NULL);
		// input.HandlePointerExitAndEnter(data, currentOverGo);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_38 = __this->get_input_0();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_39 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_8;
		BaseInputModule_HandlePointerExitAndEnter_mC94EE79B9295384EF83DAABA1FB5EF1146DF969F(L_38, L_39, L_40, /*hidden argument*/NULL);
		// bool moving = data.IsPointerMoving();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_41 = V_6;
		bool L_42;
		L_42 = PointerEventData_IsPointerMoving_m4D3F38B1E1DA05DF39C98D39F1355A0456C84923(L_41, /*hidden argument*/NULL);
		V_9 = L_42;
		// if (moving && data.pointerDrag != null
		//     && !data.dragging
		//     && ShouldStartDrag(data.pressPosition, data.position, input.eventSystem.pixelDragThreshold, data.useDragThreshold))
		bool L_43 = V_9;
		if (!L_43)
		{
			goto IL_0161;
		}
	}
	{
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_44 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0161;
		}
	}
	{
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_47 = V_6;
		bool L_48;
		L_48 = PointerEventData_get_dragging_m7FD3F5D4D8DAC559A57EDB88F2B2B5DEA4B48266_inline(L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0161;
		}
	}
	{
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_49 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = PointerEventData_get_pressPosition_mB8F60EB21F6E6892EC731382614BAB85E29ED642_inline(L_49, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_51 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52;
		L_52 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_51, /*hidden argument*/NULL);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_53 = __this->get_input_0();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_54;
		L_54 = BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline(L_53, /*hidden argument*/NULL);
		int32_t L_55;
		L_55 = EventSystem_get_pixelDragThreshold_mE6BC245DF53C04B06DCDF7663BF40087696D793A_inline(L_54, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_56 = V_6;
		bool L_57;
		L_57 = PointerEventData_get_useDragThreshold_m683F708E7E5F8351D8DD354A3B2CA9B290683BEE_inline(L_56, /*hidden argument*/NULL);
		bool L_58;
		L_58 = UIStandardInputModule_ShouldStartDrag_m62D5D05F1910044E2EFE84173682FB24359C6440(L_50, L_52, ((float)((float)L_55)), L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0161;
		}
	}
	{
		// ExecuteEvents.Execute(data.pointerDrag, data, ExecuteEvents.beginDragHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_59 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60;
		L_60 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_59, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_61 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 * L_62;
		L_62 = ExecuteEvents_get_beginDragHandler_mB0F124732A2AA52CFCE805209E45FED043ECF2DF_inline(/*hidden argument*/NULL);
		bool L_63;
		L_63 = ExecuteEvents_Execute_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_mCA6F9E32CFBC40460751C2A05C463AF7C5CDE0C8(L_60, L_61, L_62, /*hidden argument*/ExecuteEvents_Execute_TisIBeginDragHandler_t4E56AE6FAF31231197A8E628909B23D962F4586E_mCA6F9E32CFBC40460751C2A05C463AF7C5CDE0C8_RuntimeMethod_var);
		// data.dragging = true;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_64 = V_6;
		PointerEventData_set_dragging_mEB739C44F1B1848B4B3F4E7FBB9B376587C2C7E1_inline(L_64, (bool)1, /*hidden argument*/NULL);
	}

IL_0161:
	{
		// if (data.dragging && moving && data.pointerDrag != null)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_65 = V_6;
		bool L_66;
		L_66 = PointerEventData_get_dragging_m7FD3F5D4D8DAC559A57EDB88F2B2B5DEA4B48266_inline(L_65, /*hidden argument*/NULL);
		bool L_67 = V_9;
		if (!((int32_t)((int32_t)L_66&(int32_t)L_67)))
		{
			goto IL_01d1;
		}
	}
	{
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_68 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_69, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_01d1;
		}
	}
	{
		// if (data.pointerPress != data.pointerDrag)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_71 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72;
		L_72 = PointerEventData_get_pointerPress_mB55C5528AF445DB7B912086E43F0BCD9CDFF409C_inline(L_71, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_73 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74;
		L_74 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_72, L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_01bd;
		}
	}
	{
		// ExecuteEvents.Execute(data.pointerPress, data, ExecuteEvents.pointerUpHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_76 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77;
		L_77 = PointerEventData_get_pointerPress_mB55C5528AF445DB7B912086E43F0BCD9CDFF409C_inline(L_76, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_78 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * L_79;
		L_79 = ExecuteEvents_get_pointerUpHandler_m9E843EA7C17EDBEFF9F3003FAEEA4FB644562E67_inline(/*hidden argument*/NULL);
		bool L_80;
		L_80 = ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91(L_77, L_78, L_79, /*hidden argument*/ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91_RuntimeMethod_var);
		// data.eligibleForClick = false;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_81 = V_6;
		PointerEventData_set_eligibleForClick_m5CFAF671C2B33AF8E9153FA4826D93B9308C4C07_inline(L_81, (bool)0, /*hidden argument*/NULL);
		// data.pointerPress = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_82 = V_6;
		PointerEventData_set_pointerPress_mF37D23566DDB326EB2CFE59592F8538F23BA0EC0(L_82, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// data.rawPointerPress = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_83 = V_6;
		PointerEventData_set_rawPointerPress_m0BEEB9CA5E44F570C2C0803553BA9736F4DF58F0_inline(L_83, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
	}

IL_01bd:
	{
		// ExecuteEvents.Execute(data.pointerDrag, data, ExecuteEvents.dragHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_84 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85;
		L_85 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_84, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_86 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E * L_87;
		L_87 = ExecuteEvents_get_dragHandler_m641349957A945DA8FEF7DDA58260469EC20DC84C_inline(/*hidden argument*/NULL);
		bool L_88;
		L_88 = ExecuteEvents_Execute_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mA661CB69E2CA9AF862894036847115E9825F48D3(L_85, L_86, L_87, /*hidden argument*/ExecuteEvents_Execute_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mA661CB69E2CA9AF862894036847115E9825F48D3_RuntimeMethod_var);
	}

IL_01d1:
	{
		// var mousePointer = pointer as MousePointer;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_89 = V_4;
		V_10 = ((MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B *)IsInstClass((RuntimeObject*)L_89, MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B_il2cpp_TypeInfo_var));
		// if (mousePointer != null && !Mathf.Approximately(mousePointer.ScrollDelta.sqrMagnitude, 0.0f))
		MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B * L_90 = V_10;
		if (!L_90)
		{
			goto IL_021c;
		}
	}
	{
		MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B * L_91 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_92;
		L_92 = MousePointer_get_ScrollDelta_mC3F557B38D03EC1EFFC8610C47F084AC2506554A_inline(L_91, /*hidden argument*/NULL);
		V_12 = L_92;
		float L_93;
		L_93 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_12), /*hidden argument*/NULL);
		bool L_94;
		L_94 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_93, (0.0f), /*hidden argument*/NULL);
		if (L_94)
		{
			goto IL_021c;
		}
	}
	{
		// data.scrollDelta = mousePointer.ScrollDelta;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_95 = V_6;
		MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B * L_96 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_97;
		L_97 = MousePointer_get_ScrollDelta_mC3F557B38D03EC1EFFC8610C47F084AC2506554A_inline(L_96, /*hidden argument*/NULL);
		PointerEventData_set_scrollDelta_m3ECB852D4D953D59C617DF0FE9E44B0EEF8AEA13_inline(L_95, L_97, /*hidden argument*/NULL);
		// var scrollHandler = ExecuteEvents.GetEventHandler<IScrollHandler>(currentOverGo);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_98 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99;
		L_99 = ExecuteEvents_GetEventHandler_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_mAC9DF9D93BF477348C4D0C918293847319BD04E1(L_98, /*hidden argument*/ExecuteEvents_GetEventHandler_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_mAC9DF9D93BF477348C4D0C918293847319BD04E1_RuntimeMethod_var);
		// ExecuteEvents.ExecuteHierarchy(scrollHandler, data, ExecuteEvents.scrollHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_100 = V_6;
		EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF * L_101;
		L_101 = ExecuteEvents_get_scrollHandler_m4C8DF1B6D5EC3243AFE2EAEA87BAE72E87AB6456_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102;
		L_102 = ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_m9A7CDD374FDCD7D5FCF1E1F91DE2458B86A22069(L_99, L_100, L_101, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t5AB554ABD3C72CC8CA80EA99B069D902F383D0B1_m9A7CDD374FDCD7D5FCF1E1F91DE2458B86A22069_RuntimeMethod_var);
	}

IL_021c:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_103 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_0220:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_104 = V_3;
		int32_t L_105 = V_2;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::ProcessPressed(System.Object,TouchScript.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_ProcessPressed_mD4705B19EA57582FA578352FB9DE0B81F5302212 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, RuntimeObject * ___sender0, PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * ___pointerEventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_tD8B28A09D1D5F93DAB6905DE3890FC73E6DF1E0C_m85F0FBE1A24E6569B49441102862CB6A96563E5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m41B2C8664EE6E01D2D569C0EB09200D3FB172A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mFA11ACE98FA239AFB5E9CF1A9C95284D3F12E8F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m07A94374DDEDD87BB9A9B5A869150F0C5A8722DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * V_3 = NULL;
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_5 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_6 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_7 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_8 = NULL;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	{
		// var pointers = pointerEventArgs.Pointers;
		PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * L_0 = ___pointerEventArgs1;
		RuntimeObject* L_1;
		L_1 = PointerEventArgs_get_Pointers_m42550633F7D17F8698C95490CB2ECD6051746CD7_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var count = pointers.Count;
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.Pointers.Pointer>::get_Count() */, ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		// for (var i = 0; i < count; i++)
		V_2 = 0;
		goto IL_019e;
	}

IL_0015:
	{
		// var pointer = pointers[i];
		RuntimeObject* L_4 = V_0;
		int32_t L_5 = V_2;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_6;
		L_6 = InterfaceFuncInvoker1< Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>::get_Item(System.Int32) */, IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var, L_4, L_5);
		V_3 = L_6;
		// var over = pointer.GetOverData();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_7 = V_3;
		HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  L_8;
		L_8 = Pointer_GetOverData_mBA01649B10072200A7C812BEFF814B094A7466B9(L_7, (bool)0, /*hidden argument*/NULL);
		V_4 = L_8;
		// if (over.Type != HitData.HitType.UI) continue;
		int32_t L_9;
		L_9 = HitData_get_Type_m4F3E6C3C75C4C632944A1A73356D5AC0B7F9B09F_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)4))))
		{
			goto IL_019a;
		}
	}
	{
		// GetPointerData(pointer.Id, out data, true);
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_10 = V_3;
		int32_t L_11;
		L_11 = Pointer_get_Id_m0D7215B40F4759E2E7F3261DBB1484C7530C060C_inline(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = UIStandardInputModule_GetPointerData_m04D86A1860BEF77090A0D302FC534EAB5F2E5EC1(__this, L_11, (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 **)(&V_5), (bool)1, /*hidden argument*/NULL);
		// var target = over.Target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = HitData_get_Target_mDCBC396875ED34440B0C5F8D8B2C27BFCA4A7B0B_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_4), /*hidden argument*/NULL);
		V_6 = L_13;
		// var currentOverGo = target == null ? null : target.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_005f;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		G_B5_0 = L_17;
		goto IL_0060;
	}

IL_005f:
	{
		G_B5_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
	}

IL_0060:
	{
		V_7 = G_B5_0;
		// data.eligibleForClick = true;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_18 = V_5;
		PointerEventData_set_eligibleForClick_m5CFAF671C2B33AF8E9153FA4826D93B9308C4C07_inline(L_18, (bool)1, /*hidden argument*/NULL);
		// data.delta = Vector2.zero;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_19 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		PointerEventData_set_delta_m30E0BE702A57A13FEA52CA55D4B29DDE66931261_inline(L_19, L_20, /*hidden argument*/NULL);
		// data.dragging = false;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_21 = V_5;
		PointerEventData_set_dragging_mEB739C44F1B1848B4B3F4E7FBB9B376587C2C7E1_inline(L_21, (bool)0, /*hidden argument*/NULL);
		// data.useDragThreshold = true;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_22 = V_5;
		PointerEventData_set_useDragThreshold_m146893D383B122225651D7882A6998FFB4274C85_inline(L_22, (bool)1, /*hidden argument*/NULL);
		// data.pressPosition = pointer.Position;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_23 = V_5;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_24 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Pointer_get_Position_m4E72C345860B25642E55A7BAFE830F2DDD7027B4_inline(L_24, /*hidden argument*/NULL);
		PointerEventData_set_pressPosition_mE644EE1603DFF2087224FF6364EA0204D04D7939_inline(L_23, L_25, /*hidden argument*/NULL);
		// data.pointerPressRaycast = data.pointerCurrentRaycast;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_26 = V_5;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_27 = V_5;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_28;
		L_28 = PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline(L_27, /*hidden argument*/NULL);
		PointerEventData_set_pointerPressRaycast_mAF28B12216468A02DACA9900B0A57FA1BF3B94F4_inline(L_26, L_28, /*hidden argument*/NULL);
		// DeselectIfSelectionChanged(currentOverGo, data);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_7;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_30 = V_5;
		UIStandardInputModule_DeselectIfSelectionChanged_m78394F4A59843A87487B121BC1CE7E2B6726EC56(__this, L_29, L_30, /*hidden argument*/NULL);
		// if (data.pointerEnter != currentOverGo)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_31 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = PointerEventData_get_pointerEnter_m6F16C8962F195BB6ED58150986AEF584E4B979CB_inline(L_31, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00d3;
		}
	}
	{
		// input.HandlePointerExitAndEnter(data, currentOverGo);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_35 = __this->get_input_0();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_36 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_7;
		BaseInputModule_HandlePointerExitAndEnter_mC94EE79B9295384EF83DAABA1FB5EF1146DF969F(L_35, L_36, L_37, /*hidden argument*/NULL);
		// data.pointerEnter = currentOverGo;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_38 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_7;
		PointerEventData_set_pointerEnter_mA547F8B280EA1AE5DE27EB5FF14AC3CF156A86D1_inline(L_38, L_39, /*hidden argument*/NULL);
	}

IL_00d3:
	{
		// var newPressed = ExecuteEvents.ExecuteHierarchy(currentOverGo, data, ExecuteEvents.pointerDownHandler);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_7;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_41 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C * L_42;
		L_42 = ExecuteEvents_get_pointerDownHandler_m9C9261D6CAB8B6DB61C1165F28B52A3EC1F84C3A_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_tD8B28A09D1D5F93DAB6905DE3890FC73E6DF1E0C_m85F0FBE1A24E6569B49441102862CB6A96563E5C(L_40, L_41, L_42, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_tD8B28A09D1D5F93DAB6905DE3890FC73E6DF1E0C_m85F0FBE1A24E6569B49441102862CB6A96563E5C_RuntimeMethod_var);
		V_8 = L_43;
		// if (newPressed == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_44, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_00f6;
		}
	}
	{
		// newPressed = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m07A94374DDEDD87BB9A9B5A869150F0C5A8722DA(L_46, /*hidden argument*/ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m07A94374DDEDD87BB9A9B5A869150F0C5A8722DA_RuntimeMethod_var);
		V_8 = L_47;
	}

IL_00f6:
	{
		// float time = Time.unscaledTime;
		float L_48;
		L_48 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		V_9 = L_48;
		// if (newPressed == data.lastPress) // ?
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = V_8;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_50 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = PointerEventData_get_lastPress_m362C5876B8C9F50BACC27D9026DB3709D6950C0B_inline(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_49, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0146;
		}
	}
	{
		// var diffTime = time - data.clickTime;
		float L_53 = V_9;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_54 = V_5;
		float L_55;
		L_55 = PointerEventData_get_clickTime_m08F7FD164EFE2AE7B47A15C70BC418632B9E5950_inline(L_54, /*hidden argument*/NULL);
		// if (diffTime < 0.3f)
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_53, (float)L_55))) < ((float)(0.300000012f)))))
		{
			goto IL_0133;
		}
	}
	{
		// ++data.clickCount;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_56 = V_5;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_57 = L_56;
		int32_t L_58;
		L_58 = PointerEventData_get_clickCount_mB44AAB99335BD7D2BD93E40DAC282A56202E44F2_inline(L_57, /*hidden argument*/NULL);
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		int32_t L_59 = V_10;
		PointerEventData_set_clickCount_m2EAAB7F43CE26BF505B7FCF7D509C988DCFD7F28_inline(L_57, L_59, /*hidden argument*/NULL);
		goto IL_013b;
	}

IL_0133:
	{
		// data.clickCount = 1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_60 = V_5;
		PointerEventData_set_clickCount_m2EAAB7F43CE26BF505B7FCF7D509C988DCFD7F28_inline(L_60, 1, /*hidden argument*/NULL);
	}

IL_013b:
	{
		// data.clickTime = time;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_61 = V_5;
		float L_62 = V_9;
		PointerEventData_set_clickTime_m215E254F8585FFC518E3161FAF9137388F64AC58_inline(L_61, L_62, /*hidden argument*/NULL);
		// }
		goto IL_014e;
	}

IL_0146:
	{
		// data.clickCount = 1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_63 = V_5;
		PointerEventData_set_clickCount_m2EAAB7F43CE26BF505B7FCF7D509C988DCFD7F28_inline(L_63, 1, /*hidden argument*/NULL);
	}

IL_014e:
	{
		// data.pointerPress = newPressed;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_64 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = V_8;
		PointerEventData_set_pointerPress_mF37D23566DDB326EB2CFE59592F8538F23BA0EC0(L_64, L_65, /*hidden argument*/NULL);
		// data.rawPointerPress = currentOverGo;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_66 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = V_7;
		PointerEventData_set_rawPointerPress_m0BEEB9CA5E44F570C2C0803553BA9736F4DF58F0_inline(L_66, L_67, /*hidden argument*/NULL);
		// data.clickTime = time;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_68 = V_5;
		float L_69 = V_9;
		PointerEventData_set_clickTime_m215E254F8585FFC518E3161FAF9137388F64AC58_inline(L_68, L_69, /*hidden argument*/NULL);
		// data.pointerDrag = ExecuteEvents.GetEventHandler<IDragHandler>(currentOverGo);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_70 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72;
		L_72 = ExecuteEvents_GetEventHandler_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mFA11ACE98FA239AFB5E9CF1A9C95284D3F12E8F8(L_71, /*hidden argument*/ExecuteEvents_GetEventHandler_TisIDragHandler_t8C234934FE04088749A83D51BE49D1DDBD53350F_mFA11ACE98FA239AFB5E9CF1A9C95284D3F12E8F8_RuntimeMethod_var);
		PointerEventData_set_pointerDrag_m2E9F059EC1CDF71E0A097A0D3CCBA564E0C463C2_inline(L_70, L_72, /*hidden argument*/NULL);
		// if (data.pointerDrag != null)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_73 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74;
		L_74 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_74, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_019a;
		}
	}
	{
		// ExecuteEvents.Execute(data.pointerDrag, data, ExecuteEvents.initializePotentialDrag);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_76 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77;
		L_77 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_76, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA * L_79;
		L_79 = ExecuteEvents_get_initializePotentialDrag_m726CADE4F0D36D5A2699A9CD02699116D34C799A_inline(/*hidden argument*/NULL);
		bool L_80;
		L_80 = ExecuteEvents_Execute_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m41B2C8664EE6E01D2D569C0EB09200D3FB172A5D(L_77, L_78, L_79, /*hidden argument*/ExecuteEvents_Execute_TisIInitializePotentialDragHandler_t6D9DBECDA3908EE39728449AA0CB2D314B43A0E3_m41B2C8664EE6E01D2D569C0EB09200D3FB172A5D_RuntimeMethod_var);
	}

IL_019a:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_019e:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_82 = V_2;
		int32_t L_83 = V_1;
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::ProcessReleased(System.Object,TouchScript.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_ProcessReleased_m004855806DC0956FE65BA48BF83C3A05BCE379DC (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, RuntimeObject * ___sender0, PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * ___pointerEventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t4C6C44AF24CF3830774D87C0F4326DD208882F09_m2EC13CE27119899D978C098DE2D7992FFCFE21A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mD0EAD259C83B2289D29ABC4AEC5A4639CEA75D01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m008259182237138FF111EC7A20CE559CBE1B67C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m07A94374DDEDD87BB9A9B5A869150F0C5A8722DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * V_3 = NULL;
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_6 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_7 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_8 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_9 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	{
		// var pointers = pointerEventArgs.Pointers;
		PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * L_0 = ___pointerEventArgs1;
		RuntimeObject* L_1;
		L_1 = PointerEventArgs_get_Pointers_m42550633F7D17F8698C95490CB2ECD6051746CD7_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var count = pointers.Count;
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.Pointers.Pointer>::get_Count() */, ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		// for (var i = 0; i < count; i++)
		V_2 = 0;
		goto IL_017e;
	}

IL_0015:
	{
		// var pointer = pointers[i];
		RuntimeObject* L_4 = V_0;
		int32_t L_5 = V_2;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_6;
		L_6 = InterfaceFuncInvoker1< Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>::get_Item(System.Int32) */, IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var, L_4, L_5);
		V_3 = L_6;
		// var press = pointer.GetPressData();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_7 = V_3;
		HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  L_8;
		L_8 = Pointer_GetPressData_mEBDE2A1EF35C622247FE94D7A7D67C3EF510E384_inline(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		// if (press.Type != HitData.HitType.UI) continue;
		int32_t L_9;
		L_9 = HitData_get_Type_m4F3E6C3C75C4C632944A1A73356D5AC0B7F9B09F_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)4))))
		{
			goto IL_017a;
		}
	}
	{
		// var over = pointer.GetOverData();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_10 = V_3;
		HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  L_11;
		L_11 = Pointer_GetOverData_mBA01649B10072200A7C812BEFF814B094A7466B9(L_10, (bool)0, /*hidden argument*/NULL);
		V_5 = L_11;
		// GetPointerData(pointer.Id, out data, true);
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_12 = V_3;
		int32_t L_13;
		L_13 = Pointer_get_Id_m0D7215B40F4759E2E7F3261DBB1484C7530C060C_inline(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = UIStandardInputModule_GetPointerData_m04D86A1860BEF77090A0D302FC534EAB5F2E5EC1(__this, L_13, (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 **)(&V_6), (bool)1, /*hidden argument*/NULL);
		// var target = over.Target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = HitData_get_Target_mDCBC396875ED34440B0C5F8D8B2C27BFCA4A7B0B_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_5), /*hidden argument*/NULL);
		V_7 = L_15;
		// var currentOverGo = target == null ? null : target.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0067;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = V_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		G_B5_0 = L_19;
		goto IL_0068;
	}

IL_0067:
	{
		G_B5_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
	}

IL_0068:
	{
		V_8 = G_B5_0;
		// ExecuteEvents.Execute(data.pointerPress, data, ExecuteEvents.pointerUpHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_20 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = PointerEventData_get_pointerPress_mB55C5528AF445DB7B912086E43F0BCD9CDFF409C_inline(L_20, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_22 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * L_23;
		L_23 = ExecuteEvents_get_pointerUpHandler_m9E843EA7C17EDBEFF9F3003FAEEA4FB644562E67_inline(/*hidden argument*/NULL);
		bool L_24;
		L_24 = ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91(L_21, L_22, L_23, /*hidden argument*/ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91_RuntimeMethod_var);
		// var pointerUpHandler = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m07A94374DDEDD87BB9A9B5A869150F0C5A8722DA(L_25, /*hidden argument*/ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m07A94374DDEDD87BB9A9B5A869150F0C5A8722DA_RuntimeMethod_var);
		V_9 = L_26;
		// if (data.pointerPress == pointerUpHandler && data.eligibleForClick)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_27 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = PointerEventData_get_pointerPress_mB55C5528AF445DB7B912086E43F0BCD9CDFF409C_inline(L_27, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00b6;
		}
	}
	{
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_31 = V_6;
		bool L_32;
		L_32 = PointerEventData_get_eligibleForClick_mEE3ADEFAD3CF5BCBBAC695A1974870E9F3781AA7_inline(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00b6;
		}
	}
	{
		// ExecuteEvents.Execute(data.pointerPress, data, ExecuteEvents.pointerClickHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_33 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = PointerEventData_get_pointerPress_mB55C5528AF445DB7B912086E43F0BCD9CDFF409C_inline(L_33, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_35 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 * L_36;
		L_36 = ExecuteEvents_get_pointerClickHandler_m8D0C77485F58F6FA716E739DB2594DF069530EBB_inline(/*hidden argument*/NULL);
		bool L_37;
		L_37 = ExecuteEvents_Execute_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m008259182237138FF111EC7A20CE559CBE1B67C2(L_34, L_35, L_36, /*hidden argument*/ExecuteEvents_Execute_TisIPointerClickHandler_t57AF4E82BAF414DDFD2F2D4E7833C97AE881591A_m008259182237138FF111EC7A20CE559CBE1B67C2_RuntimeMethod_var);
		// }
		goto IL_00dd;
	}

IL_00b6:
	{
		// else if (data.pointerDrag != null && data.dragging)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_38 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_39, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00dd;
		}
	}
	{
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_41 = V_6;
		bool L_42;
		L_42 = PointerEventData_get_dragging_m7FD3F5D4D8DAC559A57EDB88F2B2B5DEA4B48266_inline(L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00dd;
		}
	}
	{
		// ExecuteEvents.ExecuteHierarchy(currentOverGo, data, ExecuteEvents.dropHandler);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = V_8;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_44 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A * L_45;
		L_45 = ExecuteEvents_get_dropHandler_mD0816EFA2E1E46EF2B3B06C64868B197B574A1C3_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t4C6C44AF24CF3830774D87C0F4326DD208882F09_m2EC13CE27119899D978C098DE2D7992FFCFE21A1(L_43, L_44, L_45, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t4C6C44AF24CF3830774D87C0F4326DD208882F09_m2EC13CE27119899D978C098DE2D7992FFCFE21A1_RuntimeMethod_var);
	}

IL_00dd:
	{
		// data.eligibleForClick = false;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_47 = V_6;
		PointerEventData_set_eligibleForClick_m5CFAF671C2B33AF8E9153FA4826D93B9308C4C07_inline(L_47, (bool)0, /*hidden argument*/NULL);
		// data.pointerPress = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_48 = V_6;
		PointerEventData_set_pointerPress_mF37D23566DDB326EB2CFE59592F8538F23BA0EC0(L_48, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// data.rawPointerPress = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_49 = V_6;
		PointerEventData_set_rawPointerPress_m0BEEB9CA5E44F570C2C0803553BA9736F4DF58F0_inline(L_49, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// if (data.pointerDrag != null && data.dragging)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_50 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_51, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0121;
		}
	}
	{
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_53 = V_6;
		bool L_54;
		L_54 = PointerEventData_get_dragging_m7FD3F5D4D8DAC559A57EDB88F2B2B5DEA4B48266_inline(L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0121;
		}
	}
	{
		// ExecuteEvents.Execute(data.pointerDrag, data, ExecuteEvents.endDragHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_55 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_55, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_57 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 * L_58;
		L_58 = ExecuteEvents_get_endDragHandler_mB81B25D98F3A84B074490C936E178DEB5E0D6EC3_inline(/*hidden argument*/NULL);
		bool L_59;
		L_59 = ExecuteEvents_Execute_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mD0EAD259C83B2289D29ABC4AEC5A4639CEA75D01(L_56, L_57, L_58, /*hidden argument*/ExecuteEvents_Execute_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mD0EAD259C83B2289D29ABC4AEC5A4639CEA75D01_RuntimeMethod_var);
	}

IL_0121:
	{
		// data.dragging = false;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_60 = V_6;
		PointerEventData_set_dragging_mEB739C44F1B1848B4B3F4E7FBB9B376587C2C7E1_inline(L_60, (bool)0, /*hidden argument*/NULL);
		// data.pointerDrag = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_61 = V_6;
		PointerEventData_set_pointerDrag_m2E9F059EC1CDF71E0A097A0D3CCBA564E0C463C2_inline(L_61, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// ExecuteEvents.ExecuteHierarchy(data.pointerEnter, data, ExecuteEvents.pointerExitHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_62 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63;
		L_63 = PointerEventData_get_pointerEnter_m6F16C8962F195BB6ED58150986AEF584E4B979CB_inline(L_62, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_64 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * L_65;
		L_65 = ExecuteEvents_get_pointerExitHandler_mE6B90ECE2E2AFFBF4487BE3B3E9A1F43A5C72BCB_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66;
		L_66 = ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33(L_63, L_64, L_65, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33_RuntimeMethod_var);
		// data.pointerEnter = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_67 = V_6;
		PointerEventData_set_pointerEnter_mA547F8B280EA1AE5DE27EB5FF14AC3CF156A86D1_inline(L_67, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// if (currentOverGo != data.pointerEnter)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = V_8;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_69 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = PointerEventData_get_pointerEnter_m6F16C8962F195BB6ED58150986AEF584E4B979CB_inline(L_69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_68, L_70, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_017a;
		}
	}
	{
		// input.HandlePointerExitAndEnter(data, null);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_72 = __this->get_input_0();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_73 = V_6;
		BaseInputModule_HandlePointerExitAndEnter_mC94EE79B9295384EF83DAABA1FB5EF1146DF969F(L_72, L_73, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// input.HandlePointerExitAndEnter(data, currentOverGo);
		TouchScriptInputModule_t7902E4DEB19A59588649FBF2ABC4E191224AF3B1 * L_74 = __this->get_input_0();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_75 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = V_8;
		BaseInputModule_HandlePointerExitAndEnter_mC94EE79B9295384EF83DAABA1FB5EF1146DF969F(L_74, L_75, L_76, /*hidden argument*/NULL);
	}

IL_017a:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_77 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_017e:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_78 = V_2;
		int32_t L_79 = V_1;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::ProcessCancelled(System.Object,TouchScript.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_ProcessCancelled_m03ED1A47888E81E70D061A5BFD61E3F332A27B55 (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, RuntimeObject * ___sender0, PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * ___pointerEventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t4C6C44AF24CF3830774D87C0F4326DD208882F09_m2EC13CE27119899D978C098DE2D7992FFCFE21A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mD0EAD259C83B2289D29ABC4AEC5A4639CEA75D01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * V_3 = NULL;
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_5 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_6 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_7 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	{
		// var pointers = pointerEventArgs.Pointers;
		PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * L_0 = ___pointerEventArgs1;
		RuntimeObject* L_1;
		L_1 = PointerEventArgs_get_Pointers_m42550633F7D17F8698C95490CB2ECD6051746CD7_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var count = pointers.Count;
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.Pointers.Pointer>::get_Count() */, ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		// for (var i = 0; i < count; i++)
		V_2 = 0;
		goto IL_0104;
	}

IL_0015:
	{
		// var pointer = pointers[i];
		RuntimeObject* L_4 = V_0;
		int32_t L_5 = V_2;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_6;
		L_6 = InterfaceFuncInvoker1< Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>::get_Item(System.Int32) */, IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var, L_4, L_5);
		V_3 = L_6;
		// var over = pointer.GetOverData();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_7 = V_3;
		HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  L_8;
		L_8 = Pointer_GetOverData_mBA01649B10072200A7C812BEFF814B094A7466B9(L_7, (bool)0, /*hidden argument*/NULL);
		V_4 = L_8;
		// GetPointerData(pointer.Id, out data, true);
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_9 = V_3;
		int32_t L_10;
		L_10 = Pointer_get_Id_m0D7215B40F4759E2E7F3261DBB1484C7530C060C_inline(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = UIStandardInputModule_GetPointerData_m04D86A1860BEF77090A0D302FC534EAB5F2E5EC1(__this, L_10, (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 **)(&V_5), (bool)1, /*hidden argument*/NULL);
		// var target = over.Target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = HitData_get_Target_mDCBC396875ED34440B0C5F8D8B2C27BFCA4A7B0B_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_4), /*hidden argument*/NULL);
		V_6 = L_12;
		// var currentOverGo = target == null ? null : target.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0052;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		G_B4_0 = L_16;
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
	}

IL_0053:
	{
		V_7 = G_B4_0;
		// ExecuteEvents.Execute(data.pointerPress, data, ExecuteEvents.pointerUpHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_17 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = PointerEventData_get_pointerPress_mB55C5528AF445DB7B912086E43F0BCD9CDFF409C_inline(L_17, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_19 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * L_20;
		L_20 = ExecuteEvents_get_pointerUpHandler_m9E843EA7C17EDBEFF9F3003FAEEA4FB644562E67_inline(/*hidden argument*/NULL);
		bool L_21;
		L_21 = ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91(L_18, L_19, L_20, /*hidden argument*/ExecuteEvents_Execute_TisIPointerUpHandler_t9B0CCCD8169032FD78C8D22CAFC3A89E1709A180_m97673FB8C4F7988E3AB925901A55AEF15FD52F91_RuntimeMethod_var);
		// if (data.pointerDrag != null && data.dragging)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_22 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0090;
		}
	}
	{
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_25 = V_5;
		bool L_26;
		L_26 = PointerEventData_get_dragging_m7FD3F5D4D8DAC559A57EDB88F2B2B5DEA4B48266_inline(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0090;
		}
	}
	{
		// ExecuteEvents.ExecuteHierarchy(currentOverGo, data, ExecuteEvents.dropHandler);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_7;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A * L_29;
		L_29 = ExecuteEvents_get_dropHandler_mD0816EFA2E1E46EF2B3B06C64868B197B574A1C3_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t4C6C44AF24CF3830774D87C0F4326DD208882F09_m2EC13CE27119899D978C098DE2D7992FFCFE21A1(L_27, L_28, L_29, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t4C6C44AF24CF3830774D87C0F4326DD208882F09_m2EC13CE27119899D978C098DE2D7992FFCFE21A1_RuntimeMethod_var);
	}

IL_0090:
	{
		// data.eligibleForClick = false;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_31 = V_5;
		PointerEventData_set_eligibleForClick_m5CFAF671C2B33AF8E9153FA4826D93B9308C4C07_inline(L_31, (bool)0, /*hidden argument*/NULL);
		// data.pointerPress = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_32 = V_5;
		PointerEventData_set_pointerPress_mF37D23566DDB326EB2CFE59592F8538F23BA0EC0(L_32, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// data.rawPointerPress = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_33 = V_5;
		PointerEventData_set_rawPointerPress_m0BEEB9CA5E44F570C2C0803553BA9736F4DF58F0_inline(L_33, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// if (data.pointerDrag != null && data.dragging)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_34 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_35, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00d4;
		}
	}
	{
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_37 = V_5;
		bool L_38;
		L_38 = PointerEventData_get_dragging_m7FD3F5D4D8DAC559A57EDB88F2B2B5DEA4B48266_inline(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00d4;
		}
	}
	{
		// ExecuteEvents.Execute(data.pointerDrag, data, ExecuteEvents.endDragHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_39 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline(L_39, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_41 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 * L_42;
		L_42 = ExecuteEvents_get_endDragHandler_mB81B25D98F3A84B074490C936E178DEB5E0D6EC3_inline(/*hidden argument*/NULL);
		bool L_43;
		L_43 = ExecuteEvents_Execute_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mD0EAD259C83B2289D29ABC4AEC5A4639CEA75D01(L_40, L_41, L_42, /*hidden argument*/ExecuteEvents_Execute_TisIEndDragHandler_tE8E1151CFFBAA4C9E7B9A28E50D7085A27F2185E_mD0EAD259C83B2289D29ABC4AEC5A4639CEA75D01_RuntimeMethod_var);
	}

IL_00d4:
	{
		// data.dragging = false;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_44 = V_5;
		PointerEventData_set_dragging_mEB739C44F1B1848B4B3F4E7FBB9B376587C2C7E1_inline(L_44, (bool)0, /*hidden argument*/NULL);
		// data.pointerDrag = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_45 = V_5;
		PointerEventData_set_pointerDrag_m2E9F059EC1CDF71E0A097A0D3CCBA564E0C463C2_inline(L_45, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// ExecuteEvents.ExecuteHierarchy(data.pointerEnter, data, ExecuteEvents.pointerExitHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_46 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = PointerEventData_get_pointerEnter_m6F16C8962F195BB6ED58150986AEF584E4B979CB_inline(L_46, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_48 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * L_49;
		L_49 = ExecuteEvents_get_pointerExitHandler_mE6B90ECE2E2AFFBF4487BE3B3E9A1F43A5C72BCB_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33(L_47, L_48, L_49, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33_RuntimeMethod_var);
		// data.pointerEnter = null;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_51 = V_5;
		PointerEventData_set_pointerEnter_mA547F8B280EA1AE5DE27EB5FF14AC3CF156A86D1_inline(L_51, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// for (var i = 0; i < count; i++)
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_0104:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_53 = V_2;
		int32_t L_54 = V_1;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TouchScript.Layers.UI.TouchScriptInputModule/UIStandardInputModule::ProcessRemoved(System.Object,TouchScript.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStandardInputModule_ProcessRemoved_mCE697802A9B79F987CFA2195E1BE08AC6968F70E (UIStandardInputModule_t2EFF13988209CD8347D68E4984C88F63BC9F205A * __this, RuntimeObject * ___sender0, PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * ___pointerEventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * V_3 = NULL;
	HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_5 = NULL;
	{
		// var pointers = pointerEventArgs.Pointers;
		PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * L_0 = ___pointerEventArgs1;
		RuntimeObject* L_1;
		L_1 = PointerEventArgs_get_Pointers_m42550633F7D17F8698C95490CB2ECD6051746CD7_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var count = pointers.Count;
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TouchScript.Pointers.Pointer>::get_Count() */, ICollection_1_t74A4EFF8854524D6376BFE370555D99580526351_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		// for (var i = 0; i < count; i++)
		V_2 = 0;
		goto IL_006f;
	}

IL_0012:
	{
		// var pointer = pointers[i];
		RuntimeObject* L_4 = V_0;
		int32_t L_5 = V_2;
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_6;
		L_6 = InterfaceFuncInvoker1< Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>::get_Item(System.Int32) */, IList_1_tFD67487F24B971436887F4368B84A7F2A8E42FE2_il2cpp_TypeInfo_var, L_4, L_5);
		V_3 = L_6;
		// var over = pointer.GetOverData();
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_7 = V_3;
		HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  L_8;
		L_8 = Pointer_GetOverData_mBA01649B10072200A7C812BEFF814B094A7466B9(L_7, (bool)0, /*hidden argument*/NULL);
		V_4 = L_8;
		// if (over.Type != HitData.HitType.UI) continue;
		int32_t L_9;
		L_9 = HitData_get_Type_m4F3E6C3C75C4C632944A1A73356D5AC0B7F9B09F_inline((HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 *)(&V_4), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)4))))
		{
			goto IL_006b;
		}
	}
	{
		// GetPointerData(pointer.Id, out data, true);
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_10 = V_3;
		int32_t L_11;
		L_11 = Pointer_get_Id_m0D7215B40F4759E2E7F3261DBB1484C7530C060C_inline(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = UIStandardInputModule_GetPointerData_m04D86A1860BEF77090A0D302FC534EAB5F2E5EC1(__this, L_11, (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 **)(&V_5), (bool)1, /*hidden argument*/NULL);
		// if (data.pointerEnter) ExecuteEvents.ExecuteHierarchy(data.pointerEnter, data, ExecuteEvents.pointerExitHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_13 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = PointerEventData_get_pointerEnter_m6F16C8962F195BB6ED58150986AEF584E4B979CB_inline(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		// if (data.pointerEnter) ExecuteEvents.ExecuteHierarchy(data.pointerEnter, data, ExecuteEvents.pointerExitHandler);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_16 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = PointerEventData_get_pointerEnter_m6F16C8962F195BB6ED58150986AEF584E4B979CB_inline(L_16, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_18 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * L_19;
		L_19 = ExecuteEvents_get_pointerExitHandler_mE6B90ECE2E2AFFBF4487BE3B3E9A1F43A5C72BCB_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33(L_17, L_18, L_19, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_tAD3266B80199BA075943DC26B735E7DFE41131EA_mA6F521FAB90B5772ABBD42BE2E6FFC93C2363E33_RuntimeMethod_var);
	}

IL_005f:
	{
		// RemovePointerData(pointer.Id);
		Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * L_21 = V_3;
		int32_t L_22;
		L_22 = Pointer_get_Id_m0D7215B40F4759E2E7F3261DBB1484C7530C060C_inline(L_21, /*hidden argument*/NULL);
		UIStandardInputModule_RemovePointerData_mC0070394962968B82467BC7CF8EFF2DE05FF225F(__this, L_22, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_006f:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transformer_setState_mAE98D184176F8322D63A3E07D0B542DFB55DEBE3_inline (Transformer_t097F8E687482DCD0A068F6472C2033E32659EE98 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	{
		// state = newState;
		int32_t L_0 = ___newState0;
		__this->set_state_10(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		bool L_4;
		L_4 = Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		float L_5 = V_0;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_6, (1.0f), /*hidden argument*/NULL);
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))), (float)(57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformGestureBase_get_TransformMask_m0A4820044580E026617CF37DFE1441F4EEF69153_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method)
{
	{
		// get { return transformMask; }
		int32_t L_0 = __this->get_transformMask_48();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TransformGestureBase_get_DeltaScale_m74220090BFD11D010E6ABF1ACBA24B2F6B303080_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method)
{
	{
		// get { return deltaScale; }
		float L_0 = __this->get_deltaScale_51();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TransformGestureBase_get_DeltaRotation_mDD8BD4073EC667C1CBDF9D6C48796731B7501C9A_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method)
{
	{
		// get { return deltaRotation; }
		float L_0 = __this->get_deltaRotation_50();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformGestureBase_get_RotationAxis_m02512396E34D1C189B179847020EE9DC88F3D3C8_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method)
{
	{
		// get { return rotationAxis; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_rotationAxis_52();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformGestureBase_get_DeltaPosition_m0F5B048117EC12115F346566505E421499284639_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method)
{
	{
		// get { return deltaPosition; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_deltaPosition_49();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GestureStateChangeEventArgs_get_State_m34F507EFBB2EA79E6EE0B639D9FB8EF0BEFB1F3B_inline (GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * __this, const RuntimeMethod* method)
{
	{
		// public Gesture.GestureState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GestureStateChangeEventArgs_get_PreviousState_m46B298BB680F621F87D99779987C97EA209EB718_inline (GestureStateChangeEventArgs_t949C2375DABFAFA3AB06ACB3FB6089113131636D * __this, const RuntimeMethod* method)
{
	{
		// public Gesture.GestureState PreviousState { get; private set; }
		int32_t L_0 = __this->get_U3CPreviousStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gesture_get_pointersNumState_mCF5797DA98213A7E94B170524C4D1A14FAAC9278_inline (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, const RuntimeMethod* method)
{
	{
		// protected PointersNumState pointersNumState { get; private set; }
		int32_t L_0 = __this->get_U3CpointersNumStateU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransformGestureBase_get_Type_m93AA1A91375B88929A905699AAF947D66BFA4FF5_inline (TransformGestureBase_t7F475C23784E2EE3A633075A8154F0BFB2B1D813 * __this, const RuntimeMethod* method)
{
	{
		// get { return type; }
		int32_t L_0 = __this->get_type_56();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gesture_get_State_mE078CD64034A0A21C076C3B703BEC2920FBC5090_inline (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, const RuntimeMethod* method)
{
	{
		// get { return state; }
		int32_t L_0 = __this->get_state_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gesture_get_NumPointers_m87B20BC5C694ACB88D70D568BBD7C421A560BA86_inline (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, const RuntimeMethod* method)
{
	{
		// get { return numPointers; }
		int32_t L_0 = __this->get_numPointers_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Pointer_get_Position_m4E72C345860B25642E55A7BAFE830F2DDD7027B4_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method)
{
	{
		// get { return position; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_position_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Pointer_get_PreviousPosition_mBC5A988DF9BD295CA0034BFF5E6526BBC188D43B_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 PreviousPosition { get; private set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CPreviousPositionU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * Gesture_get_touchManager_m62A37E7BB349DAD73E7BCF46F2CAC30641601C88_inline (Gesture_t26364D03CFB26EF992F470E9285A9EE41C8D3B90 * __this, const RuntimeMethod* method)
{
	{
		// protected TouchManagerInstance touchManager { get; private set; }
		TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * L_0 = __this->get_U3CtouchManagerU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TouchManagerInstance_get_DotsPerCentimeter_m1B48CD34B01817954E86526D4EF650F17EF73195_inline (TouchManagerInstance_tAE04A46825A1BB099DEC2661757D3E730FC74A98 * __this, const RuntimeMethod* method)
{
	{
		// get { return dotsPerCentimeter; }
		float L_0 = __this->get_dotsPerCentimeter_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LongPressGesture_get_TimeToPress_mD7355052B743900CF7F6D270370AB96DA8541C36_inline (LongPressGesture_tA3317E5FB4F4339AB50AD31CB05DE0C2E4BBE3AB * __this, const RuntimeMethod* method)
{
	{
		// get { return timeToPress; }
		float L_0 = __this->get_timeToPress_40();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * HitData_get_Target_mDCBC396875ED34440B0C5F8D8B2C27BFCA4A7B0B_inline (HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 * __this, const RuntimeMethod* method)
{
	{
		// get { return target; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapGesture_get_TimeLimit_mFB00C58209EEA02FA1F470B6185A1143EF07D392_inline (TapGesture_tDB5B330134D18CCBB16C472822C1368B0378F576 * __this, const RuntimeMethod* method)
{
	{
		// get { return timeLimit; }
		float L_0 = __this->get_timeLimit_41();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerEventData_get_pointerEnter_m6F16C8962F195BB6ED58150986AEF584E4B979CB_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject pointerEnter { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CpointerEnterU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * BaseInputModule_get_eventSystem_m84626EB81106D5CC20F49FB0F6724626D168EE8D_inline (BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_EventSystem; }
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0 = __this->get_m_EventSystem_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerId_m7CD30C18A42AD6A99B435816B58F6CFDF42777D4_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpointerIdU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentSelected; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CurrentSelected_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C * ExecuteEvents_get_updateSelectedHandler_mA6B61ECA1F26501A2294B4EB06EBC2532E423891_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_UpdateSelectedHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_tB6C6DD6D13924F282523CD3468E286DA3742C74C * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_UpdateSelectedHandler_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AxisEventData_get_moveDir_mEE3B3409B871B022C83343228C554D4CBA4FDB7C_inline (AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * __this, const RuntimeMethod* method)
{
	{
		// public MoveDirection moveDir { get; set; }
		int32_t L_0 = __this->get_U3CmoveDirU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD * ExecuteEvents_get_moveHandler_mEA286929FEB1FF5040F9FA8913B5B819808F9F90_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_MoveHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t5BDB9EBC3BFFC71A97904CD3E01ED89BEBEE00AD * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_MoveHandler_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 * ExecuteEvents_get_submitHandler_m6B589A2BEB9E2CF3BDAB2E39E1A67BF76B4D6095_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_SubmitHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_tD45A9BFBDD99A872DA88945877EBDFD3542C9E23 * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_SubmitHandler_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 * ExecuteEvents_get_cancelHandler_m3DC78C07BF9678E9DF9064D9BC987E9F1FA221C8_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_CancelHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t62770D319A98A721900E1C08EC156D59926CDC42 * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_CancelHandler_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventSystem_get_sendNavigationEvents_m6577B15136A3AAE95673BBE20109F12C4BB2D023_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_sendNavigationEvents; }
		bool L_0 = __this->get_m_sendNavigationEvents_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastResult_set_gameObject_m3A1B023B578A8142A437B0C27AAE045DED6AAA20_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_GameObject = value; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_GameObject_0(L_0);
		// set { m_GameObject = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointerEventArgs_get_Pointers_m42550633F7D17F8698C95490CB2ECD6051746CD7_inline (PointerEventArgs_tC4F4DA08592C3FC6118441052226D2C3EE4542D3 * __this, const RuntimeMethod* method)
{
	{
		// public IList<Pointer> Pointers { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CPointersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Buttons_mF086BE54F232C26195D85A878BF79DF2CA5324DF_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method)
{
	{
		// public PointerButtonState Buttons { get; set; }
		int32_t L_0 = __this->get_U3CButtonsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  Pointer_GetPressData_mEBDE2A1EF35C622247FE94D7A7D67C3EF510E384_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method)
{
	{
		// return pressData;
		HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4  L_0 = __this->get_pressData_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HitData_get_Type_m4F3E6C3C75C4C632944A1A73356D5AC0B7F9B09F_inline (HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 * __this, const RuntimeMethod* method)
{
	{
		// get { return type; }
		int32_t L_0 = __this->get_type_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m0D7215B40F4759E2E7F3261DBB1484C7530C060C_inline (Pointer_tA6647F41B9A6A57B0A2E7FCA0527D3858CDED88B * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; private set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_m30E0BE702A57A13FEA52CA55D4B29DDE66931261_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 delta { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CdeltaU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  HitData_get_RaycastHitUI_m46041A06F4A3347C96EFDD9DF6F7C10E78A0E05F_inline (HitData_tFE4740DA0C89F077DBEBB1CD25660F9559A55AD4 * __this, const RuntimeMethod* method)
{
	{
		// get { return raycastHitUI; }
		RaycastHitUI_t2AE30C88A3EA1744EA2A652516E2D4FCEA8A3684  L_0 = __this->get_raycastHitUI_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerCurrentRaycast_m16C21C39E7763E52ABE4485B4171FC4DF2A2A6BC_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method)
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_0 = ___value0;
		__this->set_U3CpointerCurrentRaycastU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerEventData_get_pointerDrag_m5FD1D758CA629D9EBB8BDA3207132BC9BAB91ACE_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CpointerDragU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_dragging_m7FD3F5D4D8DAC559A57EDB88F2B2B5DEA4B48266_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public bool dragging { get; set; }
		bool L_0 = __this->get_U3CdraggingU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_pressPosition_mB8F60EB21F6E6892EC731382614BAB85E29ED642_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpressPositionU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventSystem_get_pixelDragThreshold_mE6BC245DF53C04B06DCDF7663BF40087696D793A_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_DragThreshold; }
		int32_t L_0 = __this->get_m_DragThreshold_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_useDragThreshold_m683F708E7E5F8351D8DD354A3B2CA9B290683BEE_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public bool useDragThreshold { get; set; }
		bool L_0 = __this->get_U3CuseDragThresholdU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 * ExecuteEvents_get_beginDragHandler_mB0F124732A2AA52CFCE805209E45FED043ECF2DF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_BeginDragHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t2090386F6F1AD36902CC49C47D33DBC66C60B100 * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_BeginDragHandler_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_dragging_mEB739C44F1B1848B4B3F4E7FBB9B376587C2C7E1_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool dragging { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CdraggingU3Ek__BackingField_22(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerEventData_get_pointerPress_mB55C5528AF445DB7B912086E43F0BCD9CDFF409C_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_PointerPress; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_PointerPress_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * ExecuteEvents_get_pointerUpHandler_m9E843EA7C17EDBEFF9F3003FAEEA4FB644562E67_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerUpHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t7FBE64714A4E50EF106796C42BB2493D33F6C7CA * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_PointerUpHandler_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m5CFAF671C2B33AF8E9153FA4826D93B9308C4C07_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CeligibleForClickU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_m0BEEB9CA5E44F570C2C0803553BA9736F4DF58F0_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject rawPointerPress { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CrawPointerPressU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E * ExecuteEvents_get_dragHandler_m641349957A945DA8FEF7DDA58260469EC20DC84C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_DragHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t092EF97BABC8AD77EFF4A451CB7124FD24E1E10E * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_DragHandler_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MousePointer_get_ScrollDelta_mC3F557B38D03EC1EFFC8610C47F084AC2506554A_inline (MousePointer_t23F9BBBDCF44BE2B617C048EE8D225A7CF416F3B * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 ScrollDelta { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CScrollDeltaU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_scrollDelta_m3ECB852D4D953D59C617DF0FE9E44B0EEF8AEA13_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 scrollDelta { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CscrollDeltaU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF * ExecuteEvents_get_scrollHandler_m4C8DF1B6D5EC3243AFE2EAEA87BAE72E87AB6456_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_ScrollHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_tA4599B6CC5BFC12FBD61E3E846515E4DEBA873EF * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_ScrollHandler_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_useDragThreshold_m146893D383B122225651D7882A6998FFB4274C85_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool useDragThreshold { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CuseDragThresholdU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_mE644EE1603DFF2087224FF6364EA0204D04D7939_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CpressPositionU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_0 = __this->get_U3CpointerCurrentRaycastU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_mAF28B12216468A02DACA9900B0A57FA1BF3B94F4_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method)
{
	{
		// public RaycastResult pointerPressRaycast { get; set; }
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_0 = ___value0;
		__this->set_U3CpointerPressRaycastU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerEnter_mA547F8B280EA1AE5DE27EB5FF14AC3CF156A86D1_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject pointerEnter { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CpointerEnterU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C * ExecuteEvents_get_pointerDownHandler_m9C9261D6CAB8B6DB61C1165F28B52A3EC1F84C3A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerDownHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t613569DE3BDA144DA5A8D56AFFCA0A1F03DCD96C * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_PointerDownHandler_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerEventData_get_lastPress_m362C5876B8C9F50BACC27D9026DB3709D6950C0B_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject lastPress { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3ClastPressU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_clickTime_m08F7FD164EFE2AE7B47A15C70BC418632B9E5950_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public float clickTime { get; set; }
		float L_0 = __this->get_U3CclickTimeU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_mB44AAB99335BD7D2BD93E40DAC282A56202E44F2_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public int clickCount { get; set; }
		int32_t L_0 = __this->get_U3CclickCountU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickCount_m2EAAB7F43CE26BF505B7FCF7D509C988DCFD7F28_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int clickCount { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CclickCountU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickTime_m215E254F8585FFC518E3161FAF9137388F64AC58_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float clickTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CclickTimeU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m2E9F059EC1CDF71E0A097A0D3CCBA564E0C463C2_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CpointerDragU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA * ExecuteEvents_get_initializePotentialDrag_m726CADE4F0D36D5A2699A9CD02699116D34C799A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_InitializePotentialDragHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t2890FC9B45E7B56EDFEC06B764D49D1EDB7E4ADA * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_InitializePotentialDragHandler_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_eligibleForClick_mEE3ADEFAD3CF5BCBBAC695A1974870E9F3781AA7_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = __this->get_U3CeligibleForClickU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 * ExecuteEvents_get_pointerClickHandler_m8D0C77485F58F6FA716E739DB2594DF069530EBB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerClickHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t4870461507D94C55EB84820C99AC6C495DCE4A53 * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_PointerClickHandler_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A * ExecuteEvents_get_dropHandler_mD0816EFA2E1E46EF2B3B06C64868B197B574A1C3_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_DropHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t5660F2E7C674760C0F595E987D232818F4E0AA0A * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_DropHandler_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 * ExecuteEvents_get_endDragHandler_mB81B25D98F3A84B074490C936E178DEB5E0D6EC3_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_EndDragHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_tEAD99CB0B6FC23ECDE82646A3710D24E183A26C5 * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_EndDragHandler_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * ExecuteEvents_get_pointerExitHandler_mE6B90ECE2E2AFFBF4487BE3B3E9A1F43A5C72BCB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerExitHandler; }
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		EventFunction_1_t9E4CEC2DA9A249AE1B4E40E3D2B396741E347F60 * L_0 = ((ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var))->get_s_PointerExitHandler_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
