#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<Items>
struct List_1_tCF973406031F1947E9529842765113D5582BB6B4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Texture>
struct List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// Items[]
struct ItemsU5BU5D_t391D0307FAB5DD39C924A747573F538A03FB7C38;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture[]
struct TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// ArtManager
struct ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraManager
struct CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// ClickHandler
struct ClickHandler_t5E59597424DB3BABAD4E2086DF0B4BAD5BCF13D9;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// DisplayTime
struct DisplayTime_tBB0F445CFAF6E9BE1613DC7A20543A37B8C5A090;
// DragManager
struct DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A;
// Draggable
struct Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Items
struct Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C;
// JsonExamplpe
struct JsonExamplpe_tE7F0EE78AC71FB0D3E32F7A4718A40FDCE173131;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PieceManager
struct PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// PuzzleManager
struct PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// SceneSetup
struct SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// ShoppingListGenerator
struct ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6;
// ShoppingListJson
struct ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TimerManager
struct TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// VideoManager
struct VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WindowManager
struct WindowManager_tE18412F0E79BBF0CD77BB6BFEBE04641BB2D38EA;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCF973406031F1947E9529842765113D5582BB6B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612;
IL2CPP_EXTERN_C String_t* _stringLiteral0A09ABF1D24E6484782D73339087C2DB702B2B51;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1784412A512B8902A48C26BCCFB02EEB258D5A12;
IL2CPP_EXTERN_C String_t* _stringLiteral221088D053DAF499BF9901351F19958D88E9AD69;
IL2CPP_EXTERN_C String_t* _stringLiteral3BD3A1CAE93456E75362F1FB949A52CF81769B64;
IL2CPP_EXTERN_C String_t* _stringLiteral4B41695BDFD8C22B8D4A28D45321759D252CEE55;
IL2CPP_EXTERN_C String_t* _stringLiteral4C348F7BAC9D7775F5F983C8DBB9BDC7C933E59E;
IL2CPP_EXTERN_C String_t* _stringLiteral4E3E955F7EC4D1E664CB7FFBD23A65233A1C175F;
IL2CPP_EXTERN_C String_t* _stringLiteral56B9D7DEF8E3DC210DBF8A0AFD4975355B5DF9E4;
IL2CPP_EXTERN_C String_t* _stringLiteral57F34C75DEAFB013ED1F36D16D55D4FFF5E3D014;
IL2CPP_EXTERN_C String_t* _stringLiteral69FE40C4D978A37D7C9DE81A5A9344687AEC358C;
IL2CPP_EXTERN_C String_t* _stringLiteral6EE76E9FBCD2C33A4F5947BE4CC2EA3736B59407;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7989AEBB7563A02D458DEC440EA79FBC8A6BF4E6;
IL2CPP_EXTERN_C String_t* _stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B;
IL2CPP_EXTERN_C String_t* _stringLiteral7FBD0F5E1DDA4322D417AEA7B8A2A811ABBC281B;
IL2CPP_EXTERN_C String_t* _stringLiteral819EC247FBE787FE715EBC7FE31709CCF2900456;
IL2CPP_EXTERN_C String_t* _stringLiteral84A1CF0CBB8D222D6132F88578EAF0C38FF44151;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral87BE8EC7B184801EDC77ACABB45BB4A779709FF6;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EFD00EA085079EE7F97407F8EFF07E3990696A;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD30DFA1CEAA25F51C85549E7DD08CEFCAE3A20;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralCA57578EAEFA651B01355E789772176BF80A1390;
IL2CPP_EXTERN_C String_t* _stringLiteralD6120537656DFF8635CF401F09D9DEF972A4776D;
IL2CPP_EXTERN_C String_t* _stringLiteralD910156689F91A665D7E67FD2531EA913115040F;
IL2CPP_EXTERN_C String_t* _stringLiteralE6ACBA0233DFA08390AD2018BDDE6F4AE4958AB5;
IL2CPP_EXTERN_C String_t* _stringLiteralEE0FFD27E1BF37F1AF2FFEF24CB4CD16240D159A;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFB97D6CABA33AC7BFFEE7B03854AB24A64F9B9E7;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495_mB9E2F78811F2AABB897925C1B7F8048D2DE80911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m028397C556F8A71007C097FB26819473FFDFC679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD67F78371CA5D94FBCFC942FED3C1B4093C0A509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m22FF7C3699FCC2B3DE8931347905C2662EEEE3A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6FAE4A944C7AF87C41A4B66B5DA481A552DD433F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m22C4CA747B74E153C12379B80051BFCBC80FA1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB7BF7A01D4A81E085002999BCD277447C21DB453_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A_m49F78D6A066976CAD804EE6F1A680EC41F4D26EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621_m1CEC56B09FA3DC09C0CAE787AB04CA5D3FD8BC5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883_m251842ED0991894C88C336596F85979C4C7D98EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m52BF19F8E128AFF14D3F111ACA2594D1C7DC36A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0EAC31AFE8F497D2D36E00A85143974CEC4F42AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAB821335FCF60576F5D79B48F3C1AA79E14CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2790E45DEDC41585CE1F71AEE05CA42AA263144F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7C82855BDDDACFA8FC4BDFC43125EE8A8020CC0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF274B94BC4A7EC61B5D50F9B2F5A9AA50879E901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2DCD838A75A59665E55AB076695F59367886A199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShoppingListGenerator_GetRandomElements_TisString_t_mF12C4262241F8264C35E28A2E63EA070D7506743_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE, ____items_1)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get__items_1() const { return ____items_1; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE_StaticFields, ____emptyArray_5)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Items>
struct List_1_tCF973406031F1947E9529842765113D5582BB6B4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ItemsU5BU5D_t391D0307FAB5DD39C924A747573F538A03FB7C38* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCF973406031F1947E9529842765113D5582BB6B4, ____items_1)); }
	inline ItemsU5BU5D_t391D0307FAB5DD39C924A747573F538A03FB7C38* get__items_1() const { return ____items_1; }
	inline ItemsU5BU5D_t391D0307FAB5DD39C924A747573F538A03FB7C38** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ItemsU5BU5D_t391D0307FAB5DD39C924A747573F538A03FB7C38* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCF973406031F1947E9529842765113D5582BB6B4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCF973406031F1947E9529842765113D5582BB6B4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCF973406031F1947E9529842765113D5582BB6B4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCF973406031F1947E9529842765113D5582BB6B4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ItemsU5BU5D_t391D0307FAB5DD39C924A747573F538A03FB7C38* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCF973406031F1947E9529842765113D5582BB6B4_StaticFields, ____emptyArray_5)); }
	inline ItemsU5BU5D_t391D0307FAB5DD39C924A747573F538A03FB7C38* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ItemsU5BU5D_t391D0307FAB5DD39C924A747573F538A03FB7C38** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ItemsU5BU5D_t391D0307FAB5DD39C924A747573F538A03FB7C38* value)
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


// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____items_1)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__items_1() const { return ____items_1; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields, ____emptyArray_5)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Texture>
struct List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D, ____items_1)); }
	inline TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* get__items_1() const { return ____items_1; }
	inline TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D_StaticFields, ____emptyArray_5)); }
	inline TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* value)
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


// Items
struct Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C  : public RuntimeObject
{
public:
	// System.String Items::Name
	String_t* ___Name_0;
	// System.Int32 Items::Price
	int32_t ___Price_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Price_1() { return static_cast<int32_t>(offsetof(Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C, ___Price_1)); }
	inline int32_t get_Price_1() const { return ___Price_1; }
	inline int32_t* get_address_of_Price_1() { return &___Price_1; }
	inline void set_Price_1(int32_t value)
	{
		___Price_1 = value;
	}
};


// ShoppingListJson
struct ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Items> ShoppingListJson::Items
	List_1_tCF973406031F1947E9529842765113D5582BB6B4 * ___Items_0;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883, ___Items_0)); }
	inline List_1_tCF973406031F1947E9529842765113D5582BB6B4 * get_Items_0() const { return ___Items_0; }
	inline List_1_tCF973406031F1947E9529842765113D5582BB6B4 ** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(List_1_tCF973406031F1947E9529842765113D5582BB6B4 * value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Image>
struct Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9, ___list_0)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_list_0() const { return ___list_0; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9, ___current_3)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_current_3() const { return ___current_3; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Items>
struct Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tCF973406031F1947E9529842765113D5582BB6B4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200, ___list_0)); }
	inline List_1_tCF973406031F1947E9529842765113D5582BB6B4 * get_list_0() const { return ___list_0; }
	inline List_1_tCF973406031F1947E9529842765113D5582BB6B4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCF973406031F1947E9529842765113D5582BB6B4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200, ___current_3)); }
	inline Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C * get_current_3() const { return ___current_3; }
	inline Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
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

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
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


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
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


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
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


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
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


// ArtManager
struct ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture> ArtManager::originalPieces
	List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * ___originalPieces_4;
	// System.Collections.Generic.List`1<UnityEngine.Texture> ArtManager::randomPieces
	List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * ___randomPieces_5;
	// UnityEngine.UI.Text ArtManager::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_6;

public:
	inline static int32_t get_offset_of_originalPieces_4() { return static_cast<int32_t>(offsetof(ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7, ___originalPieces_4)); }
	inline List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * get_originalPieces_4() const { return ___originalPieces_4; }
	inline List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D ** get_address_of_originalPieces_4() { return &___originalPieces_4; }
	inline void set_originalPieces_4(List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * value)
	{
		___originalPieces_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalPieces_4), (void*)value);
	}

	inline static int32_t get_offset_of_randomPieces_5() { return static_cast<int32_t>(offsetof(ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7, ___randomPieces_5)); }
	inline List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * get_randomPieces_5() const { return ___randomPieces_5; }
	inline List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D ** get_address_of_randomPieces_5() { return &___randomPieces_5; }
	inline void set_randomPieces_5(List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * value)
	{
		___randomPieces_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___randomPieces_5), (void*)value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7, ___text_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_6() const { return ___text_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_6), (void*)value);
	}
};


// CameraManager
struct CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CameraManager::gallery
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___gallery_4;
	// UnityEngine.Vector3 CameraManager::diff
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___diff_5;
	// UnityEngine.Vector3 CameraManager::start
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start_6;
	// System.Int32 CameraManager::currentPiece
	int32_t ___currentPiece_7;
	// System.Boolean CameraManager::movingLeft
	bool ___movingLeft_8;
	// System.Boolean CameraManager::movingRight
	bool ___movingRight_9;

public:
	inline static int32_t get_offset_of_gallery_4() { return static_cast<int32_t>(offsetof(CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A, ___gallery_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_gallery_4() const { return ___gallery_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_gallery_4() { return &___gallery_4; }
	inline void set_gallery_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___gallery_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gallery_4), (void*)value);
	}

	inline static int32_t get_offset_of_diff_5() { return static_cast<int32_t>(offsetof(CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A, ___diff_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_diff_5() const { return ___diff_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_diff_5() { return &___diff_5; }
	inline void set_diff_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___diff_5 = value;
	}

	inline static int32_t get_offset_of_start_6() { return static_cast<int32_t>(offsetof(CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A, ___start_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_start_6() const { return ___start_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_start_6() { return &___start_6; }
	inline void set_start_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___start_6 = value;
	}

	inline static int32_t get_offset_of_currentPiece_7() { return static_cast<int32_t>(offsetof(CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A, ___currentPiece_7)); }
	inline int32_t get_currentPiece_7() const { return ___currentPiece_7; }
	inline int32_t* get_address_of_currentPiece_7() { return &___currentPiece_7; }
	inline void set_currentPiece_7(int32_t value)
	{
		___currentPiece_7 = value;
	}

	inline static int32_t get_offset_of_movingLeft_8() { return static_cast<int32_t>(offsetof(CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A, ___movingLeft_8)); }
	inline bool get_movingLeft_8() const { return ___movingLeft_8; }
	inline bool* get_address_of_movingLeft_8() { return &___movingLeft_8; }
	inline void set_movingLeft_8(bool value)
	{
		___movingLeft_8 = value;
	}

	inline static int32_t get_offset_of_movingRight_9() { return static_cast<int32_t>(offsetof(CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A, ___movingRight_9)); }
	inline bool get_movingRight_9() const { return ___movingRight_9; }
	inline bool* get_address_of_movingRight_9() { return &___movingRight_9; }
	inline void set_movingRight_9(bool value)
	{
		___movingRight_9 = value;
	}
};


// ClickHandler
struct ClickHandler_t5E59597424DB3BABAD4E2086DF0B4BAD5BCF13D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.RawImage ClickHandler::pic1
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___pic1_4;
	// UnityEngine.UI.RawImage ClickHandler::pic2
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___pic2_5;
	// UnityEngine.GameObject ClickHandler::hand
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hand_6;

public:
	inline static int32_t get_offset_of_pic1_4() { return static_cast<int32_t>(offsetof(ClickHandler_t5E59597424DB3BABAD4E2086DF0B4BAD5BCF13D9, ___pic1_4)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_pic1_4() const { return ___pic1_4; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_pic1_4() { return &___pic1_4; }
	inline void set_pic1_4(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___pic1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pic1_4), (void*)value);
	}

	inline static int32_t get_offset_of_pic2_5() { return static_cast<int32_t>(offsetof(ClickHandler_t5E59597424DB3BABAD4E2086DF0B4BAD5BCF13D9, ___pic2_5)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_pic2_5() const { return ___pic2_5; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_pic2_5() { return &___pic2_5; }
	inline void set_pic2_5(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___pic2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pic2_5), (void*)value);
	}

	inline static int32_t get_offset_of_hand_6() { return static_cast<int32_t>(offsetof(ClickHandler_t5E59597424DB3BABAD4E2086DF0B4BAD5BCF13D9, ___hand_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hand_6() const { return ___hand_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hand_6() { return &___hand_6; }
	inline void set_hand_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hand_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hand_6), (void*)value);
	}
};


// DisplayTime
struct DisplayTime_tBB0F445CFAF6E9BE1613DC7A20543A37B8C5A090  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text DisplayTime::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(DisplayTime_tBB0F445CFAF6E9BE1613DC7A20543A37B8C5A090, ___text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_4() const { return ___text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}
};


// DragManager
struct DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 DragManager::currentTouchPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentTouchPos_4;

public:
	inline static int32_t get_offset_of_currentTouchPos_4() { return static_cast<int32_t>(offsetof(DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A, ___currentTouchPos_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentTouchPos_4() const { return ___currentTouchPos_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentTouchPos_4() { return &___currentTouchPos_4; }
	inline void set_currentTouchPos_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentTouchPos_4 = value;
	}
};


// Draggable
struct Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Draggable::speed
	float ___speed_4;
	// UnityEngine.Vector2 Draggable::offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offset_5;
	// UnityEngine.Vector2 Draggable::screenPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint_6;
	// UnityEngine.Vector2 Draggable::curScreenPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___curScreenPoint_7;
	// UnityEngine.Vector2 Draggable::originalPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originalPos_8;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8, ___offset_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_offset_5() const { return ___offset_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___offset_5 = value;
	}

	inline static int32_t get_offset_of_screenPoint_6() { return static_cast<int32_t>(offsetof(Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8, ___screenPoint_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPoint_6() const { return ___screenPoint_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPoint_6() { return &___screenPoint_6; }
	inline void set_screenPoint_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPoint_6 = value;
	}

	inline static int32_t get_offset_of_curScreenPoint_7() { return static_cast<int32_t>(offsetof(Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8, ___curScreenPoint_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_curScreenPoint_7() const { return ___curScreenPoint_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_curScreenPoint_7() { return &___curScreenPoint_7; }
	inline void set_curScreenPoint_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___curScreenPoint_7 = value;
	}

	inline static int32_t get_offset_of_originalPos_8() { return static_cast<int32_t>(offsetof(Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8, ___originalPos_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_originalPos_8() const { return ___originalPos_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_originalPos_8() { return &___originalPos_8; }
	inline void set_originalPos_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___originalPos_8 = value;
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GameManager::numPaintings
	int32_t ___numPaintings_4;

public:
	inline static int32_t get_offset_of_numPaintings_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___numPaintings_4)); }
	inline int32_t get_numPaintings_4() const { return ___numPaintings_4; }
	inline int32_t* get_address_of_numPaintings_4() { return &___numPaintings_4; }
	inline void set_numPaintings_4(int32_t value)
	{
		___numPaintings_4 = value;
	}
};


// JsonExamplpe
struct JsonExamplpe_tE7F0EE78AC71FB0D3E32F7A4718A40FDCE173131  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ShoppingListJson JsonExamplpe::ShoppingListJson
	ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * ___ShoppingListJson_4;

public:
	inline static int32_t get_offset_of_ShoppingListJson_4() { return static_cast<int32_t>(offsetof(JsonExamplpe_tE7F0EE78AC71FB0D3E32F7A4718A40FDCE173131, ___ShoppingListJson_4)); }
	inline ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * get_ShoppingListJson_4() const { return ___ShoppingListJson_4; }
	inline ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 ** get_address_of_ShoppingListJson_4() { return &___ShoppingListJson_4; }
	inline void set_ShoppingListJson_4(ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * value)
	{
		___ShoppingListJson_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShoppingListJson_4), (void*)value);
	}
};


// PieceManager
struct PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PieceManager::worldPieces
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___worldPieces_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> PieceManager::canvasPieces
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___canvasPieces_5;
	// UnityEngine.UI.Image PieceManager::fullPiece
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___fullPiece_6;
	// UnityEngine.UI.Text PieceManager::pieceInfo
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pieceInfo_7;
	// UnityEngine.UI.Button PieceManager::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_8;
	// UnityEngine.GameObject PieceManager::myCamera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___myCamera_9;
	// UnityEngine.GameObject PieceManager::handRight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___handRight_10;
	// UnityEngine.GameObject PieceManager::handLeft
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___handLeft_11;
	// UnityEngine.GameObject PieceManager::hand
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hand_12;
	// System.Boolean PieceManager::checkPinch
	bool ___checkPinch_13;
	// System.Single PieceManager::foundPieces
	float ___foundPieces_14;

public:
	inline static int32_t get_offset_of_worldPieces_4() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___worldPieces_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_worldPieces_4() const { return ___worldPieces_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_worldPieces_4() { return &___worldPieces_4; }
	inline void set_worldPieces_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___worldPieces_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldPieces_4), (void*)value);
	}

	inline static int32_t get_offset_of_canvasPieces_5() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___canvasPieces_5)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_canvasPieces_5() const { return ___canvasPieces_5; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_canvasPieces_5() { return &___canvasPieces_5; }
	inline void set_canvasPieces_5(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___canvasPieces_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasPieces_5), (void*)value);
	}

	inline static int32_t get_offset_of_fullPiece_6() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___fullPiece_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_fullPiece_6() const { return ___fullPiece_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_fullPiece_6() { return &___fullPiece_6; }
	inline void set_fullPiece_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___fullPiece_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullPiece_6), (void*)value);
	}

	inline static int32_t get_offset_of_pieceInfo_7() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___pieceInfo_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pieceInfo_7() const { return ___pieceInfo_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pieceInfo_7() { return &___pieceInfo_7; }
	inline void set_pieceInfo_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pieceInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pieceInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_button_8() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___button_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_8() const { return ___button_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_8() { return &___button_8; }
	inline void set_button_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_8), (void*)value);
	}

	inline static int32_t get_offset_of_myCamera_9() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___myCamera_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_myCamera_9() const { return ___myCamera_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_myCamera_9() { return &___myCamera_9; }
	inline void set_myCamera_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___myCamera_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myCamera_9), (void*)value);
	}

	inline static int32_t get_offset_of_handRight_10() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___handRight_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_handRight_10() const { return ___handRight_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_handRight_10() { return &___handRight_10; }
	inline void set_handRight_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___handRight_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handRight_10), (void*)value);
	}

	inline static int32_t get_offset_of_handLeft_11() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___handLeft_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_handLeft_11() const { return ___handLeft_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_handLeft_11() { return &___handLeft_11; }
	inline void set_handLeft_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___handLeft_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handLeft_11), (void*)value);
	}

	inline static int32_t get_offset_of_hand_12() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___hand_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hand_12() const { return ___hand_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hand_12() { return &___hand_12; }
	inline void set_hand_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hand_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hand_12), (void*)value);
	}

	inline static int32_t get_offset_of_checkPinch_13() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___checkPinch_13)); }
	inline bool get_checkPinch_13() const { return ___checkPinch_13; }
	inline bool* get_address_of_checkPinch_13() { return &___checkPinch_13; }
	inline void set_checkPinch_13(bool value)
	{
		___checkPinch_13 = value;
	}

	inline static int32_t get_offset_of_foundPieces_14() { return static_cast<int32_t>(offsetof(PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3, ___foundPieces_14)); }
	inline float get_foundPieces_14() const { return ___foundPieces_14; }
	inline float* get_address_of_foundPieces_14() { return &___foundPieces_14; }
	inline void set_foundPieces_14(float value)
	{
		___foundPieces_14 = value;
	}
};


// PuzzleManager
struct PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PuzzleManager::worldPieces
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___worldPieces_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PuzzleManager::canvasPieces
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___canvasPieces_5;
	// UnityEngine.GameObject PuzzleManager::fullPiece
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fullPiece_6;
	// UnityEngine.GameObject PuzzleManager::myCamera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___myCamera_7;
	// System.Single PuzzleManager::foundPieces
	float ___foundPieces_8;
	// System.Boolean PuzzleManager::isCompleted
	bool ___isCompleted_9;

public:
	inline static int32_t get_offset_of_worldPieces_4() { return static_cast<int32_t>(offsetof(PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621, ___worldPieces_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_worldPieces_4() const { return ___worldPieces_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_worldPieces_4() { return &___worldPieces_4; }
	inline void set_worldPieces_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___worldPieces_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldPieces_4), (void*)value);
	}

	inline static int32_t get_offset_of_canvasPieces_5() { return static_cast<int32_t>(offsetof(PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621, ___canvasPieces_5)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_canvasPieces_5() const { return ___canvasPieces_5; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_canvasPieces_5() { return &___canvasPieces_5; }
	inline void set_canvasPieces_5(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___canvasPieces_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasPieces_5), (void*)value);
	}

	inline static int32_t get_offset_of_fullPiece_6() { return static_cast<int32_t>(offsetof(PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621, ___fullPiece_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fullPiece_6() const { return ___fullPiece_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fullPiece_6() { return &___fullPiece_6; }
	inline void set_fullPiece_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fullPiece_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullPiece_6), (void*)value);
	}

	inline static int32_t get_offset_of_myCamera_7() { return static_cast<int32_t>(offsetof(PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621, ___myCamera_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_myCamera_7() const { return ___myCamera_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_myCamera_7() { return &___myCamera_7; }
	inline void set_myCamera_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___myCamera_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myCamera_7), (void*)value);
	}

	inline static int32_t get_offset_of_foundPieces_8() { return static_cast<int32_t>(offsetof(PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621, ___foundPieces_8)); }
	inline float get_foundPieces_8() const { return ___foundPieces_8; }
	inline float* get_address_of_foundPieces_8() { return &___foundPieces_8; }
	inline void set_foundPieces_8(float value)
	{
		___foundPieces_8 = value;
	}

	inline static int32_t get_offset_of_isCompleted_9() { return static_cast<int32_t>(offsetof(PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621, ___isCompleted_9)); }
	inline bool get_isCompleted_9() const { return ___isCompleted_9; }
	inline bool* get_address_of_isCompleted_9() { return &___isCompleted_9; }
	inline void set_isCompleted_9(bool value)
	{
		___isCompleted_9 = value;
	}
};


// SceneSetup
struct SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SceneSetup::canvasObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___canvasObjects_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SceneSetup::paintPieces
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___paintPieces_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SceneSetup::positions
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___positions_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SceneSetup::canvasInScene
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___canvasInScene_7;

public:
	inline static int32_t get_offset_of_canvasObjects_4() { return static_cast<int32_t>(offsetof(SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495, ___canvasObjects_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_canvasObjects_4() const { return ___canvasObjects_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_canvasObjects_4() { return &___canvasObjects_4; }
	inline void set_canvasObjects_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___canvasObjects_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasObjects_4), (void*)value);
	}

	inline static int32_t get_offset_of_paintPieces_5() { return static_cast<int32_t>(offsetof(SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495, ___paintPieces_5)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_paintPieces_5() const { return ___paintPieces_5; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_paintPieces_5() { return &___paintPieces_5; }
	inline void set_paintPieces_5(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___paintPieces_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paintPieces_5), (void*)value);
	}

	inline static int32_t get_offset_of_positions_6() { return static_cast<int32_t>(offsetof(SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495, ___positions_6)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_positions_6() const { return ___positions_6; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_positions_6() { return &___positions_6; }
	inline void set_positions_6(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___positions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positions_6), (void*)value);
	}

	inline static int32_t get_offset_of_canvasInScene_7() { return static_cast<int32_t>(offsetof(SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495, ___canvasInScene_7)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_canvasInScene_7() const { return ___canvasInScene_7; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_canvasInScene_7() { return &___canvasInScene_7; }
	inline void set_canvasInScene_7(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___canvasInScene_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasInScene_7), (void*)value);
	}
};


// ShoppingListGenerator
struct ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ShoppingListGenerator::HowMuchToBuy
	int32_t ___HowMuchToBuy_4;
	// System.Collections.Generic.List`1<System.String> ShoppingListGenerator::allitemlist
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___allitemlist_5;
	// System.Collections.Generic.List`1<System.String> ShoppingListGenerator::cartItems
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___cartItems_6;

public:
	inline static int32_t get_offset_of_HowMuchToBuy_4() { return static_cast<int32_t>(offsetof(ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6, ___HowMuchToBuy_4)); }
	inline int32_t get_HowMuchToBuy_4() const { return ___HowMuchToBuy_4; }
	inline int32_t* get_address_of_HowMuchToBuy_4() { return &___HowMuchToBuy_4; }
	inline void set_HowMuchToBuy_4(int32_t value)
	{
		___HowMuchToBuy_4 = value;
	}

	inline static int32_t get_offset_of_allitemlist_5() { return static_cast<int32_t>(offsetof(ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6, ___allitemlist_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_allitemlist_5() const { return ___allitemlist_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_allitemlist_5() { return &___allitemlist_5; }
	inline void set_allitemlist_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___allitemlist_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allitemlist_5), (void*)value);
	}

	inline static int32_t get_offset_of_cartItems_6() { return static_cast<int32_t>(offsetof(ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6, ___cartItems_6)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_cartItems_6() const { return ___cartItems_6; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_cartItems_6() { return &___cartItems_6; }
	inline void set_cartItems_6(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___cartItems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cartItems_6), (void*)value);
	}
};


// TimerManager
struct TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TimerManager::gameTime
	float ___gameTime_4;
	// UnityEngine.UI.Image TimerManager::timeBar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___timeBar_6;

public:
	inline static int32_t get_offset_of_gameTime_4() { return static_cast<int32_t>(offsetof(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D, ___gameTime_4)); }
	inline float get_gameTime_4() const { return ___gameTime_4; }
	inline float* get_address_of_gameTime_4() { return &___gameTime_4; }
	inline void set_gameTime_4(float value)
	{
		___gameTime_4 = value;
	}

	inline static int32_t get_offset_of_timeBar_6() { return static_cast<int32_t>(offsetof(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D, ___timeBar_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_timeBar_6() const { return ___timeBar_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_timeBar_6() { return &___timeBar_6; }
	inline void set_timeBar_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___timeBar_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeBar_6), (void*)value);
	}
};

struct TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_StaticFields
{
public:
	// System.Single TimerManager::timer
	float ___timer_5;

public:
	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_StaticFields, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
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


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  m_Items[1];

public:
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_gshared (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<T> ShoppingListGenerator::GetRandomElements<System.Object>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ShoppingListGenerator_GetRandomElements_TisRuntimeObject_mEC9F5B2072F8EA55EF3CAE65F14F25A4DF354DE7_gshared (ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___inputList0, int32_t ___count1, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture>::Add(!0)
inline void List_1_Add_m52BF19F8E128AFF14D3F111ACA2594D1C7DC36A4 (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D *, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void ArtManager::prepRandom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArtManager_prepRandom_mD1BA1967E6FEDA0A4E7FBB722A204021309E490E (ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture>::Clear()
inline void List_1_Clear_m0EAC31AFE8F497D2D36E00A85143974CEC4F42AA (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture>::get_Count()
inline int32_t List_1_get_Count_m2DCD838A75A59665E55AB076695F59367886A199_inline (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Texture>::get_Item(System.Int32)
inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_inline (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * (*) (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Texture>::Contains(!0)
inline bool List_1_Contains_m2EAB821335FCF60576F5D79B48F3C1AA79E14CA9 (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D *, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void CameraManager::previousPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_previousPiece_mE31FDA0EFDF389586C037FF5CA6493171ACF69F3 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method);
// System.Void CameraManager::nextPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_nextPiece_m3DE8EA8E31FDE222764AE3461EE18CBCDD30C4C5 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3 (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_m45A359AEC0BED3D47B50A862A2F69911373DE934 (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___raycastResults1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, int32_t, const RuntimeMethod*))List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Draggable>()
inline Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Draggable::up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_up_m7EEF06F7E4F9744BA86EF5E4A8FDA2512392C821 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method);
// System.Void Draggable::down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_down_m3C45945F8E61B1BF869E5BF133DA93F0FF1D4E63 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method);
// System.Void Draggable::drag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_drag_m9FC3A21186CFB2117926897A7FC06CD07852FDF1 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SceneSetup>()
inline SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495 * Component_GetComponent_TisSceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495_mB9E2F78811F2AABB897925C1B7F8048D2DE80911 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> SceneSetup::getCanvasObjects()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * SceneSetup_getCanvasObjects_m83F8921371700C9216F64D1E18D5E92D53EBE018_inline (SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PuzzleManager>()
inline PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * GameObject_GetComponent_TisPuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621_m1CEC56B09FA3DC09C0CAE787AB04CA5D3FD8BC5B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean PuzzleManager::checkCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PuzzleManager_checkCompleted_m45CCCC22B1A57D5C67D9A709AF391AE8FA48CB23_inline (PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<ShoppingListJson>(System.String)
inline ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * JsonUtility_FromJson_TisShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883_m251842ED0991894C88C336596F85979C4C7D98EC (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Items>::GetEnumerator()
inline Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200  List_1_GetEnumerator_m7C82855BDDDACFA8FC4BDFC43125EE8A8020CC0C (List_1_tCF973406031F1947E9529842765113D5582BB6B4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200  (*) (List_1_tCF973406031F1947E9529842765113D5582BB6B4 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Items>::get_Current()
inline Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C * Enumerator_get_Current_m22C4CA747B74E153C12379B80051BFCBC80FA1C4_inline (Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 * __this, const RuntimeMethod* method)
{
	return ((  Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C * (*) (Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Items>::MoveNext()
inline bool Enumerator_MoveNext_m6FAE4A944C7AF87C41A4B66B5DA481A552DD433F (Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Items>::Dispose()
inline void Enumerator_Dispose_m028397C556F8A71007C097FB26819473FFDFC679 (Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void ShoppingListJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShoppingListJson__ctor_m19F814D927AC1F5FCCEBF5080FC80C7519A97D89 (ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UI.Image>::GetEnumerator()
inline Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9  List_1_GetEnumerator_m2790E45DEDC41585CE1F71AEE05CA42AA263144F (List_1_t815A476B0A21E183042059E705F9E505478CD8AE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9  (*) (List_1_t815A476B0A21E183042059E705F9E505478CD8AE *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Image>::get_Current()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Enumerator_get_Current_mB7BF7A01D4A81E085002999BCD277447C21DB453_inline (Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Image>::MoveNext()
inline bool Enumerator_MoveNext_m22FF7C3699FCC2B3DE8931347905C2662EEEE3A4 (Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Image>::Dispose()
inline void Enumerator_Dispose_mD67F78371CA5D94FBCFC942FED3C1B4093C0A509 (Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<CameraManager>()
inline CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * GameObject_GetComponent_TisCameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A_m49F78D6A066976CAD804EE6F1A680EC41F4D26EA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(!0)
inline int32_t List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Image>::get_Item(System.Int32)
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_inline (List_1_t815A476B0A21E183042059E705F9E505478CD8AE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (List_1_t815A476B0A21E183042059E705F9E505478CD8AE *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m9F3CB318085029EFD8FEBB224C84F78D84543A0E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___duration3, bool ___depthTest4, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827 (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(!0)
inline bool List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<T> ShoppingListGenerator::GetRandomElements<System.String>(System.Collections.Generic.List`1<T>,System.Int32)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ShoppingListGenerator_GetRandomElements_TisString_t_mF12C4262241F8264C35E28A2E63EA070D7506743 (ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___inputList0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6 *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))ShoppingListGenerator_GetRandomElements_TisRuntimeObject_mEC9F5B2072F8EA55EF3CAE65F14F25A4DF354DE7_gshared)(__this, ___inputList0, ___count1, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Items>::.ctor()
inline void List_1__ctor_mF274B94BC4A7EC61B5D50F9B2F5A9AA50879E901 (List_1_tCF973406031F1947E9529842765113D5582BB6B4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCF973406031F1947E9529842765113D5582BB6B4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
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
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void ArtManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArtManager_Start_m6D646F5B97A1FB5ABFE3DA52600142B6189A0FFA (ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m52BF19F8E128AFF14D3F111ACA2594D1C7DC36A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(Transform children in this.transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_000e:
		{
			// foreach(Transform children in this.transform)
			RuntimeObject* L_2 = V_0;
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			V_1 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// originalPieces.Add(children.gameObject.GetComponent<RawImage>().texture);
			List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_4 = __this->get_originalPieces_4();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
			L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
			RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_7;
			L_7 = GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7(L_6, /*hidden argument*/GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
			Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_8;
			L_8 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_7, /*hidden argument*/NULL);
			List_1_Add_m52BF19F8E128AFF14D3F111ACA2594D1C7DC36A4(L_4, L_8, /*hidden argument*/List_1_Add_m52BF19F8E128AFF14D3F111ACA2594D1C7DC36A4_RuntimeMethod_var);
		}

IL_0035:
		{
			// foreach(Transform children in this.transform)
			RuntimeObject* L_9 = V_0;
			bool L_10;
			L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_000e;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x50, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_2;
			if (!L_12)
			{
				goto IL_004f;
			}
		}

IL_0049:
		{
			RuntimeObject* L_13 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// prepRandom();
		ArtManager_prepRandom_mD1BA1967E6FEDA0A4E7FBB722A204021309E490E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArtManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArtManager_Update_mE980083A1D8FFA72BB265CF166857106094B8769 (ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ArtManager::prepRandom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArtManager_prepRandom_mD1BA1967E6FEDA0A4E7FBB722A204021309E490E (ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m52BF19F8E128AFF14D3F111ACA2594D1C7DC36A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m0EAC31AFE8F497D2D36E00A85143974CEC4F42AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAB821335FCF60576F5D79B48F3C1AA79E14CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2DCD838A75A59665E55AB076695F59367886A199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int count = 0;
		V_0 = 0;
		// randomPieces.Clear();
		List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_0 = __this->get_randomPieces_5();
		List_1_Clear_m0EAC31AFE8F497D2D36E00A85143974CEC4F42AA(L_0, /*hidden argument*/List_1_Clear_m0EAC31AFE8F497D2D36E00A85143974CEC4F42AA_RuntimeMethod_var);
		goto IL_0055;
	}

IL_000f:
	{
		// int randomPick = Random.Range(0, originalPieces.Count);
		List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_1 = __this->get_originalPieces_4();
		int32_t L_2;
		L_2 = List_1_get_Count_m2DCD838A75A59665E55AB076695F59367886A199_inline(L_1, /*hidden argument*/List_1_get_Count_m2DCD838A75A59665E55AB076695F59367886A199_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (!randomPieces.Contains(originalPieces[randomPick]))
		List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_4 = __this->get_randomPieces_5();
		List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_5 = __this->get_originalPieces_4();
		int32_t L_6 = V_1;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_7;
		L_7 = List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_RuntimeMethod_var);
		bool L_8;
		L_8 = List_1_Contains_m2EAB821335FCF60576F5D79B48F3C1AA79E14CA9(L_4, L_7, /*hidden argument*/List_1_Contains_m2EAB821335FCF60576F5D79B48F3C1AA79E14CA9_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		// randomPieces.Add(originalPieces[randomPick]);
		List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_9 = __this->get_randomPieces_5();
		List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_10 = __this->get_originalPieces_4();
		int32_t L_11 = V_1;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_12;
		L_12 = List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_RuntimeMethod_var);
		List_1_Add_m52BF19F8E128AFF14D3F111ACA2594D1C7DC36A4(L_9, L_12, /*hidden argument*/List_1_Add_m52BF19F8E128AFF14D3F111ACA2594D1C7DC36A4_RuntimeMethod_var);
		// count++;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0055:
	{
		// while (count <= originalPieces.Count - 1)
		int32_t L_14 = V_0;
		List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_15 = __this->get_originalPieces_4();
		int32_t L_16;
		L_16 = List_1_get_Count_m2DCD838A75A59665E55AB076695F59367886A199_inline(L_15, /*hidden argument*/List_1_get_Count_m2DCD838A75A59665E55AB076695F59367886A199_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ArtManager::randomize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArtManager_randomize_m44BF4625FBD764429EF237586A92E96352E920AC (ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i <= this.transform.childCount - 1; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// this.transform.GetChild(i).GetComponent<RawImage>().texture = randomPieces[i];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, L_1, /*hidden argument*/NULL);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_3;
		L_3 = Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A(L_2, /*hidden argument*/Component_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mEFB8C40CB9606CC28E04D45092013ED9B5C70E9A_RuntimeMethod_var);
		List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_4 = __this->get_randomPieces_5();
		int32_t L_5 = V_0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_6;
		L_6 = List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_RuntimeMethod_var);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_3, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i <= this.transform.childCount - 1; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i <= this.transform.childCount - 1; i++)
		int32_t L_8 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_0004;
		}
	}
	{
		// prepRandom();
		ArtManager_prepRandom_mD1BA1967E6FEDA0A4E7FBB722A204021309E490E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArtManager::checkPuzzle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArtManager_checkPuzzle_m656CC1F0F54C132B19336DDAF05080B0B03E1A49 (ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FBD0F5E1DDA4322D417AEA7B8A2A811ABBC281B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAD30DFA1CEAA25F51C85549E7DD08CEFCAE3A20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int numCorrect = 0;
		V_0 = 0;
		// for (int i = 0; i <= this.transform.childCount - 1; i++)
		V_1 = 0;
		goto IL_003c;
	}

IL_0006:
	{
		// if (transform.GetChild(i).gameObject.GetComponent<RawImage>().texture.Equals(originalPieces[i]))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_4;
		L_4 = GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7(L_3, /*hidden argument*/GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_5;
		L_5 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_4, /*hidden argument*/NULL);
		List_1_t692E82B1A375B23285D8EAC6AA53F573315C6C3D * L_6 = __this->get_originalPieces_4();
		int32_t L_7 = V_1;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_8;
		L_8 = List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mC8870BF68646EF1E6065DAB25BEB8EC114C6A624_RuntimeMethod_var);
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_8);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		// numCorrect++;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0038:
	{
		// for (int i = 0; i <= this.transform.childCount - 1; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003c:
	{
		// for (int i = 0; i <= this.transform.childCount - 1; i++)
		int32_t L_12 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))))
		{
			goto IL_0006;
		}
	}
	{
		// if (numCorrect == this.transform.childCount)
		int32_t L_15 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_16, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_006c;
		}
	}
	{
		// text.text = "You are correct!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_text_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteral7FBD0F5E1DDA4322D417AEA7B8A2A811ABBC281B);
		goto IL_007c;
	}

IL_006c:
	{
		// text.text = "Not quite right!";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_text_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteralAAD30DFA1CEAA25F51C85549E7DD08CEFCAE3A20);
	}

IL_007c:
	{
		// numCorrect = 0;
		V_0 = 0;
		// }
		return;
	}
}
// System.Void ArtManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArtManager__ctor_m0585E8AAD33116B0E46F127FD950328BED220FC0 (ArtManager_t12A654C6916F7EED604D841A038DDB061FFA7CC7 * __this, const RuntimeMethod* method)
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
// System.Void CameraManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_Start_m3A8F66B836B9A9BC419B62EF88451549BBC9CCD0 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
{
	{
		// movingRight = false;
		__this->set_movingRight_9((bool)0);
		// movingLeft = false;
		__this->set_movingLeft_8((bool)0);
		// currentPiece = 0;
		__this->set_currentPiece_7(0);
		// }
		return;
	}
}
// System.Void CameraManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_Update_m911D2029A80BF20148CD94D496452F232343FF60 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral221088D053DAF499BF9901351F19958D88E9AD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print(currentPiece);
		int32_t L_0 = __this->get_currentPiece_7();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_2, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.Mouse0))
		bool L_3;
		L_3 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)323), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// diff = Camera.main.ScreenToWorldPoint(Input.mousePosition) - Camera.main.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_4, L_5, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_6, L_9, /*hidden argument*/NULL);
		__this->set_diff_5(L_10);
	}

IL_0045:
	{
		// if (Input.GetKeyUp(KeyCode.Mouse0))
		bool L_11;
		L_11 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)323), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00ec;
		}
	}
	{
		// if (diff.x < 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_diff_5();
		float L_13 = L_12->get_x_2();
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_00a1;
		}
	}
	{
		// print("Left");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, /*hidden argument*/NULL);
		// diff = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_diff_5(L_14);
		// movingLeft = true;
		__this->set_movingLeft_8((bool)1);
		// currentPiece -= 1;
		int32_t L_15 = __this->get_currentPiece_7();
		__this->set_currentPiece_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
		// }
		goto IL_00ec;
	}

IL_00a1:
	{
		// else if (diff.x > 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_diff_5();
		float L_17 = L_16->get_x_2();
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		// print("Right");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, /*hidden argument*/NULL);
		// diff = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_diff_5(L_18);
		// movingRight = true;
		__this->set_movingRight_9((bool)1);
		// currentPiece += 1;
		int32_t L_19 = __this->get_currentPiece_7();
		__this->set_currentPiece_7(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
	}

IL_00ec:
	{
		// if (movingLeft)
		bool L_20 = __this->get_movingLeft_8();
		if (!L_20)
		{
			goto IL_00fc;
		}
	}
	{
		// previousPiece();
		CameraManager_previousPiece_mE31FDA0EFDF389586C037FF5CA6493171ACF69F3(__this, /*hidden argument*/NULL);
		// }
		goto IL_010a;
	}

IL_00fc:
	{
		// else if (movingRight)
		bool L_21 = __this->get_movingRight_9();
		if (!L_21)
		{
			goto IL_010a;
		}
	}
	{
		// nextPiece();
		CameraManager_nextPiece_m3DE8EA8E31FDE222764AE3461EE18CBCDD30C4C5(__this, /*hidden argument*/NULL);
	}

IL_010a:
	{
		// if((!(currentPiece >= gallery.Count) && !(currentPiece < 0)) && transform.position.x == gallery[currentPiece].transform.position.x)
		int32_t L_22 = __this->get_currentPiece_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_23 = __this->get_gallery_4();
		int32_t L_24;
		L_24 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_23, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_22) >= ((int32_t)L_24)))
		{
			goto IL_0170;
		}
	}
	{
		int32_t L_25 = __this->get_currentPiece_7();
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_0170;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_29 = __this->get_gallery_4();
		int32_t L_30 = __this->get_currentPiece_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_2();
		if ((!(((float)L_28) == ((float)L_34))))
		{
			goto IL_0170;
		}
	}
	{
		// print("There");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral221088D053DAF499BF9901351F19958D88E9AD69, /*hidden argument*/NULL);
		// movingRight = false;
		__this->set_movingRight_9((bool)0);
		// movingLeft = false;
		__this->set_movingLeft_8((bool)0);
	}

IL_0170:
	{
		// }
		return;
	}
}
// System.Void CameraManager::nextPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_nextPiece_m3DE8EA8E31FDE222764AE3461EE18CBCDD30C4C5 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(!(currentPiece >= gallery.Count))
		int32_t L_0 = __this->get_currentPiece_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_gallery_4();
		int32_t L_2;
		L_2 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_1, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0085;
		}
	}
	{
		// Vector3 target = new Vector3(gallery[currentPiece].transform.position.x, this.transform.position.y, this.transform.position.z);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get_gallery_4();
		int32_t L_4 = __this->get_currentPiece_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_8, L_11, L_14, /*hidden argument*/NULL);
		// Camera.main.transform.position = Vector3.MoveTowards(this.transform.position, target, 2000 * Time.deltaTime);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_18, L_19, ((float)il2cpp_codegen_multiply((float)(2000.0f), (float)L_20)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_21, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void CameraManager::previousPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager_previousPiece_mE31FDA0EFDF389586C037FF5CA6493171ACF69F3 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (! (currentPiece < 0))
		int32_t L_0 = __this->get_currentPiece_7();
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_007b;
		}
	}
	{
		// Vector3 target = new Vector3(gallery[currentPiece].transform.position.x, this.transform.position.y, this.transform.position.z);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_gallery_4();
		int32_t L_2 = __this->get_currentPiece_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_6, L_9, L_12, /*hidden argument*/NULL);
		// Camera.main.transform.position = Vector3.MoveTowards(this.transform.position, target, 2000 * Time.deltaTime);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		float L_18;
		L_18 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_16, L_17, ((float)il2cpp_codegen_multiply((float)(2000.0f), (float)L_18)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_19, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void CameraManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraManager__ctor_m932EDBCBAE89115380AA929ED5BC9823B9371185 (CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * __this, const RuntimeMethod* method)
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
// System.Void ClickHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickHandler_Start_mA745E0E828D214384271368F85D413475AFD051B (ClickHandler_t5E59597424DB3BABAD4E2086DF0B4BAD5BCF13D9 * __this, const RuntimeMethod* method)
{
	{
		// pic1 = null;
		__this->set_pic1_4((RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)NULL);
		// pic2 = null;
		__this->set_pic2_5((RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)NULL);
		// }
		return;
	}
}
// System.Void ClickHandler::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickHandler_OnClick_mE3C001FEB191C3E519FCF790C0C35655914F31B9 (ClickHandler_t5E59597424DB3BABAD4E2086DF0B4BAD5BCF13D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_0 = NULL;
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * V_1 = NULL;
	int32_t V_2 = 0;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * V_4 = NULL;
	{
		// PointerEventData pointer = new PointerEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// pointer.position = Input.mousePosition;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline(L_2, L_4, /*hidden argument*/NULL);
		// List<RaycastResult> raycastResults = new List<RaycastResult>();
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_5 = (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)il2cpp_codegen_object_new(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3(L_5, /*hidden argument*/List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		V_1 = L_5;
		// EventSystem.current.RaycastAll(pointer, raycastResults);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_6;
		L_6 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = V_0;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_8 = V_1;
		EventSystem_RaycastAll_m45A359AEC0BED3D47B50A862A2F69911373DE934(L_6, L_7, L_8, /*hidden argument*/NULL);
		// for (int index = 0; index < raycastResults.Count; index++)
		V_2 = 0;
		goto IL_007f;
	}

IL_0031:
	{
		// RaycastResult curRaysastResult = raycastResults[index];
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_9 = V_1;
		int32_t L_10 = V_2;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_11;
		L_11 = List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var);
		V_3 = L_11;
		// if(pic1 == null)
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_12 = __this->get_pic1_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		// pic1 = curRaysastResult.gameObject.GetComponent<RawImage>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_3), /*hidden argument*/NULL);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_15;
		L_15 = GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7(L_14, /*hidden argument*/GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		__this->set_pic1_4(L_15);
		// }
		goto IL_007b;
	}

IL_005b:
	{
		// else if(pic2 == null)
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_16 = __this->get_pic2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		// pic2 = curRaysastResult.gameObject.GetComponent<RawImage>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_3), /*hidden argument*/NULL);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_19;
		L_19 = GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7(L_18, /*hidden argument*/GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		__this->set_pic2_5(L_19);
	}

IL_007b:
	{
		// for (int index = 0; index < raycastResults.Count; index++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007f:
	{
		// for (int index = 0; index < raycastResults.Count; index++)
		int32_t L_21 = V_2;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_22 = V_1;
		int32_t L_23;
		L_23 = List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline(L_22, /*hidden argument*/List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0031;
		}
	}
	{
		// if(pic1 != null && pic2 != null)
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_24 = __this->get_pic1_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00e2;
		}
	}
	{
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_26 = __this->get_pic2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00e2;
		}
	}
	{
		// Texture holder = pic1.texture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_28 = __this->get_pic1_4();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_29;
		L_29 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		// pic1.texture = pic2.texture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_30 = __this->get_pic1_4();
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_31 = __this->get_pic2_5();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_32;
		L_32 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_31, /*hidden argument*/NULL);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_30, L_32, /*hidden argument*/NULL);
		// pic2.texture = holder;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_33 = __this->get_pic2_5();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_34 = V_4;
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_33, L_34, /*hidden argument*/NULL);
		// pic1 = null;
		__this->set_pic1_4((RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)NULL);
		// pic2 = null;
		__this->set_pic2_5((RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)NULL);
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void ClickHandler::OnPinch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickHandler_OnPinch_mDECEF346A2A4C40FEF3D764178D9A9BB2AB9C48A (ClickHandler_t5E59597424DB3BABAD4E2086DF0B4BAD5BCF13D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_0 = NULL;
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * V_1 = NULL;
	int32_t V_2 = 0;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * V_4 = NULL;
	{
		// PointerEventData pointer = new PointerEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// pointer.position = hand.transform.position ;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_hand_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline(L_2, L_6, /*hidden argument*/NULL);
		// List<RaycastResult> raycastResults = new List<RaycastResult>();
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_7 = (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)il2cpp_codegen_object_new(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3(L_7, /*hidden argument*/List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		V_1 = L_7;
		// EventSystem.current.RaycastAll(pointer, raycastResults);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_8;
		L_8 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_9 = V_0;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_10 = V_1;
		EventSystem_RaycastAll_m45A359AEC0BED3D47B50A862A2F69911373DE934(L_8, L_9, L_10, /*hidden argument*/NULL);
		// for (int index = 0; index < raycastResults.Count; index++)
		V_2 = 0;
		goto IL_008a;
	}

IL_003c:
	{
		// RaycastResult curRaysastResult = raycastResults[index];
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_11 = V_1;
		int32_t L_12 = V_2;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_13;
		L_13 = List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var);
		V_3 = L_13;
		// if (pic1 == null)
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_14 = __this->get_pic1_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		// pic1 = curRaysastResult.gameObject.GetComponent<RawImage>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_3), /*hidden argument*/NULL);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_17;
		L_17 = GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7(L_16, /*hidden argument*/GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		__this->set_pic1_4(L_17);
		// }
		goto IL_0086;
	}

IL_0066:
	{
		// else if (pic2 == null)
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_18 = __this->get_pic2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0086;
		}
	}
	{
		// pic2 = curRaysastResult.gameObject.GetComponent<RawImage>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_3), /*hidden argument*/NULL);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_21;
		L_21 = GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7(L_20, /*hidden argument*/GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		__this->set_pic2_5(L_21);
	}

IL_0086:
	{
		// for (int index = 0; index < raycastResults.Count; index++)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_008a:
	{
		// for (int index = 0; index < raycastResults.Count; index++)
		int32_t L_23 = V_2;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_24 = V_1;
		int32_t L_25;
		L_25 = List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline(L_24, /*hidden argument*/List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_003c;
		}
	}
	{
		// if (pic1 != null && pic2 != null)
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_26 = __this->get_pic1_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ed;
		}
	}
	{
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_28 = __this->get_pic2_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00ed;
		}
	}
	{
		// Texture holder = pic1.texture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_30 = __this->get_pic1_4();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_31;
		L_31 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		// pic1.texture = pic2.texture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_32 = __this->get_pic1_4();
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_33 = __this->get_pic2_5();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_34;
		L_34 = RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline(L_33, /*hidden argument*/NULL);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_32, L_34, /*hidden argument*/NULL);
		// pic2.texture = holder;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_35 = __this->get_pic2_5();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_36 = V_4;
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_35, L_36, /*hidden argument*/NULL);
		// pic1 = null;
		__this->set_pic1_4((RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)NULL);
		// pic2 = null;
		__this->set_pic2_5((RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)NULL);
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void ClickHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickHandler__ctor_mD7ED6208EAAA036DDC8E98AA5A460BF61EEAED27 (ClickHandler_t5E59597424DB3BABAD4E2086DF0B4BAD5BCF13D9 * __this, const RuntimeMethod* method)
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
// System.Void DisplayTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayTime_Start_mA65F378DA217C3DAC5C112F8EB2F56BC029D915D (DisplayTime_tBB0F445CFAF6E9BE1613DC7A20543A37B8C5A090 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E3E955F7EC4D1E664CB7FFBD23A65233A1C175F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int seconds = Mathf.FloorToInt(TimerManager.timer % 60);
		float L_0 = ((TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_StaticFields*)il2cpp_codegen_static_fields_for(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var))->get_timer_5();
		int32_t L_1;
		L_1 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E((fmodf(L_0, (60.0f))), /*hidden argument*/NULL);
		V_2 = L_1;
		// if (seconds < 10)
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)10))))
		{
			goto IL_002a;
		}
	}
	{
		// sec = "0" + seconds.ToString();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// }
		goto IL_0032;
	}

IL_002a:
	{
		// sec = seconds.ToString();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0032:
	{
		// min = Mathf.FloorToInt(TimerManager.timer / 60).ToString();
		float L_6 = ((TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_StaticFields*)il2cpp_codegen_static_fields_for(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var))->get_timer_5();
		int32_t L_7;
		L_7 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)L_6/(float)(60.0f))), /*hidden argument*/NULL);
		V_3 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		V_1 = L_8;
		// text.text = "Completed Time: " + min + ":" + sec;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_text_4();
		String_t* L_10 = V_1;
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral4E3E955F7EC4D1E664CB7FFBD23A65233A1C175F, L_10, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_11, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		// }
		return;
	}
}
// System.Void DisplayTime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayTime_Update_m1DE80A03D4A3E3386251A9A255A748C7012846C3 (DisplayTime_tBB0F445CFAF6E9BE1613DC7A20543A37B8C5A090 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DisplayTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayTime__ctor_m66307D0B66FA9B196041778F77740627DB58EAD9 (DisplayTime_tBB0F445CFAF6E9BE1613DC7A20543A37B8C5A090 * __this, const RuntimeMethod* method)
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
// System.Void DragManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragManager_Start_m6D86DB9C99CC804AD69791E8AB9558995B2603C9 (DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DragManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragManager_Update_m9674257BB8A0BEDAB64D9464F154B8B1FCAF6C31 (DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void DragManager::up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragManager_up_m1C41097B2A370AAFDB97D021564442B33111CD72 (DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_5;
		L_5 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (hit.collider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// GameObject gameObject = hit.transform.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (gameObject.tag == "Piece")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// gameObject.GetComponent<Draggable>().up();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
		Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * L_14;
		L_14 = GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053(L_13, /*hidden argument*/GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053_RuntimeMethod_var);
		Draggable_up_m7EEF06F7E4F9744BA86EF5E4A8FDA2512392C821(L_14, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void DragManager::down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragManager_down_m6230C11C97155742C1078E316B476473A5289E20 (DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_5;
		L_5 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (hit.collider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// GameObject gameObject = hit.transform.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (gameObject.tag == "Piece")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// gameObject.GetComponent<Draggable>().down();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
		Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * L_14;
		L_14 = GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053(L_13, /*hidden argument*/GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053_RuntimeMethod_var);
		Draggable_down_m3C45945F8E61B1BF869E5BF133DA93F0FF1D4E63(L_14, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void DragManager::drag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragManager_drag_m1B05CA9F4D9EC09AB610457729FB6277C2E7F449 (DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_5;
		L_5 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (hit.collider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// GameObject gameObject = hit.transform.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (gameObject.tag == "Piece")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
		String_t* L_11;
		L_11 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// gameObject.GetComponent<Draggable>().drag();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
		Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * L_14;
		L_14 = GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053(L_13, /*hidden argument*/GameObject_GetComponent_TisDraggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8_m078CE0208D49C4385E15AD0DE593492116C7A053_RuntimeMethod_var);
		Draggable_drag_m9FC3A21186CFB2117926897A7FC06CD07852FDF1(L_14, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void DragManager::setTouchPos(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragManager_setTouchPos_m360637ECAE13806E6501DA8A125427A0E6601AF4 (DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A * __this, String_t* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// string[] coord = args.Split('|');
		String_t* L_0 = ___args0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)124));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		// float x = float.Parse(coord[0]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		float L_7;
		L_7 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// float y = float.Parse(coord[1]);
		int32_t L_8 = 1;
		String_t* L_9 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		float L_10;
		L_10 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// currentTouchPos = new Vector3(x, y, 0);
		float L_11 = V_0;
		float L_12 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), L_11, L_12, (0.0f), /*hidden argument*/NULL);
		__this->set_currentTouchPos_4(L_13);
		// }
		return;
	}
}
// UnityEngine.Vector3 DragManager::getTouchPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DragManager_getTouchPos_mEA03B6F77B3347D3B0E0BC63B43F525ABEEBC70B (DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A * __this, const RuntimeMethod* method)
{
	{
		// return currentTouchPos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_currentTouchPos_4();
		return L_0;
	}
}
// System.Void DragManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragManager__ctor_m196DC752CEC9FCF5FCD1FE0B48048955BF30C8AA (DragManager_t9059EDFD114CD7A8C393479297B1632C4B5AF01A * __this, const RuntimeMethod* method)
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
// System.Void Draggable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_Start_mB023EF3F195B4D8068CAF938B2989C1CE02D6C4C (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Draggable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_Update_mA2E1F3D87FBE84AB4F015EC59594B53785605A16 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Draggable::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_OnMouseDown_m70A678C3412E00CDD4158D79D0E332345CB0AB65 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method)
{
	{
		// down();
		Draggable_down_m3C45945F8E61B1BF869E5BF133DA93F0FF1D4E63(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Draggable::OnMouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_OnMouseDrag_m376784069E4FBE4BE8B92F331185AB7A71F41355 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method)
{
	{
		// drag();
		Draggable_drag_m9FC3A21186CFB2117926897A7FC06CD07852FDF1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Draggable::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_OnMouseUp_m668879FF8EBECF5FCD6444787BCE0FDB49A097F5 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method)
{
	{
		// up();
		Draggable_up_m7EEF06F7E4F9744BA86EF5E4A8FDA2512392C821(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Draggable::down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_down_m3C45945F8E61B1BF869E5BF133DA93F0FF1D4E63 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method)
{
	{
		// screenPoint = Camera.main.WorldToScreenPoint(gameObject.transform.localPosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_0, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		__this->set_screenPoint_6(L_5);
		// originalPos = gameObject.transform.localPosition;//GameObject.Find("DragManager").GetComponent<DragManager>().getTouchPos();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		__this->set_originalPos_8(L_9);
		// offset = gameObject.transform.position - Camera.main.ScreenToWorldPoint(new Vector2(Input.mousePosition.x, Input.mousePosition.y));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), L_15, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_13, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_21, /*hidden argument*/NULL);
		__this->set_offset_5(L_22);
		// }
		return;
	}
}
// System.Void Draggable::drag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_drag_m9FC3A21186CFB2117926897A7FC06CD07852FDF1 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// curScreenPoint = Camera.main.ScreenToWorldPoint(new Vector2(Input.mousePosition.x, Input.mousePosition.y));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		__this->set_curScreenPoint_7(L_8);
		// Vector2 curPosition = curScreenPoint + offset;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = __this->get_curScreenPoint_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = __this->get_offset_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// this.GetComponent<Rigidbody2D>().MovePosition(curPosition);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_12;
		L_12 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Draggable::up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable_up_m7EEF06F7E4F9744BA86EF5E4A8FDA2512392C821 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// curScreenPoint = gameObject.transform.localPosition;//GameObject.Find("DragManager").GetComponent<DragManager>().getTouchPos();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		__this->set_curScreenPoint_7(L_3);
		// this.GetComponent<Rigidbody2D>().velocity = (curScreenPoint - originalPos) * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4;
		L_4 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = __this->get_curScreenPoint_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = __this->get_originalPos_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_5, L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_7, L_8, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_4, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Draggable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draggable__ctor_m6CA188F914F24CC1C7B6210C9EAEAC6AACC40583 (Draggable_tDAF0C236C7BF94CE2EDB34F53408805D9F33A6C8 * __this, const RuntimeMethod* method)
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495_mB9E2F78811F2AABB897925C1B7F8048D2DE80911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621_m1CEC56B09FA3DC09C0CAE787AB04CA5D3FD8BC5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (SceneManager.GetActiveScene().buildIndex == 2)
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0082;
		}
	}
	{
		// int count = 0;
		V_1 = 0;
		// foreach (GameObject child in this.GetComponent<SceneSetup>().getCanvasObjects())
		SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495 * L_2;
		L_2 = Component_GetComponent_TisSceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495_mB9E2F78811F2AABB897925C1B7F8048D2DE80911(__this, /*hidden argument*/Component_GetComponent_TisSceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495_mB9E2F78811F2AABB897925C1B7F8048D2DE80911_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3;
		L_3 = SceneSetup_getCanvasObjects_m83F8921371700C9216F64D1E18D5E92D53EBE018_inline(L_2, /*hidden argument*/NULL);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_4;
		L_4 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_3, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005a;
		}

IL_0025:
		{
			// foreach (GameObject child in this.GetComponent<SceneSetup>().getCanvasObjects())
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
			L_5 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_3 = L_5;
			// if (child.gameObject.tag.Equals("Canvas") && child.gameObject.GetComponent<PuzzleManager>().checkCompleted())
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_3;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_6, /*hidden argument*/NULL);
			String_t* L_8;
			L_8 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_7, /*hidden argument*/NULL);
			bool L_9;
			L_9 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_8, _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_005a;
			}
		}

IL_0044:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_3;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
			L_11 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_10, /*hidden argument*/NULL);
			PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * L_12;
			L_12 = GameObject_GetComponent_TisPuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621_m1CEC56B09FA3DC09C0CAE787AB04CA5D3FD8BC5B(L_11, /*hidden argument*/GameObject_GetComponent_TisPuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621_m1CEC56B09FA3DC09C0CAE787AB04CA5D3FD8BC5B_RuntimeMethod_var);
			bool L_13;
			L_13 = PuzzleManager_checkCompleted_m45CCCC22B1A57D5C67D9A709AF391AE8FA48CB23_inline(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_005a;
			}
		}

IL_0056:
		{
			// count++;
			int32_t L_14 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		}

IL_005a:
		{
			// foreach (GameObject child in this.GetComponent<SceneSetup>().getCanvasObjects())
			bool L_15;
			L_15 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0025;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x73, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x73, IL_0073)
	}

IL_0073:
	{
		// if (count == numPaintings)
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_numPaintings_4();
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0082;
		}
	}
	{
		// SceneManager.LoadScene(3);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(3, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m6022C5CDD590728691B22E9B87185BFE3D6A8EC1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RestartGame_m906CEC9BBE9B7A0841B58384E3FD90376DF1D440 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
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
// System.Void Items::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Items__ctor_m0B4FA8E78E90D522DD25BC76DACD6AE88753A60D (Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void JsonExamplpe::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonExamplpe_Start_mBA1DC8AD14596CF8431CFDFC32634F2F8C0658A1 (JsonExamplpe_tE7F0EE78AC71FB0D3E32F7A4718A40FDCE173131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m028397C556F8A71007C097FB26819473FFDFC679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6FAE4A944C7AF87C41A4B66B5DA481A552DD433F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m22C4CA747B74E153C12379B80051BFCBC80FA1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883_m251842ED0991894C88C336596F85979C4C7D98EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C82855BDDDACFA8FC4BDFC43125EE8A8020CC0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B41695BDFD8C22B8D4A28D45321759D252CEE55);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * V_0 = NULL;
	Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// TextAsset asset = Resources.Load("Items") as TextAsset;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral0155A0AFC8BEA8B1160767A28C9F6B5A5DE21612, /*hidden argument*/NULL);
		V_0 = ((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_0, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var));
		// if (asset != null)
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0077;
		}
	}
	{
		// ShoppingListJson = JsonUtility.FromJson<ShoppingListJson>(asset.text);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_3 = V_0;
		String_t* L_4;
		L_4 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_3, /*hidden argument*/NULL);
		ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * L_5;
		L_5 = JsonUtility_FromJson_TisShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883_m251842ED0991894C88C336596F85979C4C7D98EC(L_4, /*hidden argument*/JsonUtility_FromJson_TisShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883_m251842ED0991894C88C336596F85979C4C7D98EC_RuntimeMethod_var);
		__this->set_ShoppingListJson_4(L_5);
		// foreach (Items item in ShoppingListJson.Items)
		ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * L_6 = __this->get_ShoppingListJson_4();
		List_1_tCF973406031F1947E9529842765113D5582BB6B4 * L_7 = L_6->get_Items_0();
		Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200  L_8;
		L_8 = List_1_GetEnumerator_m7C82855BDDDACFA8FC4BDFC43125EE8A8020CC0C(L_7, /*hidden argument*/List_1_GetEnumerator_m7C82855BDDDACFA8FC4BDFC43125EE8A8020CC0C_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_003d:
		{
			// foreach (Items item in ShoppingListJson.Items)
			Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C * L_9;
			L_9 = Enumerator_get_Current_m22C4CA747B74E153C12379B80051BFCBC80FA1C4_inline((Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m22C4CA747B74E153C12379B80051BFCBC80FA1C4_RuntimeMethod_var);
			// print(item.Name);
			Items_tEB5CEF9363AAB39F6C6E6B5B0881D4C66976DA6C * L_10 = L_9;
			String_t* L_11 = L_10->get_Name_0();
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_11, /*hidden argument*/NULL);
			// print(item.Price);
			int32_t L_12 = L_10->get_Price_1();
			int32_t L_13 = L_12;
			RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_14, /*hidden argument*/NULL);
		}

IL_005e:
		{
			// foreach (Items item in ShoppingListJson.Items)
			bool L_15;
			L_15 = Enumerator_MoveNext_m6FAE4A944C7AF87C41A4B66B5DA481A552DD433F((Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m6FAE4A944C7AF87C41A4B66B5DA481A552DD433F_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_003d;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x81, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m028397C556F8A71007C097FB26819473FFDFC679((Enumerator_t901C981C8794F18CE14D610DAB5D5A59E2E5C200 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m028397C556F8A71007C097FB26819473FFDFC679_RuntimeMethod_var);
		IL2CPP_END_FINALLY(105)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0077:
	{
		// print("Asset is null");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral4B41695BDFD8C22B8D4A28D45321759D252CEE55, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void JsonExamplpe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonExamplpe__ctor_m42C592F82F90518D3CEF5603F20B235F197F8254 (JsonExamplpe_tE7F0EE78AC71FB0D3E32F7A4718A40FDCE173131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ShoppingListJson ShoppingListJson = new ShoppingListJson();
		ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * L_0 = (ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 *)il2cpp_codegen_object_new(ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883_il2cpp_TypeInfo_var);
		ShoppingListJson__ctor_m19F814D927AC1F5FCCEBF5080FC80C7519A97D89(L_0, /*hidden argument*/NULL);
		__this->set_ShoppingListJson_4(L_0);
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
// System.Void PieceManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_Start_m91F7BAF5E61D1DE21E2E646AAA4749E345EAB3EC (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
{
	{
		// foundPieces = 0;
		__this->set_foundPieces_14((0.0f));
		// }
		return;
	}
}
// System.Void PieceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_Update_mC0E85BE864B732F25960A48B9FFD6B69E7813C70 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD67F78371CA5D94FBCFC942FED3C1B4093C0A509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m22FF7C3699FCC2B3DE8931347905C2662EEEE3A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB7BF7A01D4A81E085002999BCD277447C21DB453_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A_m49F78D6A066976CAD804EE6F1A680EC41F4D26EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2790E45DEDC41585CE1F71AEE05CA42AA263144F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if(Input.GetKeyDown(KeyCode.Q))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)113), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (foundPieces == worldPieces.Count)
		float L_1 = __this->get_foundPieces_14();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get_worldPieces_4();
		int32_t L_3;
		L_3 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_2, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((!(((float)L_1) == ((float)((float)((float)L_3))))))
		{
			goto IL_009f;
		}
	}
	{
		// foreach (Image pieces in canvasPieces)
		List_1_t815A476B0A21E183042059E705F9E505478CD8AE * L_4 = __this->get_canvasPieces_5();
		Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9  L_5;
		L_5 = List_1_GetEnumerator_m2790E45DEDC41585CE1F71AEE05CA42AA263144F(L_4, /*hidden argument*/List_1_GetEnumerator_m2790E45DEDC41585CE1F71AEE05CA42AA263144F_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0030:
		{
			// foreach (Image pieces in canvasPieces)
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6;
			L_6 = Enumerator_get_Current_mB7BF7A01D4A81E085002999BCD277447C21DB453_inline((Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB7BF7A01D4A81E085002999BCD277447C21DB453_RuntimeMethod_var);
			// pieces.gameObject.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		}

IL_0042:
		{
			// foreach (Image pieces in canvasPieces)
			bool L_8;
			L_8 = Enumerator_MoveNext_m22FF7C3699FCC2B3DE8931347905C2662EEEE3A4((Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m22FF7C3699FCC2B3DE8931347905C2662EEEE3A4_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0030;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD67F78371CA5D94FBCFC942FED3C1B4093C0A509((Enumerator_t98781EF6381C54D1C5756EE47328A8AFB5158BF9 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD67F78371CA5D94FBCFC942FED3C1B4093C0A509_RuntimeMethod_var);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		// fullPiece.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_fullPiece_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// pieceInfo.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_pieceInfo_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// button.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_button_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// myCamera.GetComponent<CameraManager>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_myCamera_9();
		CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * L_16;
		L_16 = GameObject_GetComponent_TisCameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A_m49F78D6A066976CAD804EE6F1A680EC41F4D26EA(L_15, /*hidden argument*/GameObject_GetComponent_TisCameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A_m49F78D6A066976CAD804EE6F1A680EC41F4D26EA_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_16, (bool)0, /*hidden argument*/NULL);
	}

IL_009f:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_17;
		L_17 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0132;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18;
		L_18 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_20;
		L_20 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_18, L_19, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out raycastHit, 10000f))
		bool L_21;
		L_21 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_20, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), (10000.0f), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0132;
		}
	}
	{
		// if (raycastHit.transform.tag.Equals("Piece"))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_23, _stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0132;
		}
	}
	{
		// int foundIndex = worldPieces.IndexOf(raycastHit.transform.gameObject);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_25 = __this->get_worldPieces_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_26, /*hidden argument*/NULL);
		int32_t L_28;
		L_28 = List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A(L_25, L_27, /*hidden argument*/List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		V_2 = L_28;
		// worldPieces[foundIndex].SetActive(false);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_29 = __this->get_worldPieces_4();
		int32_t L_30 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_31, (bool)0, /*hidden argument*/NULL);
		// canvasPieces[foundIndex].gameObject.SetActive(true);
		List_1_t815A476B0A21E183042059E705F9E505478CD8AE * L_32 = __this->get_canvasPieces_5();
		int32_t L_33 = V_2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_34;
		L_34 = List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_inline(L_32, L_33, /*hidden argument*/List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_34, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_35, (bool)1, /*hidden argument*/NULL);
		// foundPieces++;
		float L_36 = __this->get_foundPieces_14();
		__this->set_foundPieces_14(((float)il2cpp_codegen_add((float)L_36, (float)(1.0f))));
	}

IL_0132:
	{
		// if (checkPinch)
		bool L_37 = __this->get_checkPinch_13();
		if (!L_37)
		{
			goto IL_028c;
		}
	}
	{
		// Ray ray = new Ray(Camera.main.transform.position, (hand.transform.position - Camera.main.transform.position) * 1000);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_38;
		L_38 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_hand_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_44;
		L_44 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_43, L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_47, (1000.0f), /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_49), L_40, L_48, /*hidden argument*/NULL);
		// Debug.Log(Camera.main.transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_50;
		L_50 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = L_52;
		RuntimeObject * L_54 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_53);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_54, /*hidden argument*/NULL);
		// Debug.Log(hand.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_hand_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = L_57;
		RuntimeObject * L_59 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_58);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_59, /*hidden argument*/NULL);
		// Debug.DrawRay(Camera.main.transform.position,(hand.transform.position - Camera.main.transform.position)*1000 ,Color.green, 10, false);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_60;
		L_60 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_61, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63 = __this->get_hand_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_63, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_64, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_66;
		L_66 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_66, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_67, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_65, L_68, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_69, (1000.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_71;
		L_71 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Debug_DrawRay_m9F3CB318085029EFD8FEBB224C84F78D84543A0E(L_62, L_70, L_71, (10.0f), (bool)0, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out raycastHit, 10000f))
		bool L_72;
		L_72 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_49, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), (10000.0f), /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_028c;
		}
	}
	{
		// Debug.Log(raycastHit.transform.name);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		String_t* L_74;
		L_74 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_74, /*hidden argument*/NULL);
		// if (raycastHit.transform.tag.Equals("Piece"))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		String_t* L_76;
		L_76 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_75, /*hidden argument*/NULL);
		bool L_77;
		L_77 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_76, _stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_028c;
		}
	}
	{
		// int foundIndex = worldPieces.IndexOf(raycastHit.transform.gameObject);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_78 = __this->get_worldPieces_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80;
		L_80 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_79, /*hidden argument*/NULL);
		int32_t L_81;
		L_81 = List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A(L_78, L_80, /*hidden argument*/List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		V_4 = L_81;
		// worldPieces[foundIndex].SetActive(false);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_82 = __this->get_worldPieces_4();
		int32_t L_83 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84;
		L_84 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_82, L_83, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_84, (bool)0, /*hidden argument*/NULL);
		// canvasPieces[foundIndex].gameObject.SetActive(true);
		List_1_t815A476B0A21E183042059E705F9E505478CD8AE * L_85 = __this->get_canvasPieces_5();
		int32_t L_86 = V_4;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_87;
		L_87 = List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_inline(L_85, L_86, /*hidden argument*/List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88;
		L_88 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_87, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_88, (bool)1, /*hidden argument*/NULL);
		// foundPieces++;
		float L_89 = __this->get_foundPieces_14();
		__this->set_foundPieces_14(((float)il2cpp_codegen_add((float)L_89, (float)(1.0f))));
	}

IL_028c:
	{
		// }
		return;
	}
}
// System.Void PieceManager::PinchTrueLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_PinchTrueLeft_m581343A8D9FE1D9FD907FED232A3D832A6B23A2D (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
{
	{
		// checkPinch = true;
		__this->set_checkPinch_13((bool)1);
		// hand = handLeft;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_handLeft_11();
		__this->set_hand_12(L_0);
		// }
		return;
	}
}
// System.Void PieceManager::PinchFalseLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_PinchFalseLeft_m7963EAA13B1EB45730569A6E829D7031840A7EDD (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
{
	{
		// checkPinch = false;
		__this->set_checkPinch_13((bool)0);
		// hand = null;
		__this->set_hand_12((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void PieceManager::PinchTrueRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_PinchTrueRight_mC9ABA89A9EA54ECC27FCAF57F7315A8E8036A327 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
{
	{
		// checkPinch = true;
		__this->set_checkPinch_13((bool)1);
		// hand = handRight;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_handRight_10();
		__this->set_hand_12(L_0);
		// }
		return;
	}
}
// System.Void PieceManager::PinchFalseRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_PinchFalseRight_mD5083C946DC8E819CC293931076153CB9A1575F7 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
{
	{
		// checkPinch = false;
		__this->set_checkPinch_13((bool)0);
		// hand = null;
		__this->set_hand_12((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void PieceManager::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager_RestartGame_mA3367097B3D83DD79B5E293794339B10A72CC40C (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PieceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceManager__ctor_m4A12FD1F179C8F8C4761BCED153FCCE1FBA802E9 (PieceManager_t788F8C79DC9E091AF2723E5CB3B77BD19090C0C3 * __this, const RuntimeMethod* method)
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
// System.Void PuzzleManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzleManager_Start_mDAB64A758C83D2A4A76DCFF52F841C283D0BB9E0 (PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PuzzleManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzleManager_Update_mE7FEFB8E9EC67DAA8EE8CF6C8F62F68D511B55D4 (PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C348F7BAC9D7775F5F983C8DBB9BDC7C933E59E);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (foundPieces == worldPieces.Count)
		float L_0 = __this->get_foundPieces_8();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_worldPieces_4();
		int32_t L_2;
		L_2 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_1, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((!(((float)L_0) == ((float)((float)((float)L_2))))))
		{
			goto IL_008b;
		}
	}
	{
		// this.transform.Find("PiecePart1").gameObject.SetActive(false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_3, _stringLiteral4C348F7BAC9D7775F5F983C8DBB9BDC7C933E59E, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// foreach (GameObject pieces in canvasPieces)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_canvasPieces_5();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_7;
		L_7 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_6, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_003d:
		{
			// foreach (GameObject pieces in canvasPieces)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// pieces.gameObject.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
			L_9 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_8, /*hidden argument*/NULL);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		}

IL_004f:
		{
			// foreach (GameObject pieces in canvasPieces)
			bool L_10;
			L_10 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_003d;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		// fullPiece.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_fullPiece_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_11, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// foundPieces = 0;
		__this->set_foundPieces_8((0.0f));
		// isCompleted = true;
		__this->set_isCompleted_9((bool)1);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void PuzzleManager::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzleManager_OnCollisionEnter2D_m55DB0651101D21BEBE6241351A7E53866CB919BD (PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (collision.transform.tag.Equals("Piece"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteral7CDF4AAD9891F781199CDF96E9F8048F8B21EE3B, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		// if (worldPieces.Contains(collision.transform.gameObject))
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_worldPieces_4();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_5 = ___collision0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_5, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F(L_4, L_7, /*hidden argument*/List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		// int foundIndex = worldPieces.IndexOf(collision.transform.gameObject);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = __this->get_worldPieces_4();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_10 = ___collision0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_10, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A(L_9, L_12, /*hidden argument*/List_1_IndexOf_mD99E8003B617CB662A4523739ED6E3BE74582D1A_RuntimeMethod_var);
		V_0 = L_13;
		// canvasPieces[foundIndex].gameObject.SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = __this->get_canvasPieces_5();
		int32_t L_15 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_16, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		// Destroy(collision.transform.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_18 = ___collision0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_18, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_20, /*hidden argument*/NULL);
		// foundPieces++;
		float L_21 = __this->get_foundPieces_8();
		__this->set_foundPieces_8(((float)il2cpp_codegen_add((float)L_21, (float)(1.0f))));
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Boolean PuzzleManager::checkCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PuzzleManager_checkCompleted_m45CCCC22B1A57D5C67D9A709AF391AE8FA48CB23 (PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * __this, const RuntimeMethod* method)
{
	{
		// return isCompleted;
		bool L_0 = __this->get_isCompleted_9();
		return L_0;
	}
}
// System.Void PuzzleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzleManager__ctor_m3D5A7E3A7532C9955A42CF61829DFBBC69300920 (PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * __this, const RuntimeMethod* method)
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
// System.Void SceneSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSetup_Start_mA4F2B234F7FFECA6B7A4E04A328D3AC579873217 (SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int cardPos = Random.Range(0, 4), i = 0;
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_0 = L_0;
		// int cardPos = Random.Range(0, 4), i = 0;
		V_1 = 0;
		// canvasObjects[0].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_canvasObjects_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_1, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// paintPieces[0].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get_paintPieces_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_3, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// canvasInScene.Add(canvasObjects[0]);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_canvasInScene_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_canvasObjects_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_6, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_5, L_7, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// canvasObjects[0].transform.position = positions[cardPos].transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_canvasObjects_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_8, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_11 = __this->get_positions_6();
		int32_t L_12 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_15, /*hidden argument*/NULL);
		// canvasObjects[0].transform.rotation = positions[cardPos].transform.rotation;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = __this->get_canvasObjects_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_16, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = __this->get_positions_6();
		int32_t L_20 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_22, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_18, L_23, /*hidden argument*/NULL);
		goto IL_0174;
	}

IL_00a2:
	{
		// int randInt = Random.Range(0, canvasObjects.Count);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_24 = __this->get_canvasObjects_4();
		int32_t L_25;
		L_25 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_24, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_26;
		L_26 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		// if(i == cardPos)
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_00c1;
		}
	}
	{
		// i++;
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		// continue;
		goto IL_0174;
	}

IL_00c1:
	{
		// if (! canvasInScene.Contains(canvasObjects[randInt]))
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_30 = __this->get_canvasInScene_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_31 = __this->get_canvasObjects_4();
		int32_t L_32 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_31, L_32, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		bool L_34;
		L_34 = List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F(L_30, L_33, /*hidden argument*/List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_0174;
		}
	}
	{
		// canvasObjects[randInt].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_35 = __this->get_canvasObjects_4();
		int32_t L_36 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_35, L_36, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_37, (bool)1, /*hidden argument*/NULL);
		// paintPieces[randInt].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_38 = __this->get_paintPieces_5();
		int32_t L_39 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)1, /*hidden argument*/NULL);
		// canvasInScene.Add(canvasObjects[randInt]);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_41 = __this->get_canvasInScene_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_42 = __this->get_canvasObjects_4();
		int32_t L_43 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_42, L_43, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_41, L_44, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// canvasObjects[randInt].transform.position = positions[i].transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_45 = __this->get_canvasObjects_4();
		int32_t L_46 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_49 = __this->get_positions_6();
		int32_t L_50 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_49, L_50, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_48, L_53, /*hidden argument*/NULL);
		// canvasObjects[randInt].transform.rotation = positions[i].transform.rotation;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_54 = __this->get_canvasObjects_4();
		int32_t L_55 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_54, L_55, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_58 = __this->get_positions_6();
		int32_t L_59 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60;
		L_60 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_58, L_59, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_60, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62;
		L_62 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_61, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_57, L_62, /*hidden argument*/NULL);
		// i++;
		int32_t L_63 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_0174:
	{
		// while (i < 4)
		int32_t L_64 = V_1;
		if ((((int32_t)L_64) < ((int32_t)4)))
		{
			goto IL_00a2;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> SceneSetup::getCanvasObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * SceneSetup_getCanvasObjects_m83F8921371700C9216F64D1E18D5E92D53EBE018 (SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495 * __this, const RuntimeMethod* method)
{
	{
		// return canvasObjects;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_canvasObjects_4();
		return L_0;
	}
}
// System.Void SceneSetup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSetup_Update_mA43AB6765CDF63B69A765881B8BC5283CF65BB07 (SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SceneSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSetup__ctor_m28E5E22E62CF94EE0D0463752F5B3EDAA2A4DB92 (SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> canvasInScene = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_canvasInScene_7(L_0);
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
// System.Void ShoppingListGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShoppingListGenerator_Update_mF22AC6AA93DD6B34C83B2EE58230CA6C61B6E86E (ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShoppingListGenerator_GetRandomElements_TisString_t_mF12C4262241F8264C35E28A2E63EA070D7506743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6ACBA0233DFA08390AD2018BDDE6F4AE4958AB5);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// var ToBuyList = GetRandomElements(allitemlist, HowMuchToBuy);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_allitemlist_5();
		int32_t L_2 = __this->get_HowMuchToBuy_4();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3;
		L_3 = ShoppingListGenerator_GetRandomElements_TisString_t_mF12C4262241F8264C35E28A2E63EA070D7506743(__this, L_1, L_2, /*hidden argument*/ShoppingListGenerator_GetRandomElements_TisString_t_mF12C4262241F8264C35E28A2E63EA070D7506743_RuntimeMethod_var);
		V_0 = L_3;
		// Debug.Log("shoppping lists => " + string.Join(", ", ToBuyList));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = V_0;
		String_t* L_5;
		L_5 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE6ACBA0233DFA08390AD2018BDDE6F4AE4958AB5, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void ShoppingListGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShoppingListGenerator__ctor_m87979EBE7375FCEE6DF515CF8A0EE6F6D9AA4382 (ShoppingListGenerator_tE9670E7FC9B55471A00E8B96118751E2AFC8CEB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A09ABF1D24E6484782D73339087C2DB702B2B51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1784412A512B8902A48C26BCCFB02EEB258D5A12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BD3A1CAE93456E75362F1FB949A52CF81769B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56B9D7DEF8E3DC210DBF8A0AFD4975355B5DF9E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FE40C4D978A37D7C9DE81A5A9344687AEC358C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EE76E9FBCD2C33A4F5947BE4CC2EA3736B59407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7989AEBB7563A02D458DEC440EA79FBC8A6BF4E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral819EC247FBE787FE715EBC7FE31709CCF2900456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A1CF0CBB8D222D6132F88578EAF0C38FF44151);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87BE8EC7B184801EDC77ACABB45BB4A779709FF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EFD00EA085079EE7F97407F8EFF07E3990696A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA57578EAEFA651B01355E789772176BF80A1390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6120537656DFF8635CF401F09D9DEF972A4776D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD910156689F91A665D7E67FD2531EA913115040F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE0FFD27E1BF37F1AF2FFEF24CB4CD16240D159A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB97D6CABA33AC7BFFEE7B03854AB24A64F9B9E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<string> allitemlist = new List<string> { "Pancakes","Ham","Fries","Burger","Chocolate Cake","Strawberry Cake",
		// "Donuts","Pies","Macarons","Eclairs","Cookies","Smoothie","Juice","Milkshake","Water Ice","Cheesesteak"};
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_1, _stringLiteralFB97D6CABA33AC7BFFEE7B03854AB24A64F9B9E7, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = L_1;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_2, _stringLiteralD6120537656DFF8635CF401F09D9DEF972A4776D, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = L_2;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_3, _stringLiteralCA57578EAEFA651B01355E789772176BF80A1390, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = L_3;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_4, _stringLiteral3BD3A1CAE93456E75362F1FB949A52CF81769B64, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = L_4;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_5, _stringLiteral6EE76E9FBCD2C33A4F5947BE4CC2EA3736B59407, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = L_5;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, _stringLiteral0A09ABF1D24E6484782D73339087C2DB702B2B51, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = L_6;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_7, _stringLiteral69FE40C4D978A37D7C9DE81A5A9344687AEC358C, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = L_7;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_8, _stringLiteral84A1CF0CBB8D222D6132F88578EAF0C38FF44151, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = L_8;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_9, _stringLiteral87BE8EC7B184801EDC77ACABB45BB4A779709FF6, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = L_9;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_10, _stringLiteral1784412A512B8902A48C26BCCFB02EEB258D5A12, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = L_10;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_11, _stringLiteralA3EFD00EA085079EE7F97407F8EFF07E3990696A, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12 = L_11;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_12, _stringLiteral819EC247FBE787FE715EBC7FE31709CCF2900456, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = L_12;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_13, _stringLiteralD910156689F91A665D7E67FD2531EA913115040F, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = L_13;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_14, _stringLiteral7989AEBB7563A02D458DEC440EA79FBC8A6BF4E6, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = L_14;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_15, _stringLiteral56B9D7DEF8E3DC210DBF8A0AFD4975355B5DF9E4, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = L_15;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_16, _stringLiteralEE0FFD27E1BF37F1AF2FFEF24CB4CD16240D159A, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		__this->set_allitemlist_5(L_16);
		// List<string> cartItems = new List<string>{};
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_17, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_cartItems_6(L_17);
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
// System.Void ShoppingListJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShoppingListJson__ctor_m19F814D927AC1F5FCCEBF5080FC80C7519A97D89 (ShoppingListJson_t020095ECB51DE8CF2C7AD4101CB2F95CE8B55883 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF274B94BC4A7EC61B5D50F9B2F5A9AA50879E901_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF973406031F1947E9529842765113D5582BB6B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Items> Items = new List<Items>();
		List_1_tCF973406031F1947E9529842765113D5582BB6B4 * L_0 = (List_1_tCF973406031F1947E9529842765113D5582BB6B4 *)il2cpp_codegen_object_new(List_1_tCF973406031F1947E9529842765113D5582BB6B4_il2cpp_TypeInfo_var);
		List_1__ctor_mF274B94BC4A7EC61B5D50F9B2F5A9AA50879E901(L_0, /*hidden argument*/List_1__ctor_mF274B94BC4A7EC61B5D50F9B2F5A9AA50879E901_RuntimeMethod_var);
		__this->set_Items_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void TimerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerManager_Start_mC3447020AED210F176D947D40C15B39B9C72F1EA (TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TimerManager.timer = gameTime;
		float L_0 = __this->get_gameTime_4();
		((TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_StaticFields*)il2cpp_codegen_static_fields_for(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var))->set_timer_5(L_0);
		// }
		return;
	}
}
// System.Void TimerManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerManager_Update_m3354AEC07FE1FFC22CFCCCC7CB2F37C5396AC301 (TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timer <= 0)
		float L_0 = ((TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_StaticFields*)il2cpp_codegen_static_fields_for(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var))->get_timer_5();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene(4);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0013:
	{
		// timer -= Time.deltaTime;
		float L_1 = ((TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_StaticFields*)il2cpp_codegen_static_fields_for(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var))->get_timer_5();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		((TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_StaticFields*)il2cpp_codegen_static_fields_for(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var))->set_timer_5(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// timeBar.fillAmount = timer / gameTime;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_timeBar_6();
		float L_4 = ((TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_StaticFields*)il2cpp_codegen_static_fields_for(TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D_il2cpp_TypeInfo_var))->get_timer_5();
		float L_5 = __this->get_gameTime_4();
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_3, ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TimerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerManager__ctor_m9F70E979790C36597C7774EEF98A90ABC02DC07A (TimerManager_tF922F74A62956D639CD23008FDFFC6E0ED11254D * __this, const RuntimeMethod* method)
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
// System.Void VideoManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_Start_m906CC8FA1502280922D3B8A9BFA02E1B722342AC (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57F34C75DEAFB013ED1F36D16D55D4FFF5E3D014);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vp = this.GetComponent<VideoPlayer>();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0;
		L_0 = Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365(__this, /*hidden argument*/Component_GetComponent_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m0A055C5D0E13C762D9E43880E36E78E7DE5A5365_RuntimeMethod_var);
		__this->set_vp_5(L_0);
		// vp.url = System.IO.Path.Combine(Application.streamingAssetsPath, "pma tutorial.mp4");
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_1 = __this->get_vp_5();
		String_t* L_2;
		L_2 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_2, _stringLiteral57F34C75DEAFB013ED1F36D16D55D4FFF5E3D014, /*hidden argument*/NULL);
		VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13(L_1, L_3, /*hidden argument*/NULL);
		// vp.Play();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_4 = __this->get_vp_5();
		VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516(L_4, /*hidden argument*/NULL);
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
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * RawImage_get_texture_m12060F8F44CCBFC6753E455FAF61A075E89022A1_inline (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, const RuntimeMethod* method)
{
	{
		// return m_Texture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = __this->get_m_Texture_36();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_GameObject; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_GameObject_0();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
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
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * SceneSetup_getCanvasObjects_m83F8921371700C9216F64D1E18D5E92D53EBE018_inline (SceneSetup_t91B6EC114D46AFF0DBA3529197B1DAB4892F2495 * __this, const RuntimeMethod* method)
{
	{
		// return canvasObjects;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_canvasObjects_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PuzzleManager_checkCompleted_m45CCCC22B1A57D5C67D9A709AF391AE8FA48CB23_inline (PuzzleManager_t75BCA6A94D058DC2E4E4793FFF008528DE835621 * __this, const RuntimeMethod* method)
{
	{
		// return isCompleted;
		bool L_0 = __this->get_isCompleted_9();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* L_2 = (RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D*)L_2, (int32_t)L_3);
		return (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
