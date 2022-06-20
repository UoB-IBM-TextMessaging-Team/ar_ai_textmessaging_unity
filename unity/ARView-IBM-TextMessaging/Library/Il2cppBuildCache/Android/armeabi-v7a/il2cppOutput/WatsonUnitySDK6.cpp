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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// IBM.Cloud.SDK.Callback`1<System.Byte[]>
struct Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD;
// IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults>
struct Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649;
// IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults>
struct Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90;
// IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults>
struct Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E;
// IBM.Cloud.SDK.Callback`1<System.Object>
struct Callback_1_t6593A7665A52B1B7ECD61B558F568300100C4AFA;
// IBM.Cloud.SDK.Callback`1<IBM.Watson.LanguageTranslator.V3.Model.TranslationModels>
struct Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB;
// IBM.Cloud.SDK.DetailedResponse`1<System.Byte[]>
struct DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358;
// IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults>
struct DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199;
// IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults>
struct DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79;
// IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults>
struct DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E;
// IBM.Cloud.SDK.DetailedResponse`1<System.Object>
struct DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614;
// IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.LanguageTranslator.V3.Model.TranslationModels>
struct DetailedResponse_1_t1D8202ADE118A64A650965D6389F44C07A824F21;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.CategoriesResult>
struct List_1_t97C30038000D3CFF2C832AA7ED13EE9F47B8DA89;
// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ClassificationsResult>
struct List_1_t254F4BFC3C9C743899AD19CF40F145AB02CF2006;
// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ConceptsResult>
struct List_1_t4D27AD005C86FD09ED69E075FBC0F7E09CEAFE07;
// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.EntitiesResult>
struct List_1_tC1C389E73EF16989CC97BEEA0C0696E15CDBD54C;
// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsResult>
struct List_1_t2AF0A6902F1C3C0D1477066EAD66374909207EF7;
// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Model>
struct List_1_t169E37E58319F3B81E7256B98793752534C18CA6;
// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.RelationsResult>
struct List_1_tF730156D0D9BF1BF96AFF5B6ADFF61CB67359A3C;
// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SemanticRolesResult>
struct List_1_tF2CE6D75B6A2D0ACEE911FBFCBE29F8F984BD061;
// System.Collections.Generic.List`1<IBM.Watson.LanguageTranslator.V3.Model.TranslationModel>
struct List_1_t12C606ABDAB97F160C6E140103DABC9987485B94;
// System.Collections.Generic.Queue`1<IBM.Cloud.SDK.DataTypes.AudioData>
struct Queue_1_t954AE8CB97EE0665F8F64098EDBAD77A63BE4FDD;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D;
// System.Collections.Generic.Queue`1<IBM.Cloud.SDK.Connection.WSConnector/Message>
struct Queue_1_tDB0B2ABEE1C6130BBC07C1BD02952AE411152BD1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// IBM.Watson.SpeechToText.V1.SpeakerLabelsResult[]
struct SpeakerLabelsResultU5BU5D_t1AD07102E6E60EEFFD46BE0F2509956FCB03116B;
// IBM.Watson.SpeechToText.V1.SpeechRecognitionResult[]
struct SpeechRecognitionResultU5BU5D_tE5588CA022B07261258A003F314656A7F9219D83;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults
struct AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResultsUsage
struct AnalysisResultsUsage_t699F2D56562F106E01946216798225CCF375333A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// IBM.Cloud.SDK.DataTypes.AudioData
struct AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E;
// IBM.Cloud.SDK.Authentication.Authenticator
struct Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// IBM.Cloud.SDK.BaseService
struct BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.CategoriesOptions
struct CategoriesOptions_t151A27419E0E685ECC59323BC68636565241BEA5;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ClassificationsOptions
struct ClassificationsOptions_tF5BDCA3285F1E722F6CBE7CF66210F03999F9ED6;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ConceptsOptions
struct ConceptsOptions_tC7826B3BF1A5C2495B6687F948E8B1EC9556B78F;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults
struct DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.EmotionOptions
struct EmotionOptions_t5CD17C0C8E5A0D51D17AE306F99CA6F5D7A674EA;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.EmotionResult
struct EmotionResult_t9568E2043FF203BBE265E13972E0B961EBF08280;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.EntitiesOptions
struct EntitiesOptions_tA4AB46787D7317063564D1305E41136D74EAE1D2;
// ExampleLanguageTranslatorV3
struct ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30;
// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1
struct ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E;
// IBM.Watsson.Examples.ExampleStreaming
struct ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9;
// IBM.Watson.Examples.ExampleTextToSpeechV1
struct ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features
struct Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.FeaturesResultsMetadata
struct FeaturesResultsMetadata_t54DCBD8F82DCE1D061103B9603943B3FD9E61155;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// IBM.Cloud.SDK.IBMError
struct IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239;
// IBM.Cloud.SDK.Utilities.IBMException
struct IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator
struct IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B;
// IBM.Cloud.SDK.Authentication.Iam.IamToken
struct IamToken_t73EE6122768F1FA6C2A6E326523D87F91D8E8ED5;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions
struct KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD;
// IBM.Watson.LanguageTranslator.V3.LanguageTranslatorService
struct LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults
struct ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// IBM.Watson.NaturalLanguageUnderstanding.V1.NaturalLanguageUnderstandingService
struct NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// IBM.Cloud.SDK.Connection.RESTConnector
struct RESTConnector_t769C68998AC6FD917D22F191DFFE6882798D7996;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.RelationsOptions
struct RelationsOptions_tBEE07FCFB14AAEC52D6880A8759D9A446E3FA478;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SemanticRolesOptions
struct SemanticRolesOptions_t5A51594ECE756C335AB145DEA0A11BF391D354C4;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SentimentOptions
struct SentimentOptions_tB13DC0CAC18A4DE190069FFB241D72ECC8B5C75D;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SentimentResult
struct SentimentResult_tC7D47F4212AD0B7E8A6D442F615853607F72352D;
// IBM.Watson.SpeechToText.V1.SpeakerRecognitionEvent
struct SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978;
// IBM.Watson.SpeechToText.V1.SpeechRecognitionEvent
struct SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230;
// IBM.Watson.SpeechToText.V1.SpeechToTextService
struct SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2;
// System.String
struct String_t;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SummarizationOptions
struct SummarizationOptions_t5BA1F752EAF6075B0CAAE0B30B50C5AFEBFFA97D;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SyntaxOptions
struct SyntaxOptions_tA0D42FF20F832E94D5C6D76A1F8A9D172735D145;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SyntaxResult
struct SyntaxResult_tBE718870B05059ED4A104918307C8F270A4EFE54;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// IBM.Watson.TextToSpeech.V1.TextToSpeechService
struct TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// IBM.Watson.LanguageTranslator.V3.Model.TranslationModels
struct TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// IBM.Cloud.SDK.Connection.WSConnector
struct WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// ExampleLanguageTranslatorV3/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4;
// ExampleLanguageTranslatorV3/<ExampleListModels>d__6
struct U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E;
// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276;
// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161;
// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7;
// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6
struct U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2;
// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7
struct U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC;
// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9
struct U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B;
// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8
struct U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C;
// IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11
struct U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D;
// IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18
struct U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590;
// IBM.Watson.Examples.ExampleTextToSpeechV1/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C;
// IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14
struct U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F;
// IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15
struct U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938;
// IBM.Watson.Discovery.V1.Model.Field/TypeValue
struct TypeValue_t4FBA34070043325F105F484FFB4D20D4393933F1;
// IBM.Watson.Discovery.V2.Model.Field/TypeValue
struct TypeValue_t3C684970A7C037D33C99CE7A3AAA4D3A7606FF16;
// IBM.Watson.Discovery.V1.Model.Gateway/StatusValue
struct StatusValue_t65CEEA3097C476EF1954BECA8EBDC9C9ED62E61E;
// IBM.Watson.SpeechToText.V1.Model.Grammar/StatusValue
struct StatusValue_t1997AD6C86A76E41B790274D9986E4CACF20DE13;
// IBM.Watson.SpeechToText.V1.Model.LanguageModel/StatusValue
struct StatusValue_t5600E311148712D7752C411664EC7A2C964F679B;
// IBM.Watson.Assistant.V1.Model.LogMessage/LevelValue
struct LevelValue_t612EB3196E55FDA33BDE07B9617C30D935F985B5;
// IBM.Watson.Assistant.V1.Model.LogMessageSource/TypeValue
struct TypeValue_t0AAF0BA8BFCB7568B02573F83A6D943FDDB1FEE5;
// IBM.Watson.Discovery.V1.Model.LogQueryResponseResult/DocumentTypeValue
struct DocumentTypeValue_tC93A052414D19097F71FBAA0BD307E602F0090AC;
// IBM.Watson.Discovery.V1.Model.LogQueryResponseResult/EventTypeValue
struct EventTypeValue_t80FE04D6C3BA41AC47AD57F6D8ACF4F4A9F1E7A1;
// IBM.Watson.Discovery.V1.Model.LogQueryResponseResult/ResultTypeValue
struct ResultTypeValue_t45770152AE0FC4B3D85BE6D9F3712FB119520852;
// IBM.Watson.Assistant.V2.Model.MessageContextGlobalSystem/LocaleValue
struct LocaleValue_t2D13E6A6FD49B3392E51BE08FF14062301FB0D00;
// IBM.Watson.Assistant.V2.Model.MessageInput/MessageTypeValue
struct MessageTypeValue_t3A88DC437649B5992FBCABE7D6D2D3BB2208F7B1;
// IBM.Watson.Assistant.V2.Model.MessageInputStateless/MessageTypeValue
struct MessageTypeValue_t5AD62ADDDCD6905CE4E9A33901DDA3AF1E85A074;
// IBM.Watson.Assistant.V2.Model.MessageOutputDebug/BranchExitedReasonValue
struct BranchExitedReasonValue_t9993BB123C065777F21FF45794BC502AE2691674;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Model/StatusValue
struct StatusValue_t12A452C779A5DD367BD03013CE74DBFEAF87B2B3;
// IBM.Watson.Discovery.V1.Model.ModelCredentials/SourceTypeValue
struct SourceTypeValue_t347314EFF083FC50D954BA3A842A2904237F5005;
// IBM.Watson.Discovery.V1.Model.ModelEnvironment/SizeValue
struct SizeValue_tA2B997CC9B30D497D289585164ADF4680AB74450;
// IBM.Watson.Discovery.V1.Model.ModelEnvironment/StatusValue
struct StatusValue_t3A6C3096E0221C4CCFCD929D5EFDC5C76DAB2744;
// IBM.Watson.Discovery.V1.Model.NormalizationOperation/OperationValue
struct OperationValue_t6505774C0536FFA5DDFC4B69CC9B3E6FECD9EE57;
// IBM.Watson.Discovery.V1.Model.Notice/SeverityValue
struct SeverityValue_tAEDF069F59F242DA8A3CF0D561AA236B7339154B;
// IBM.Watson.Discovery.V2.Model.Notice/SeverityValue
struct SeverityValue_t28F9070A985D3B75D78C78DE13E2E509765CEE30;
// IBM.Watson.Discovery.V2.Model.ProjectDetails/TypeValue
struct TypeValue_t603C3F2055EBFE34FE3C1C4BE76E3CB8CAD075E5;
// IBM.Watson.Discovery.V2.Model.ProjectListDetails/TypeValue
struct TypeValue_t52E7D70963067840176277EE623DD69E5A71AB9E;
// IBM.Watson.Discovery.V1.Model.QueryNoticesResult/FileTypeValue
struct FileTypeValue_tB318E0D02E194995AA6286FF3095ABD413B874AD;
// IBM.Watson.Discovery.V2.Model.QueryResultMetadata/DocumentRetrievalSourceValue
struct DocumentRetrievalSourceValue_t40574470DB2941DF2DB14C3C0DE8E7B84C5D81F2;
// IBM.Watson.SpeechToText.V1.Model.RecognitionJob/StatusValue
struct StatusValue_t3CBFD4996CFF9DBF2FDAD04D6185009E200918FB;
// IBM.Watson.SpeechToText.V1.Model.RegisterStatus/StatusValue
struct StatusValue_t6EDA31CB0581AC916ADCCB49406A6784C5A1DCE3;
// IBM.Watson.Assistant.V1.Model.ResponseGenericChannel/ChannelValue
struct ChannelValue_t887487A1641E8164361FCC2F6E7C2BB5F1ECDCA9;
// IBM.Watson.Discovery.V1.Model.RetrievalDetails/DocumentRetrievalStrategyValue
struct DocumentRetrievalStrategyValue_tB308A345432938839434F7FE353B4BB6941A7833;
// IBM.Watson.Discovery.V2.Model.RetrievalDetails/DocumentRetrievalStrategyValue
struct DocumentRetrievalStrategyValue_t5CFAA9AFDB872E5858E2A7FDF08EE27EEC3172E7;
// IBM.Watson.Assistant.V1.Model.RuntimeEntityInterpretation/GranularityValue
struct GranularityValue_t11D747643E9C76ABF034E9998E4AB125C11598E6;
// IBM.Watson.Assistant.V2.Model.RuntimeEntityInterpretation/GranularityValue
struct GranularityValue_t554E2DD9C413E9703112330C32E77F72413628BA;
// IBM.Watson.Assistant.V1.Model.RuntimeEntityRole/TypeValue
struct TypeValue_tB3AED7C97149E2ECDF4C5C6A4508F79B9AACA928;
// IBM.Watson.Assistant.V2.Model.RuntimeEntityRole/TypeValue
struct TypeValue_t490BFD3837E73F69D3E105ED2E86A9714F9C1B55;
// IBM.Watson.Assistant.V1.Model.RuntimeResponseGeneric/PreferenceValue
struct PreferenceValue_t96555F42E3DAA220E105DD6AF7B5D9ED6D2B7304;
// IBM.Watson.Assistant.V2.Model.RuntimeResponseGeneric/PreferenceValue
struct PreferenceValue_t55DAEFBC8660D9BD287B18DF0840F2D2627EAAFB;
// IBM.Watson.Assistant.V1.Model.RuntimeResponseGenericRuntimeResponseTypeOption/PreferenceValue
struct PreferenceValue_t8B74F6AD983D1410E308844ABE268EA5DAAC4EBF;
// IBM.Watson.Assistant.V2.Model.RuntimeResponseGenericRuntimeResponseTypeOption/PreferenceValue
struct PreferenceValue_tE58932D93F8C1DF9A1291128AEB0414E8A9DC385;
// IBM.Watson.Discovery.V1.Model.SearchStatus/StatusValue
struct StatusValue_tB86462E30E39862D174913B3CD8D3F1EC429E769;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SentimentModel/StatusValue
struct StatusValue_tD8C231997FAD21404339720A8452FCB78F574112;
// IBM.Watson.Discovery.V1.Model.Source/TypeValue
struct TypeValue_tC764B668E531EA0A48A33F5F16602DFF522A21D6;
// IBM.Watson.Discovery.V1.Model.SourceOptionsWebCrawl/CrawlSpeedValue
struct CrawlSpeedValue_tF75E94A978A1ECF194EE03378918AB2C9F8DC64C;
// IBM.Watson.Discovery.V1.Model.SourceSchedule/FrequencyValue
struct FrequencyValue_tA8E1C4CB42F0B388998B2904731BE7B81E5317E9;
// IBM.Watson.Discovery.V1.Model.SourceStatus/StatusValue
struct StatusValue_t38BA8C23AAFBFFC872B58BE5FB8E17622FEB638B;
// IBM.Watson.SpeechToText.V1.Model.SpeechRecognitionResult/EndOfUtteranceValue
struct EndOfUtteranceValue_t3C0EAC6C8413ACDC8E0F3F2280223773F1F18909;
// IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242
struct U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836;
// IBM.Watson.SpeechToText.V1.SpeechToTextService/ErrorEvent
struct ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831;
// IBM.Watson.SpeechToText.V1.SpeechToTextService/LoadFileDelegate
struct LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92;
// IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognize
struct OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C;
// IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognizeSpeaker
struct OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F;
// IBM.Watson.TextToSpeech.V1.TextToSpeechService/ErrorEvent
struct ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57;
// IBM.Watson.TextToSpeech.V1.TextToSpeechService/OnSynthesize
struct OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099;
// IBM.Watson.Discovery.V1.Model.TokenDictStatusResponse/StatusValue
struct StatusValue_t7573B43B5239932BEE2A3053A0FC94BF95A9EF7D;
// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.TokenResult/PartOfSpeechValue
struct PartOfSpeechValue_tA972607E24983E30A8CEBF5953F65440EC3690E6;
// IBM.Watson.SpeechToText.V1.Model.TrainingWarning/CodeValue
struct CodeValue_tE0061F25B75E10373B101F0F9AF35C7C0408CE7F;
// IBM.Watson.TextToSpeech.V1.Model.Translation/PartOfSpeechValue
struct PartOfSpeechValue_t087453C0139E384CF6A3484515999F6FDD15A962;
// IBM.Watson.LanguageTranslator.V3.Model.TranslationModel/StatusValue
struct StatusValue_t18B5CCB2FF7AB71AA9E00D21867B176BE438221B;
// IBM.Watson.Assistant.V1.Model.Value/TypeValue
struct TypeValue_t4DA2068A47A875C329D74EFDDB8EFE4BD24F866D;
// IBM.Cloud.SDK.Connection.WSConnector/BinaryMessage
struct BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B;
// IBM.Cloud.SDK.Connection.WSConnector/ConnectorEvent
struct ConnectorEvent_t62A57A0F9FAD94CDE5F2E95469DBFAA2DE4AE544;
// IBM.Cloud.SDK.Connection.WSConnector/Message
struct Message_t2184A9CCBB52B60EECA24C5579BB4D5A16019E7E;
// IBM.Cloud.SDK.Connection.WSConnector/MessageEvent
struct MessageEvent_t10AEB6F566BB16FD51A30A69B082CA9321B9A51D;
// IBM.Watson.TextToSpeech.V1.Model.Word/PartOfSpeechValue
struct PartOfSpeechValue_t2D29F5AA397A859AA1EB7A4C34B5B2AE1F85E2E3;
// IBM.Watson.Assistant.V1.Model.Workspace/StatusValue
struct StatusValue_t2DB7F3704EE6FD0EFFBC47872234B8DAA4FEED65;
// IBM.Watson.Assistant.V1.Model.WorkspaceSystemSettingsDisambiguation/SensitivityValue
struct SensitivityValue_t59ADBEBA884523FFE4C7635C584592B8E15787C5;

IL2CPP_EXTERN_C RuntimeClass* AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F1A0CCD93E4274B3E92C31DB91F64F071DF1D01;
IL2CPP_EXTERN_C String_t* _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85;
IL2CPP_EXTERN_C String_t* _stringLiteral2317EE7E961FD756F4EA1E591187F37C849CD9DC;
IL2CPP_EXTERN_C String_t* _stringLiteral3173CDDE324FF75CFAB9C279D40AEC1024A2982F;
IL2CPP_EXTERN_C String_t* _stringLiteral361C5ABC5C4E4011168E599A78F739519F27A0FF;
IL2CPP_EXTERN_C String_t* _stringLiteral3C6BB9BA0C2E915ADCDD9AE2510014A5A98F5B74;
IL2CPP_EXTERN_C String_t* _stringLiteral576A87924814114E2EACB8108F009B9B033A3883;
IL2CPP_EXTERN_C String_t* _stringLiteral728EED72E5625324F0DE017B5D94F3A941CDA85B;
IL2CPP_EXTERN_C String_t* _stringLiteral79AF0021328FC2816B1B53EA85744E7798B2B7EA;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6E4BE1627246B4E0E1B912A876B9DF4ABC75F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB4AE8C38A21D2CD6E7D762F293D94D1505036FCF;
IL2CPP_EXTERN_C String_t* _stringLiteralBD04C2F82BBCD35549793B3BD9B41FAEC8020E6D;
IL2CPP_EXTERN_C String_t* _stringLiteralC4A945C6EB6E75983539280E95D3297461237217;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6CCC133B79DCA6AC1D405787F3A0F4D37C7AEA;
IL2CPP_EXTERN_C String_t* _stringLiteralD630860689252D66B6DE949F1B56B5D00521A270;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6B130AE780E09114E62267E8D008821771FC4F;
IL2CPP_EXTERN_C String_t* _stringLiteralDFCEFF603839CE43FDF4D590D592E42055E8B4A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE3F70F109FD9DE1923ADBF56A0AB04A7577E5DE2;
IL2CPP_EXTERN_C String_t* _stringLiteralEF60CDBEE2DA2C9FB8157958A4F53F332B2EEE3F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_1__ctor_m6DA914CAB9E3C94E18CC5A511F652E8E70D1C366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_1__ctor_m83DF4CCF1FD338C090DAA8BC761A6B30FA5FE811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_1__ctor_m8B7C203A67C895CD46A46E5369C4B8E755321DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_1__ctor_m97E120863B140D33CBE7ECC47999C6DDBB70D0FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_1__ctor_mB95DE5AEEF4F5545BD12F6A0138E08844616D493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DetailedResponse_1_get_Response_m3D54282E19E7ADFE2D5115816A0FE83680C98338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DetailedResponse_1_get_Response_m96F2FC20EA5BF393B7B79B231677D1F576DE711D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DetailedResponse_1_get_Response_mC2F71186CA46A1E9A7873547D089EE8FE442737D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DetailedResponse_1_get_Result_m15745899C8BFEC0A877EB75E81008A991329688B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DetailedResponse_1_get_Result_m3E11384B715E00DAC8B90C0ED9919D90B855F811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DetailedResponse_1_get_Result_mC8254063F1CD13EE4DA37AC716EB3C42B5D98C45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DetailedResponse_1_get_Result_mE88247AC57D84941FCD0E464C4E2005171AB3390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateServiceU3Ed__11_MoveNext_mA5B833F7DA549E323EF56CAB12DE9AF469EFC4B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateServiceU3Ed__11_System_Collections_IEnumerator_Reset_mE37473E93FE209113B58389EEA2885307CDB37E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateServiceU3Ed__14_MoveNext_m6C13EF253DB9D57B0D7DAA0F075DA85F09A105E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateServiceU3Ed__14_System_Collections_IEnumerator_Reset_m67A95BD9D91B4CF2A75BBE1C877E2C0403775C83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateServiceU3Ed__6_MoveNext_m3E058ED990B785DEAC4D0DB89516783F3C76101E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateServiceU3Ed__6_System_Collections_IEnumerator_Reset_m7FC6EDA244657BDAD0E19A5216854ABE572883A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExampleAnalyzeU3Ed__7_System_Collections_IEnumerator_Reset_m08C2672D8738ABA0B261D0D2FC074190D064F59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExampleDeleteModelU3Ed__9_System_Collections_IEnumerator_Reset_m2A7EB8E1C2AAA6424604225B942164AF60D44229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExampleListModelsU3Ed__6_System_Collections_IEnumerator_Reset_mF69ACE28D405B9C72893F224573B20055DF60C8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExampleListModelsU3Ed__8_System_Collections_IEnumerator_Reset_mE48C8E7D55A639BB7FF7D91D008E7EB81641E713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExampleSynthesizeU3Ed__15_System_Collections_IEnumerator_Reset_m3D5F0530A8339C63AAA4CC0D55ED98B28DB4CF3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CKeepAliveU3Ed__242_System_Collections_IEnumerator_Reset_mCBA9957BB573FEC487305CE2CCE5CD47BE83727B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRecordingHandlerU3Ed__18_System_Collections_IEnumerator_Reset_m32315E16DAEBC90B42CC88EB2CA479C18A5C4322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CExampleSynthesizeU3Eb__0_mE6CE83ACC2D9D497A12381A2C3B9F21DB7A60640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CExampleListModelsU3Eb__0_m14E8DD659738172A691EB799BC6433E9C2EBDA12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CExampleAnalyzeU3Eb__0_m8207A23F23BE9DE612C91ACC4E31BF10A9693753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CExampleListModelsU3Eb__0_m9F676A49C4C01A36733671CEDE1BEA52D385639A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CExampleDeleteModelU3Eb__0_mC0131666BCF94A6587533671310164C99A353DE8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// IBM.Cloud.SDK.DetailedResponse`1<System.Byte[]>
struct DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358  : public RuntimeObject
{
public:
	// System.Int64 IBM.Cloud.SDK.DetailedResponse`1::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> IBM.Cloud.SDK.DetailedResponse`1::<Headers>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CHeadersU3Ek__BackingField_1;
	// T IBM.Cloud.SDK.DetailedResponse`1::<Result>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CResultU3Ek__BackingField_2;
	// System.String IBM.Cloud.SDK.DetailedResponse`1::<Response>k__BackingField
	String_t* ___U3CResponseU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358, ___U3CStatusCodeU3Ek__BackingField_0)); }
	inline int64_t get_U3CStatusCodeU3Ek__BackingField_0() const { return ___U3CStatusCodeU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CStatusCodeU3Ek__BackingField_0() { return &___U3CStatusCodeU3Ek__BackingField_0; }
	inline void set_U3CStatusCodeU3Ek__BackingField_0(int64_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358, ___U3CHeadersU3Ek__BackingField_1)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CHeadersU3Ek__BackingField_1() const { return ___U3CHeadersU3Ek__BackingField_1; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CHeadersU3Ek__BackingField_1() { return &___U3CHeadersU3Ek__BackingField_1; }
	inline void set_U3CHeadersU3Ek__BackingField_1(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CHeadersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358, ___U3CResultU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CResultU3Ek__BackingField_2() const { return ___U3CResultU3Ek__BackingField_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CResultU3Ek__BackingField_2() { return &___U3CResultU3Ek__BackingField_2; }
	inline void set_U3CResultU3Ek__BackingField_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CResultU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358, ___U3CResponseU3Ek__BackingField_3)); }
	inline String_t* get_U3CResponseU3Ek__BackingField_3() const { return ___U3CResponseU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CResponseU3Ek__BackingField_3() { return &___U3CResponseU3Ek__BackingField_3; }
	inline void set_U3CResponseU3Ek__BackingField_3(String_t* value)
	{
		___U3CResponseU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseU3Ek__BackingField_3), (void*)value);
	}
};


// IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults>
struct DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199  : public RuntimeObject
{
public:
	// System.Int64 IBM.Cloud.SDK.DetailedResponse`1::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> IBM.Cloud.SDK.DetailedResponse`1::<Headers>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CHeadersU3Ek__BackingField_1;
	// T IBM.Cloud.SDK.DetailedResponse`1::<Result>k__BackingField
	AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * ___U3CResultU3Ek__BackingField_2;
	// System.String IBM.Cloud.SDK.DetailedResponse`1::<Response>k__BackingField
	String_t* ___U3CResponseU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199, ___U3CStatusCodeU3Ek__BackingField_0)); }
	inline int64_t get_U3CStatusCodeU3Ek__BackingField_0() const { return ___U3CStatusCodeU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CStatusCodeU3Ek__BackingField_0() { return &___U3CStatusCodeU3Ek__BackingField_0; }
	inline void set_U3CStatusCodeU3Ek__BackingField_0(int64_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199, ___U3CHeadersU3Ek__BackingField_1)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CHeadersU3Ek__BackingField_1() const { return ___U3CHeadersU3Ek__BackingField_1; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CHeadersU3Ek__BackingField_1() { return &___U3CHeadersU3Ek__BackingField_1; }
	inline void set_U3CHeadersU3Ek__BackingField_1(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CHeadersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199, ___U3CResultU3Ek__BackingField_2)); }
	inline AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * get_U3CResultU3Ek__BackingField_2() const { return ___U3CResultU3Ek__BackingField_2; }
	inline AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 ** get_address_of_U3CResultU3Ek__BackingField_2() { return &___U3CResultU3Ek__BackingField_2; }
	inline void set_U3CResultU3Ek__BackingField_2(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * value)
	{
		___U3CResultU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199, ___U3CResponseU3Ek__BackingField_3)); }
	inline String_t* get_U3CResponseU3Ek__BackingField_3() const { return ___U3CResponseU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CResponseU3Ek__BackingField_3() { return &___U3CResponseU3Ek__BackingField_3; }
	inline void set_U3CResponseU3Ek__BackingField_3(String_t* value)
	{
		___U3CResponseU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseU3Ek__BackingField_3), (void*)value);
	}
};


// IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults>
struct DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79  : public RuntimeObject
{
public:
	// System.Int64 IBM.Cloud.SDK.DetailedResponse`1::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> IBM.Cloud.SDK.DetailedResponse`1::<Headers>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CHeadersU3Ek__BackingField_1;
	// T IBM.Cloud.SDK.DetailedResponse`1::<Result>k__BackingField
	DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * ___U3CResultU3Ek__BackingField_2;
	// System.String IBM.Cloud.SDK.DetailedResponse`1::<Response>k__BackingField
	String_t* ___U3CResponseU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79, ___U3CStatusCodeU3Ek__BackingField_0)); }
	inline int64_t get_U3CStatusCodeU3Ek__BackingField_0() const { return ___U3CStatusCodeU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CStatusCodeU3Ek__BackingField_0() { return &___U3CStatusCodeU3Ek__BackingField_0; }
	inline void set_U3CStatusCodeU3Ek__BackingField_0(int64_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79, ___U3CHeadersU3Ek__BackingField_1)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CHeadersU3Ek__BackingField_1() const { return ___U3CHeadersU3Ek__BackingField_1; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CHeadersU3Ek__BackingField_1() { return &___U3CHeadersU3Ek__BackingField_1; }
	inline void set_U3CHeadersU3Ek__BackingField_1(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CHeadersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79, ___U3CResultU3Ek__BackingField_2)); }
	inline DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * get_U3CResultU3Ek__BackingField_2() const { return ___U3CResultU3Ek__BackingField_2; }
	inline DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 ** get_address_of_U3CResultU3Ek__BackingField_2() { return &___U3CResultU3Ek__BackingField_2; }
	inline void set_U3CResultU3Ek__BackingField_2(DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * value)
	{
		___U3CResultU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79, ___U3CResponseU3Ek__BackingField_3)); }
	inline String_t* get_U3CResponseU3Ek__BackingField_3() const { return ___U3CResponseU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CResponseU3Ek__BackingField_3() { return &___U3CResponseU3Ek__BackingField_3; }
	inline void set_U3CResponseU3Ek__BackingField_3(String_t* value)
	{
		___U3CResponseU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseU3Ek__BackingField_3), (void*)value);
	}
};


// IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults>
struct DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E  : public RuntimeObject
{
public:
	// System.Int64 IBM.Cloud.SDK.DetailedResponse`1::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> IBM.Cloud.SDK.DetailedResponse`1::<Headers>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CHeadersU3Ek__BackingField_1;
	// T IBM.Cloud.SDK.DetailedResponse`1::<Result>k__BackingField
	ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * ___U3CResultU3Ek__BackingField_2;
	// System.String IBM.Cloud.SDK.DetailedResponse`1::<Response>k__BackingField
	String_t* ___U3CResponseU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E, ___U3CStatusCodeU3Ek__BackingField_0)); }
	inline int64_t get_U3CStatusCodeU3Ek__BackingField_0() const { return ___U3CStatusCodeU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CStatusCodeU3Ek__BackingField_0() { return &___U3CStatusCodeU3Ek__BackingField_0; }
	inline void set_U3CStatusCodeU3Ek__BackingField_0(int64_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E, ___U3CHeadersU3Ek__BackingField_1)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CHeadersU3Ek__BackingField_1() const { return ___U3CHeadersU3Ek__BackingField_1; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CHeadersU3Ek__BackingField_1() { return &___U3CHeadersU3Ek__BackingField_1; }
	inline void set_U3CHeadersU3Ek__BackingField_1(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CHeadersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E, ___U3CResultU3Ek__BackingField_2)); }
	inline ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * get_U3CResultU3Ek__BackingField_2() const { return ___U3CResultU3Ek__BackingField_2; }
	inline ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 ** get_address_of_U3CResultU3Ek__BackingField_2() { return &___U3CResultU3Ek__BackingField_2; }
	inline void set_U3CResultU3Ek__BackingField_2(ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * value)
	{
		___U3CResultU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E, ___U3CResponseU3Ek__BackingField_3)); }
	inline String_t* get_U3CResponseU3Ek__BackingField_3() const { return ___U3CResponseU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CResponseU3Ek__BackingField_3() { return &___U3CResponseU3Ek__BackingField_3; }
	inline void set_U3CResponseU3Ek__BackingField_3(String_t* value)
	{
		___U3CResponseU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseU3Ek__BackingField_3), (void*)value);
	}
};


// IBM.Cloud.SDK.DetailedResponse`1<System.Object>
struct DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614  : public RuntimeObject
{
public:
	// System.Int64 IBM.Cloud.SDK.DetailedResponse`1::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> IBM.Cloud.SDK.DetailedResponse`1::<Headers>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CHeadersU3Ek__BackingField_1;
	// T IBM.Cloud.SDK.DetailedResponse`1::<Result>k__BackingField
	RuntimeObject * ___U3CResultU3Ek__BackingField_2;
	// System.String IBM.Cloud.SDK.DetailedResponse`1::<Response>k__BackingField
	String_t* ___U3CResponseU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614, ___U3CStatusCodeU3Ek__BackingField_0)); }
	inline int64_t get_U3CStatusCodeU3Ek__BackingField_0() const { return ___U3CStatusCodeU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CStatusCodeU3Ek__BackingField_0() { return &___U3CStatusCodeU3Ek__BackingField_0; }
	inline void set_U3CStatusCodeU3Ek__BackingField_0(int64_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614, ___U3CHeadersU3Ek__BackingField_1)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CHeadersU3Ek__BackingField_1() const { return ___U3CHeadersU3Ek__BackingField_1; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CHeadersU3Ek__BackingField_1() { return &___U3CHeadersU3Ek__BackingField_1; }
	inline void set_U3CHeadersU3Ek__BackingField_1(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CHeadersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614, ___U3CResultU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CResultU3Ek__BackingField_2() const { return ___U3CResultU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CResultU3Ek__BackingField_2() { return &___U3CResultU3Ek__BackingField_2; }
	inline void set_U3CResultU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CResultU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614, ___U3CResponseU3Ek__BackingField_3)); }
	inline String_t* get_U3CResponseU3Ek__BackingField_3() const { return ___U3CResponseU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CResponseU3Ek__BackingField_3() { return &___U3CResponseU3Ek__BackingField_3; }
	inline void set_U3CResponseU3Ek__BackingField_3(String_t* value)
	{
		___U3CResponseU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseU3Ek__BackingField_3), (void*)value);
	}
};


// IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.LanguageTranslator.V3.Model.TranslationModels>
struct DetailedResponse_1_t1D8202ADE118A64A650965D6389F44C07A824F21  : public RuntimeObject
{
public:
	// System.Int64 IBM.Cloud.SDK.DetailedResponse`1::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> IBM.Cloud.SDK.DetailedResponse`1::<Headers>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CHeadersU3Ek__BackingField_1;
	// T IBM.Cloud.SDK.DetailedResponse`1::<Result>k__BackingField
	TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 * ___U3CResultU3Ek__BackingField_2;
	// System.String IBM.Cloud.SDK.DetailedResponse`1::<Response>k__BackingField
	String_t* ___U3CResponseU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t1D8202ADE118A64A650965D6389F44C07A824F21, ___U3CStatusCodeU3Ek__BackingField_0)); }
	inline int64_t get_U3CStatusCodeU3Ek__BackingField_0() const { return ___U3CStatusCodeU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CStatusCodeU3Ek__BackingField_0() { return &___U3CStatusCodeU3Ek__BackingField_0; }
	inline void set_U3CStatusCodeU3Ek__BackingField_0(int64_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t1D8202ADE118A64A650965D6389F44C07A824F21, ___U3CHeadersU3Ek__BackingField_1)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CHeadersU3Ek__BackingField_1() const { return ___U3CHeadersU3Ek__BackingField_1; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CHeadersU3Ek__BackingField_1() { return &___U3CHeadersU3Ek__BackingField_1; }
	inline void set_U3CHeadersU3Ek__BackingField_1(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CHeadersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t1D8202ADE118A64A650965D6389F44C07A824F21, ___U3CResultU3Ek__BackingField_2)); }
	inline TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 * get_U3CResultU3Ek__BackingField_2() const { return ___U3CResultU3Ek__BackingField_2; }
	inline TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 ** get_address_of_U3CResultU3Ek__BackingField_2() { return &___U3CResultU3Ek__BackingField_2; }
	inline void set_U3CResultU3Ek__BackingField_2(TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 * value)
	{
		___U3CResultU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DetailedResponse_1_t1D8202ADE118A64A650965D6389F44C07A824F21, ___U3CResponseU3Ek__BackingField_3)); }
	inline String_t* get_U3CResponseU3Ek__BackingField_3() const { return ___U3CResponseU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CResponseU3Ek__BackingField_3() { return &___U3CResponseU3Ek__BackingField_3; }
	inline void set_U3CResponseU3Ek__BackingField_3(String_t* value)
	{
		___U3CResponseU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseU3Ek__BackingField_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults
struct AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546  : public RuntimeObject
{
public:
	// System.String IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Language>k__BackingField
	String_t* ___U3CLanguageU3Ek__BackingField_0;
	// System.String IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<AnalyzedText>k__BackingField
	String_t* ___U3CAnalyzedTextU3Ek__BackingField_1;
	// System.String IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<RetrievedUrl>k__BackingField
	String_t* ___U3CRetrievedUrlU3Ek__BackingField_2;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResultsUsage IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Usage>k__BackingField
	AnalysisResultsUsage_t699F2D56562F106E01946216798225CCF375333A * ___U3CUsageU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ConceptsResult> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Concepts>k__BackingField
	List_1_t4D27AD005C86FD09ED69E075FBC0F7E09CEAFE07 * ___U3CConceptsU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.EntitiesResult> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Entities>k__BackingField
	List_1_tC1C389E73EF16989CC97BEEA0C0696E15CDBD54C * ___U3CEntitiesU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsResult> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Keywords>k__BackingField
	List_1_t2AF0A6902F1C3C0D1477066EAD66374909207EF7 * ___U3CKeywordsU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.CategoriesResult> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Categories>k__BackingField
	List_1_t97C30038000D3CFF2C832AA7ED13EE9F47B8DA89 * ___U3CCategoriesU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ClassificationsResult> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Classifications>k__BackingField
	List_1_t254F4BFC3C9C743899AD19CF40F145AB02CF2006 * ___U3CClassificationsU3Ek__BackingField_8;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.EmotionResult IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Emotion>k__BackingField
	EmotionResult_t9568E2043FF203BBE265E13972E0B961EBF08280 * ___U3CEmotionU3Ek__BackingField_9;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.FeaturesResultsMetadata IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Metadata>k__BackingField
	FeaturesResultsMetadata_t54DCBD8F82DCE1D061103B9603943B3FD9E61155 * ___U3CMetadataU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.RelationsResult> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Relations>k__BackingField
	List_1_tF730156D0D9BF1BF96AFF5B6ADFF61CB67359A3C * ___U3CRelationsU3Ek__BackingField_11;
	// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SemanticRolesResult> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<SemanticRoles>k__BackingField
	List_1_tF2CE6D75B6A2D0ACEE911FBFCBE29F8F984BD061 * ___U3CSemanticRolesU3Ek__BackingField_12;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SentimentResult IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Sentiment>k__BackingField
	SentimentResult_tC7D47F4212AD0B7E8A6D442F615853607F72352D * ___U3CSentimentU3Ek__BackingField_13;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SyntaxResult IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults::<Syntax>k__BackingField
	SyntaxResult_tBE718870B05059ED4A104918307C8F270A4EFE54 * ___U3CSyntaxU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CLanguageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CLanguageU3Ek__BackingField_0)); }
	inline String_t* get_U3CLanguageU3Ek__BackingField_0() const { return ___U3CLanguageU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CLanguageU3Ek__BackingField_0() { return &___U3CLanguageU3Ek__BackingField_0; }
	inline void set_U3CLanguageU3Ek__BackingField_0(String_t* value)
	{
		___U3CLanguageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLanguageU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAnalyzedTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CAnalyzedTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CAnalyzedTextU3Ek__BackingField_1() const { return ___U3CAnalyzedTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAnalyzedTextU3Ek__BackingField_1() { return &___U3CAnalyzedTextU3Ek__BackingField_1; }
	inline void set_U3CAnalyzedTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CAnalyzedTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAnalyzedTextU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRetrievedUrlU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CRetrievedUrlU3Ek__BackingField_2)); }
	inline String_t* get_U3CRetrievedUrlU3Ek__BackingField_2() const { return ___U3CRetrievedUrlU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CRetrievedUrlU3Ek__BackingField_2() { return &___U3CRetrievedUrlU3Ek__BackingField_2; }
	inline void set_U3CRetrievedUrlU3Ek__BackingField_2(String_t* value)
	{
		___U3CRetrievedUrlU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRetrievedUrlU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUsageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CUsageU3Ek__BackingField_3)); }
	inline AnalysisResultsUsage_t699F2D56562F106E01946216798225CCF375333A * get_U3CUsageU3Ek__BackingField_3() const { return ___U3CUsageU3Ek__BackingField_3; }
	inline AnalysisResultsUsage_t699F2D56562F106E01946216798225CCF375333A ** get_address_of_U3CUsageU3Ek__BackingField_3() { return &___U3CUsageU3Ek__BackingField_3; }
	inline void set_U3CUsageU3Ek__BackingField_3(AnalysisResultsUsage_t699F2D56562F106E01946216798225CCF375333A * value)
	{
		___U3CUsageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUsageU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConceptsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CConceptsU3Ek__BackingField_4)); }
	inline List_1_t4D27AD005C86FD09ED69E075FBC0F7E09CEAFE07 * get_U3CConceptsU3Ek__BackingField_4() const { return ___U3CConceptsU3Ek__BackingField_4; }
	inline List_1_t4D27AD005C86FD09ED69E075FBC0F7E09CEAFE07 ** get_address_of_U3CConceptsU3Ek__BackingField_4() { return &___U3CConceptsU3Ek__BackingField_4; }
	inline void set_U3CConceptsU3Ek__BackingField_4(List_1_t4D27AD005C86FD09ED69E075FBC0F7E09CEAFE07 * value)
	{
		___U3CConceptsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConceptsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEntitiesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CEntitiesU3Ek__BackingField_5)); }
	inline List_1_tC1C389E73EF16989CC97BEEA0C0696E15CDBD54C * get_U3CEntitiesU3Ek__BackingField_5() const { return ___U3CEntitiesU3Ek__BackingField_5; }
	inline List_1_tC1C389E73EF16989CC97BEEA0C0696E15CDBD54C ** get_address_of_U3CEntitiesU3Ek__BackingField_5() { return &___U3CEntitiesU3Ek__BackingField_5; }
	inline void set_U3CEntitiesU3Ek__BackingField_5(List_1_tC1C389E73EF16989CC97BEEA0C0696E15CDBD54C * value)
	{
		___U3CEntitiesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEntitiesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CKeywordsU3Ek__BackingField_6)); }
	inline List_1_t2AF0A6902F1C3C0D1477066EAD66374909207EF7 * get_U3CKeywordsU3Ek__BackingField_6() const { return ___U3CKeywordsU3Ek__BackingField_6; }
	inline List_1_t2AF0A6902F1C3C0D1477066EAD66374909207EF7 ** get_address_of_U3CKeywordsU3Ek__BackingField_6() { return &___U3CKeywordsU3Ek__BackingField_6; }
	inline void set_U3CKeywordsU3Ek__BackingField_6(List_1_t2AF0A6902F1C3C0D1477066EAD66374909207EF7 * value)
	{
		___U3CKeywordsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCategoriesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CCategoriesU3Ek__BackingField_7)); }
	inline List_1_t97C30038000D3CFF2C832AA7ED13EE9F47B8DA89 * get_U3CCategoriesU3Ek__BackingField_7() const { return ___U3CCategoriesU3Ek__BackingField_7; }
	inline List_1_t97C30038000D3CFF2C832AA7ED13EE9F47B8DA89 ** get_address_of_U3CCategoriesU3Ek__BackingField_7() { return &___U3CCategoriesU3Ek__BackingField_7; }
	inline void set_U3CCategoriesU3Ek__BackingField_7(List_1_t97C30038000D3CFF2C832AA7ED13EE9F47B8DA89 * value)
	{
		___U3CCategoriesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCategoriesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClassificationsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CClassificationsU3Ek__BackingField_8)); }
	inline List_1_t254F4BFC3C9C743899AD19CF40F145AB02CF2006 * get_U3CClassificationsU3Ek__BackingField_8() const { return ___U3CClassificationsU3Ek__BackingField_8; }
	inline List_1_t254F4BFC3C9C743899AD19CF40F145AB02CF2006 ** get_address_of_U3CClassificationsU3Ek__BackingField_8() { return &___U3CClassificationsU3Ek__BackingField_8; }
	inline void set_U3CClassificationsU3Ek__BackingField_8(List_1_t254F4BFC3C9C743899AD19CF40F145AB02CF2006 * value)
	{
		___U3CClassificationsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClassificationsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEmotionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CEmotionU3Ek__BackingField_9)); }
	inline EmotionResult_t9568E2043FF203BBE265E13972E0B961EBF08280 * get_U3CEmotionU3Ek__BackingField_9() const { return ___U3CEmotionU3Ek__BackingField_9; }
	inline EmotionResult_t9568E2043FF203BBE265E13972E0B961EBF08280 ** get_address_of_U3CEmotionU3Ek__BackingField_9() { return &___U3CEmotionU3Ek__BackingField_9; }
	inline void set_U3CEmotionU3Ek__BackingField_9(EmotionResult_t9568E2043FF203BBE265E13972E0B961EBF08280 * value)
	{
		___U3CEmotionU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEmotionU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CMetadataU3Ek__BackingField_10)); }
	inline FeaturesResultsMetadata_t54DCBD8F82DCE1D061103B9603943B3FD9E61155 * get_U3CMetadataU3Ek__BackingField_10() const { return ___U3CMetadataU3Ek__BackingField_10; }
	inline FeaturesResultsMetadata_t54DCBD8F82DCE1D061103B9603943B3FD9E61155 ** get_address_of_U3CMetadataU3Ek__BackingField_10() { return &___U3CMetadataU3Ek__BackingField_10; }
	inline void set_U3CMetadataU3Ek__BackingField_10(FeaturesResultsMetadata_t54DCBD8F82DCE1D061103B9603943B3FD9E61155 * value)
	{
		___U3CMetadataU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetadataU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRelationsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CRelationsU3Ek__BackingField_11)); }
	inline List_1_tF730156D0D9BF1BF96AFF5B6ADFF61CB67359A3C * get_U3CRelationsU3Ek__BackingField_11() const { return ___U3CRelationsU3Ek__BackingField_11; }
	inline List_1_tF730156D0D9BF1BF96AFF5B6ADFF61CB67359A3C ** get_address_of_U3CRelationsU3Ek__BackingField_11() { return &___U3CRelationsU3Ek__BackingField_11; }
	inline void set_U3CRelationsU3Ek__BackingField_11(List_1_tF730156D0D9BF1BF96AFF5B6ADFF61CB67359A3C * value)
	{
		___U3CRelationsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRelationsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSemanticRolesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CSemanticRolesU3Ek__BackingField_12)); }
	inline List_1_tF2CE6D75B6A2D0ACEE911FBFCBE29F8F984BD061 * get_U3CSemanticRolesU3Ek__BackingField_12() const { return ___U3CSemanticRolesU3Ek__BackingField_12; }
	inline List_1_tF2CE6D75B6A2D0ACEE911FBFCBE29F8F984BD061 ** get_address_of_U3CSemanticRolesU3Ek__BackingField_12() { return &___U3CSemanticRolesU3Ek__BackingField_12; }
	inline void set_U3CSemanticRolesU3Ek__BackingField_12(List_1_tF2CE6D75B6A2D0ACEE911FBFCBE29F8F984BD061 * value)
	{
		___U3CSemanticRolesU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSemanticRolesU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSentimentU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CSentimentU3Ek__BackingField_13)); }
	inline SentimentResult_tC7D47F4212AD0B7E8A6D442F615853607F72352D * get_U3CSentimentU3Ek__BackingField_13() const { return ___U3CSentimentU3Ek__BackingField_13; }
	inline SentimentResult_tC7D47F4212AD0B7E8A6D442F615853607F72352D ** get_address_of_U3CSentimentU3Ek__BackingField_13() { return &___U3CSentimentU3Ek__BackingField_13; }
	inline void set_U3CSentimentU3Ek__BackingField_13(SentimentResult_tC7D47F4212AD0B7E8A6D442F615853607F72352D * value)
	{
		___U3CSentimentU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSentimentU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSyntaxU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546, ___U3CSyntaxU3Ek__BackingField_14)); }
	inline SyntaxResult_tBE718870B05059ED4A104918307C8F270A4EFE54 * get_U3CSyntaxU3Ek__BackingField_14() const { return ___U3CSyntaxU3Ek__BackingField_14; }
	inline SyntaxResult_tBE718870B05059ED4A104918307C8F270A4EFE54 ** get_address_of_U3CSyntaxU3Ek__BackingField_14() { return &___U3CSyntaxU3Ek__BackingField_14; }
	inline void set_U3CSyntaxU3Ek__BackingField_14(SyntaxResult_tBE718870B05059ED4A104918307C8F270A4EFE54 * value)
	{
		___U3CSyntaxU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSyntaxU3Ek__BackingField_14), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// IBM.Cloud.SDK.Authentication.Authenticator
struct Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA  : public RuntimeObject
{
public:
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_17;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::<AuthenticationType>k__BackingField
	String_t* ___U3CAuthenticationTypeU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA, ___U3CUrlU3Ek__BackingField_17)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_17() const { return ___U3CUrlU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_17() { return &___U3CUrlU3Ek__BackingField_17; }
	inline void set_U3CUrlU3Ek__BackingField_17(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthenticationTypeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA, ___U3CAuthenticationTypeU3Ek__BackingField_18)); }
	inline String_t* get_U3CAuthenticationTypeU3Ek__BackingField_18() const { return ___U3CAuthenticationTypeU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CAuthenticationTypeU3Ek__BackingField_18() { return &___U3CAuthenticationTypeU3Ek__BackingField_18; }
	inline void set_U3CAuthenticationTypeU3Ek__BackingField_18(String_t* value)
	{
		___U3CAuthenticationTypeU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthenticationTypeU3Ek__BackingField_18), (void*)value);
	}
};

struct Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields
{
public:
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::PropNameAuthType
	String_t* ___PropNameAuthType_5;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::PropNameUsername
	String_t* ___PropNameUsername_6;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::PropNamePassword
	String_t* ___PropNamePassword_7;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::PropNameBearerToken
	String_t* ___PropNameBearerToken_8;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::PropNameUrl
	String_t* ___PropNameUrl_9;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::PropNameDisableSslVerification
	String_t* ___PropNameDisableSslVerification_10;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::PropNameApikey
	String_t* ___PropNameApikey_11;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::PropNameClientId
	String_t* ___PropNameClientId_12;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::PropNameClientSecret
	String_t* ___PropNameClientSecret_13;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::ErrorMessagePropMissing
	String_t* ___ErrorMessagePropMissing_14;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::ErrorMessagePropInvalid
	String_t* ___ErrorMessagePropInvalid_15;
	// System.String IBM.Cloud.SDK.Authentication.Authenticator::ErrorMessageReqFailed
	String_t* ___ErrorMessageReqFailed_16;

public:
	inline static int32_t get_offset_of_PropNameAuthType_5() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___PropNameAuthType_5)); }
	inline String_t* get_PropNameAuthType_5() const { return ___PropNameAuthType_5; }
	inline String_t** get_address_of_PropNameAuthType_5() { return &___PropNameAuthType_5; }
	inline void set_PropNameAuthType_5(String_t* value)
	{
		___PropNameAuthType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameAuthType_5), (void*)value);
	}

	inline static int32_t get_offset_of_PropNameUsername_6() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___PropNameUsername_6)); }
	inline String_t* get_PropNameUsername_6() const { return ___PropNameUsername_6; }
	inline String_t** get_address_of_PropNameUsername_6() { return &___PropNameUsername_6; }
	inline void set_PropNameUsername_6(String_t* value)
	{
		___PropNameUsername_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameUsername_6), (void*)value);
	}

	inline static int32_t get_offset_of_PropNamePassword_7() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___PropNamePassword_7)); }
	inline String_t* get_PropNamePassword_7() const { return ___PropNamePassword_7; }
	inline String_t** get_address_of_PropNamePassword_7() { return &___PropNamePassword_7; }
	inline void set_PropNamePassword_7(String_t* value)
	{
		___PropNamePassword_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNamePassword_7), (void*)value);
	}

	inline static int32_t get_offset_of_PropNameBearerToken_8() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___PropNameBearerToken_8)); }
	inline String_t* get_PropNameBearerToken_8() const { return ___PropNameBearerToken_8; }
	inline String_t** get_address_of_PropNameBearerToken_8() { return &___PropNameBearerToken_8; }
	inline void set_PropNameBearerToken_8(String_t* value)
	{
		___PropNameBearerToken_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameBearerToken_8), (void*)value);
	}

	inline static int32_t get_offset_of_PropNameUrl_9() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___PropNameUrl_9)); }
	inline String_t* get_PropNameUrl_9() const { return ___PropNameUrl_9; }
	inline String_t** get_address_of_PropNameUrl_9() { return &___PropNameUrl_9; }
	inline void set_PropNameUrl_9(String_t* value)
	{
		___PropNameUrl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameUrl_9), (void*)value);
	}

	inline static int32_t get_offset_of_PropNameDisableSslVerification_10() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___PropNameDisableSslVerification_10)); }
	inline String_t* get_PropNameDisableSslVerification_10() const { return ___PropNameDisableSslVerification_10; }
	inline String_t** get_address_of_PropNameDisableSslVerification_10() { return &___PropNameDisableSslVerification_10; }
	inline void set_PropNameDisableSslVerification_10(String_t* value)
	{
		___PropNameDisableSslVerification_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameDisableSslVerification_10), (void*)value);
	}

	inline static int32_t get_offset_of_PropNameApikey_11() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___PropNameApikey_11)); }
	inline String_t* get_PropNameApikey_11() const { return ___PropNameApikey_11; }
	inline String_t** get_address_of_PropNameApikey_11() { return &___PropNameApikey_11; }
	inline void set_PropNameApikey_11(String_t* value)
	{
		___PropNameApikey_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameApikey_11), (void*)value);
	}

	inline static int32_t get_offset_of_PropNameClientId_12() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___PropNameClientId_12)); }
	inline String_t* get_PropNameClientId_12() const { return ___PropNameClientId_12; }
	inline String_t** get_address_of_PropNameClientId_12() { return &___PropNameClientId_12; }
	inline void set_PropNameClientId_12(String_t* value)
	{
		___PropNameClientId_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameClientId_12), (void*)value);
	}

	inline static int32_t get_offset_of_PropNameClientSecret_13() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___PropNameClientSecret_13)); }
	inline String_t* get_PropNameClientSecret_13() const { return ___PropNameClientSecret_13; }
	inline String_t** get_address_of_PropNameClientSecret_13() { return &___PropNameClientSecret_13; }
	inline void set_PropNameClientSecret_13(String_t* value)
	{
		___PropNameClientSecret_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameClientSecret_13), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorMessagePropMissing_14() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___ErrorMessagePropMissing_14)); }
	inline String_t* get_ErrorMessagePropMissing_14() const { return ___ErrorMessagePropMissing_14; }
	inline String_t** get_address_of_ErrorMessagePropMissing_14() { return &___ErrorMessagePropMissing_14; }
	inline void set_ErrorMessagePropMissing_14(String_t* value)
	{
		___ErrorMessagePropMissing_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorMessagePropMissing_14), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorMessagePropInvalid_15() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___ErrorMessagePropInvalid_15)); }
	inline String_t* get_ErrorMessagePropInvalid_15() const { return ___ErrorMessagePropInvalid_15; }
	inline String_t** get_address_of_ErrorMessagePropInvalid_15() { return &___ErrorMessagePropInvalid_15; }
	inline void set_ErrorMessagePropInvalid_15(String_t* value)
	{
		___ErrorMessagePropInvalid_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorMessagePropInvalid_15), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorMessageReqFailed_16() { return static_cast<int32_t>(offsetof(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA_StaticFields, ___ErrorMessageReqFailed_16)); }
	inline String_t* get_ErrorMessageReqFailed_16() const { return ___ErrorMessageReqFailed_16; }
	inline String_t** get_address_of_ErrorMessageReqFailed_16() { return &___ErrorMessageReqFailed_16; }
	inline void set_ErrorMessageReqFailed_16(String_t* value)
	{
		___ErrorMessageReqFailed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorMessageReqFailed_16), (void*)value);
	}
};


// IBM.Cloud.SDK.BaseService
struct BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C  : public RuntimeObject
{
public:
	// IBM.Cloud.SDK.Authentication.Authenticator IBM.Cloud.SDK.BaseService::<Authenticator>k__BackingField
	Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA * ___U3CAuthenticatorU3Ek__BackingField_0;
	// IBM.Cloud.SDK.Connection.RESTConnector IBM.Cloud.SDK.BaseService::_connector
	RESTConnector_t769C68998AC6FD917D22F191DFFE6882798D7996 * ____connector_1;
	// System.String IBM.Cloud.SDK.BaseService::serviceUrl
	String_t* ___serviceUrl_2;
	// System.String IBM.Cloud.SDK.BaseService::<ServiceId>k__BackingField
	String_t* ___U3CServiceIdU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> IBM.Cloud.SDK.BaseService::customRequestHeaders
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___customRequestHeaders_4;

public:
	inline static int32_t get_offset_of_U3CAuthenticatorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C, ___U3CAuthenticatorU3Ek__BackingField_0)); }
	inline Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA * get_U3CAuthenticatorU3Ek__BackingField_0() const { return ___U3CAuthenticatorU3Ek__BackingField_0; }
	inline Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA ** get_address_of_U3CAuthenticatorU3Ek__BackingField_0() { return &___U3CAuthenticatorU3Ek__BackingField_0; }
	inline void set_U3CAuthenticatorU3Ek__BackingField_0(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA * value)
	{
		___U3CAuthenticatorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthenticatorU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of__connector_1() { return static_cast<int32_t>(offsetof(BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C, ____connector_1)); }
	inline RESTConnector_t769C68998AC6FD917D22F191DFFE6882798D7996 * get__connector_1() const { return ____connector_1; }
	inline RESTConnector_t769C68998AC6FD917D22F191DFFE6882798D7996 ** get_address_of__connector_1() { return &____connector_1; }
	inline void set__connector_1(RESTConnector_t769C68998AC6FD917D22F191DFFE6882798D7996 * value)
	{
		____connector_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connector_1), (void*)value);
	}

	inline static int32_t get_offset_of_serviceUrl_2() { return static_cast<int32_t>(offsetof(BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C, ___serviceUrl_2)); }
	inline String_t* get_serviceUrl_2() const { return ___serviceUrl_2; }
	inline String_t** get_address_of_serviceUrl_2() { return &___serviceUrl_2; }
	inline void set_serviceUrl_2(String_t* value)
	{
		___serviceUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serviceUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C, ___U3CServiceIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CServiceIdU3Ek__BackingField_3() const { return ___U3CServiceIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CServiceIdU3Ek__BackingField_3() { return &___U3CServiceIdU3Ek__BackingField_3; }
	inline void set_U3CServiceIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CServiceIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceIdU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_customRequestHeaders_4() { return static_cast<int32_t>(offsetof(BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C, ___customRequestHeaders_4)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_customRequestHeaders_4() const { return ___customRequestHeaders_4; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_customRequestHeaders_4() { return &___customRequestHeaders_4; }
	inline void set_customRequestHeaders_4(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___customRequestHeaders_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customRequestHeaders_4), (void*)value);
	}
};

struct BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C_StaticFields
{
public:
	// System.String IBM.Cloud.SDK.BaseService::PropNameServiceUrl
	String_t* ___PropNameServiceUrl_5;
	// System.String IBM.Cloud.SDK.BaseService::PropNameServiceDisableSslVerification
	String_t* ___PropNameServiceDisableSslVerification_6;

public:
	inline static int32_t get_offset_of_PropNameServiceUrl_5() { return static_cast<int32_t>(offsetof(BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C_StaticFields, ___PropNameServiceUrl_5)); }
	inline String_t* get_PropNameServiceUrl_5() const { return ___PropNameServiceUrl_5; }
	inline String_t** get_address_of_PropNameServiceUrl_5() { return &___PropNameServiceUrl_5; }
	inline void set_PropNameServiceUrl_5(String_t* value)
	{
		___PropNameServiceUrl_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameServiceUrl_5), (void*)value);
	}

	inline static int32_t get_offset_of_PropNameServiceDisableSslVerification_6() { return static_cast<int32_t>(offsetof(BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C_StaticFields, ___PropNameServiceDisableSslVerification_6)); }
	inline String_t* get_PropNameServiceDisableSslVerification_6() const { return ___PropNameServiceDisableSslVerification_6; }
	inline String_t** get_address_of_PropNameServiceDisableSslVerification_6() { return &___PropNameServiceDisableSslVerification_6; }
	inline void set_PropNameServiceDisableSslVerification_6(String_t* value)
	{
		___PropNameServiceDisableSslVerification_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropNameServiceDisableSslVerification_6), (void*)value);
	}
};


// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults
struct DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2  : public RuntimeObject
{
public:
	// System.String IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults::<Deleted>k__BackingField
	String_t* ___U3CDeletedU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDeletedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2, ___U3CDeletedU3Ek__BackingField_0)); }
	inline String_t* get_U3CDeletedU3Ek__BackingField_0() const { return ___U3CDeletedU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CDeletedU3Ek__BackingField_0() { return &___U3CDeletedU3Ek__BackingField_0; }
	inline void set_U3CDeletedU3Ek__BackingField_0(String_t* value)
	{
		___U3CDeletedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeletedU3Ek__BackingField_0), (void*)value);
	}
};


// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features
struct Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550  : public RuntimeObject
{
public:
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ClassificationsOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Classifications>k__BackingField
	ClassificationsOptions_tF5BDCA3285F1E722F6CBE7CF66210F03999F9ED6 * ___U3CClassificationsU3Ek__BackingField_0;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ConceptsOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Concepts>k__BackingField
	ConceptsOptions_tC7826B3BF1A5C2495B6687F948E8B1EC9556B78F * ___U3CConceptsU3Ek__BackingField_1;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.EmotionOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Emotion>k__BackingField
	EmotionOptions_t5CD17C0C8E5A0D51D17AE306F99CA6F5D7A674EA * ___U3CEmotionU3Ek__BackingField_2;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.EntitiesOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Entities>k__BackingField
	EntitiesOptions_tA4AB46787D7317063564D1305E41136D74EAE1D2 * ___U3CEntitiesU3Ek__BackingField_3;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Keywords>k__BackingField
	KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * ___U3CKeywordsU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Metadata>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CMetadataU3Ek__BackingField_5;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.RelationsOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Relations>k__BackingField
	RelationsOptions_tBEE07FCFB14AAEC52D6880A8759D9A446E3FA478 * ___U3CRelationsU3Ek__BackingField_6;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SemanticRolesOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<SemanticRoles>k__BackingField
	SemanticRolesOptions_t5A51594ECE756C335AB145DEA0A11BF391D354C4 * ___U3CSemanticRolesU3Ek__BackingField_7;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SentimentOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Sentiment>k__BackingField
	SentimentOptions_tB13DC0CAC18A4DE190069FFB241D72ECC8B5C75D * ___U3CSentimentU3Ek__BackingField_8;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SummarizationOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Summarization>k__BackingField
	SummarizationOptions_t5BA1F752EAF6075B0CAAE0B30B50C5AFEBFFA97D * ___U3CSummarizationU3Ek__BackingField_9;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.CategoriesOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Categories>k__BackingField
	CategoriesOptions_t151A27419E0E685ECC59323BC68636565241BEA5 * ___U3CCategoriesU3Ek__BackingField_10;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SyntaxOptions IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::<Syntax>k__BackingField
	SyntaxOptions_tA0D42FF20F832E94D5C6D76A1F8A9D172735D145 * ___U3CSyntaxU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CClassificationsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CClassificationsU3Ek__BackingField_0)); }
	inline ClassificationsOptions_tF5BDCA3285F1E722F6CBE7CF66210F03999F9ED6 * get_U3CClassificationsU3Ek__BackingField_0() const { return ___U3CClassificationsU3Ek__BackingField_0; }
	inline ClassificationsOptions_tF5BDCA3285F1E722F6CBE7CF66210F03999F9ED6 ** get_address_of_U3CClassificationsU3Ek__BackingField_0() { return &___U3CClassificationsU3Ek__BackingField_0; }
	inline void set_U3CClassificationsU3Ek__BackingField_0(ClassificationsOptions_tF5BDCA3285F1E722F6CBE7CF66210F03999F9ED6 * value)
	{
		___U3CClassificationsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClassificationsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConceptsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CConceptsU3Ek__BackingField_1)); }
	inline ConceptsOptions_tC7826B3BF1A5C2495B6687F948E8B1EC9556B78F * get_U3CConceptsU3Ek__BackingField_1() const { return ___U3CConceptsU3Ek__BackingField_1; }
	inline ConceptsOptions_tC7826B3BF1A5C2495B6687F948E8B1EC9556B78F ** get_address_of_U3CConceptsU3Ek__BackingField_1() { return &___U3CConceptsU3Ek__BackingField_1; }
	inline void set_U3CConceptsU3Ek__BackingField_1(ConceptsOptions_tC7826B3BF1A5C2495B6687F948E8B1EC9556B78F * value)
	{
		___U3CConceptsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConceptsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEmotionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CEmotionU3Ek__BackingField_2)); }
	inline EmotionOptions_t5CD17C0C8E5A0D51D17AE306F99CA6F5D7A674EA * get_U3CEmotionU3Ek__BackingField_2() const { return ___U3CEmotionU3Ek__BackingField_2; }
	inline EmotionOptions_t5CD17C0C8E5A0D51D17AE306F99CA6F5D7A674EA ** get_address_of_U3CEmotionU3Ek__BackingField_2() { return &___U3CEmotionU3Ek__BackingField_2; }
	inline void set_U3CEmotionU3Ek__BackingField_2(EmotionOptions_t5CD17C0C8E5A0D51D17AE306F99CA6F5D7A674EA * value)
	{
		___U3CEmotionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEmotionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEntitiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CEntitiesU3Ek__BackingField_3)); }
	inline EntitiesOptions_tA4AB46787D7317063564D1305E41136D74EAE1D2 * get_U3CEntitiesU3Ek__BackingField_3() const { return ___U3CEntitiesU3Ek__BackingField_3; }
	inline EntitiesOptions_tA4AB46787D7317063564D1305E41136D74EAE1D2 ** get_address_of_U3CEntitiesU3Ek__BackingField_3() { return &___U3CEntitiesU3Ek__BackingField_3; }
	inline void set_U3CEntitiesU3Ek__BackingField_3(EntitiesOptions_tA4AB46787D7317063564D1305E41136D74EAE1D2 * value)
	{
		___U3CEntitiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEntitiesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CKeywordsU3Ek__BackingField_4)); }
	inline KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * get_U3CKeywordsU3Ek__BackingField_4() const { return ___U3CKeywordsU3Ek__BackingField_4; }
	inline KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD ** get_address_of_U3CKeywordsU3Ek__BackingField_4() { return &___U3CKeywordsU3Ek__BackingField_4; }
	inline void set_U3CKeywordsU3Ek__BackingField_4(KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * value)
	{
		___U3CKeywordsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CMetadataU3Ek__BackingField_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CMetadataU3Ek__BackingField_5() const { return ___U3CMetadataU3Ek__BackingField_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CMetadataU3Ek__BackingField_5() { return &___U3CMetadataU3Ek__BackingField_5; }
	inline void set_U3CMetadataU3Ek__BackingField_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CMetadataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetadataU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRelationsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CRelationsU3Ek__BackingField_6)); }
	inline RelationsOptions_tBEE07FCFB14AAEC52D6880A8759D9A446E3FA478 * get_U3CRelationsU3Ek__BackingField_6() const { return ___U3CRelationsU3Ek__BackingField_6; }
	inline RelationsOptions_tBEE07FCFB14AAEC52D6880A8759D9A446E3FA478 ** get_address_of_U3CRelationsU3Ek__BackingField_6() { return &___U3CRelationsU3Ek__BackingField_6; }
	inline void set_U3CRelationsU3Ek__BackingField_6(RelationsOptions_tBEE07FCFB14AAEC52D6880A8759D9A446E3FA478 * value)
	{
		___U3CRelationsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRelationsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSemanticRolesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CSemanticRolesU3Ek__BackingField_7)); }
	inline SemanticRolesOptions_t5A51594ECE756C335AB145DEA0A11BF391D354C4 * get_U3CSemanticRolesU3Ek__BackingField_7() const { return ___U3CSemanticRolesU3Ek__BackingField_7; }
	inline SemanticRolesOptions_t5A51594ECE756C335AB145DEA0A11BF391D354C4 ** get_address_of_U3CSemanticRolesU3Ek__BackingField_7() { return &___U3CSemanticRolesU3Ek__BackingField_7; }
	inline void set_U3CSemanticRolesU3Ek__BackingField_7(SemanticRolesOptions_t5A51594ECE756C335AB145DEA0A11BF391D354C4 * value)
	{
		___U3CSemanticRolesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSemanticRolesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSentimentU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CSentimentU3Ek__BackingField_8)); }
	inline SentimentOptions_tB13DC0CAC18A4DE190069FFB241D72ECC8B5C75D * get_U3CSentimentU3Ek__BackingField_8() const { return ___U3CSentimentU3Ek__BackingField_8; }
	inline SentimentOptions_tB13DC0CAC18A4DE190069FFB241D72ECC8B5C75D ** get_address_of_U3CSentimentU3Ek__BackingField_8() { return &___U3CSentimentU3Ek__BackingField_8; }
	inline void set_U3CSentimentU3Ek__BackingField_8(SentimentOptions_tB13DC0CAC18A4DE190069FFB241D72ECC8B5C75D * value)
	{
		___U3CSentimentU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSentimentU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSummarizationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CSummarizationU3Ek__BackingField_9)); }
	inline SummarizationOptions_t5BA1F752EAF6075B0CAAE0B30B50C5AFEBFFA97D * get_U3CSummarizationU3Ek__BackingField_9() const { return ___U3CSummarizationU3Ek__BackingField_9; }
	inline SummarizationOptions_t5BA1F752EAF6075B0CAAE0B30B50C5AFEBFFA97D ** get_address_of_U3CSummarizationU3Ek__BackingField_9() { return &___U3CSummarizationU3Ek__BackingField_9; }
	inline void set_U3CSummarizationU3Ek__BackingField_9(SummarizationOptions_t5BA1F752EAF6075B0CAAE0B30B50C5AFEBFFA97D * value)
	{
		___U3CSummarizationU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSummarizationU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCategoriesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CCategoriesU3Ek__BackingField_10)); }
	inline CategoriesOptions_t151A27419E0E685ECC59323BC68636565241BEA5 * get_U3CCategoriesU3Ek__BackingField_10() const { return ___U3CCategoriesU3Ek__BackingField_10; }
	inline CategoriesOptions_t151A27419E0E685ECC59323BC68636565241BEA5 ** get_address_of_U3CCategoriesU3Ek__BackingField_10() { return &___U3CCategoriesU3Ek__BackingField_10; }
	inline void set_U3CCategoriesU3Ek__BackingField_10(CategoriesOptions_t151A27419E0E685ECC59323BC68636565241BEA5 * value)
	{
		___U3CCategoriesU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCategoriesU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSyntaxU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550, ___U3CSyntaxU3Ek__BackingField_11)); }
	inline SyntaxOptions_tA0D42FF20F832E94D5C6D76A1F8A9D172735D145 * get_U3CSyntaxU3Ek__BackingField_11() const { return ___U3CSyntaxU3Ek__BackingField_11; }
	inline SyntaxOptions_tA0D42FF20F832E94D5C6D76A1F8A9D172735D145 ** get_address_of_U3CSyntaxU3Ek__BackingField_11() { return &___U3CSyntaxU3Ek__BackingField_11; }
	inline void set_U3CSyntaxU3Ek__BackingField_11(SyntaxOptions_tA0D42FF20F832E94D5C6D76A1F8A9D172735D145 * value)
	{
		___U3CSyntaxU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSyntaxU3Ek__BackingField_11), (void*)value);
	}
};


// IBM.Cloud.SDK.IBMError
struct IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239  : public RuntimeObject
{
public:
	// System.String IBM.Cloud.SDK.IBMError::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_0;
	// System.Int64 IBM.Cloud.SDK.IBMError::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_1;
	// System.String IBM.Cloud.SDK.IBMError::<ErrorMessage>k__BackingField
	String_t* ___U3CErrorMessageU3Ek__BackingField_2;
	// System.String IBM.Cloud.SDK.IBMError::<Response>k__BackingField
	String_t* ___U3CResponseU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> IBM.Cloud.SDK.IBMError::<ResponseHeaders>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CResponseHeadersU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CUrlU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239, ___U3CUrlU3Ek__BackingField_0)); }
	inline String_t* get_U3CUrlU3Ek__BackingField_0() const { return ___U3CUrlU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUrlU3Ek__BackingField_0() { return &___U3CUrlU3Ek__BackingField_0; }
	inline void set_U3CUrlU3Ek__BackingField_0(String_t* value)
	{
		___U3CUrlU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239, ___U3CStatusCodeU3Ek__BackingField_1)); }
	inline int64_t get_U3CStatusCodeU3Ek__BackingField_1() const { return ___U3CStatusCodeU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CStatusCodeU3Ek__BackingField_1() { return &___U3CStatusCodeU3Ek__BackingField_1; }
	inline void set_U3CStatusCodeU3Ek__BackingField_1(int64_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239, ___U3CErrorMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorMessageU3Ek__BackingField_2() const { return ___U3CErrorMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorMessageU3Ek__BackingField_2() { return &___U3CErrorMessageU3Ek__BackingField_2; }
	inline void set_U3CErrorMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorMessageU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239, ___U3CResponseU3Ek__BackingField_3)); }
	inline String_t* get_U3CResponseU3Ek__BackingField_3() const { return ___U3CResponseU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CResponseU3Ek__BackingField_3() { return &___U3CResponseU3Ek__BackingField_3; }
	inline void set_U3CResponseU3Ek__BackingField_3(String_t* value)
	{
		___U3CResponseU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseHeadersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239, ___U3CResponseHeadersU3Ek__BackingField_4)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CResponseHeadersU3Ek__BackingField_4() const { return ___U3CResponseHeadersU3Ek__BackingField_4; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CResponseHeadersU3Ek__BackingField_4() { return &___U3CResponseHeadersU3Ek__BackingField_4; }
	inline void set_U3CResponseHeadersU3Ek__BackingField_4(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CResponseHeadersU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseHeadersU3Ek__BackingField_4), (void*)value);
	}
};


// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults
struct ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Model> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults::<Models>k__BackingField
	List_1_t169E37E58319F3B81E7256B98793752534C18CA6 * ___U3CModelsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CModelsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622, ___U3CModelsU3Ek__BackingField_0)); }
	inline List_1_t169E37E58319F3B81E7256B98793752534C18CA6 * get_U3CModelsU3Ek__BackingField_0() const { return ___U3CModelsU3Ek__BackingField_0; }
	inline List_1_t169E37E58319F3B81E7256B98793752534C18CA6 ** get_address_of_U3CModelsU3Ek__BackingField_0() { return &___U3CModelsU3Ek__BackingField_0; }
	inline void set_U3CModelsU3Ek__BackingField_0(List_1_t169E37E58319F3B81E7256B98793752534C18CA6 * value)
	{
		___U3CModelsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CModelsU3Ek__BackingField_0), (void*)value);
	}
};


// IBM.Watson.SpeechToText.V1.SpeakerRecognitionEvent
struct SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978  : public RuntimeObject
{
public:
	// IBM.Watson.SpeechToText.V1.SpeakerLabelsResult[] IBM.Watson.SpeechToText.V1.SpeakerRecognitionEvent::<speaker_labels>k__BackingField
	SpeakerLabelsResultU5BU5D_t1AD07102E6E60EEFFD46BE0F2509956FCB03116B* ___U3Cspeaker_labelsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3Cspeaker_labelsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978, ___U3Cspeaker_labelsU3Ek__BackingField_0)); }
	inline SpeakerLabelsResultU5BU5D_t1AD07102E6E60EEFFD46BE0F2509956FCB03116B* get_U3Cspeaker_labelsU3Ek__BackingField_0() const { return ___U3Cspeaker_labelsU3Ek__BackingField_0; }
	inline SpeakerLabelsResultU5BU5D_t1AD07102E6E60EEFFD46BE0F2509956FCB03116B** get_address_of_U3Cspeaker_labelsU3Ek__BackingField_0() { return &___U3Cspeaker_labelsU3Ek__BackingField_0; }
	inline void set_U3Cspeaker_labelsU3Ek__BackingField_0(SpeakerLabelsResultU5BU5D_t1AD07102E6E60EEFFD46BE0F2509956FCB03116B* value)
	{
		___U3Cspeaker_labelsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cspeaker_labelsU3Ek__BackingField_0), (void*)value);
	}
};


// IBM.Watson.SpeechToText.V1.SpeechRecognitionEvent
struct SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230  : public RuntimeObject
{
public:
	// IBM.Watson.SpeechToText.V1.SpeechRecognitionResult[] IBM.Watson.SpeechToText.V1.SpeechRecognitionEvent::<results>k__BackingField
	SpeechRecognitionResultU5BU5D_tE5588CA022B07261258A003F314656A7F9219D83* ___U3CresultsU3Ek__BackingField_0;
	// System.Int32 IBM.Watson.SpeechToText.V1.SpeechRecognitionEvent::<result_index>k__BackingField
	int32_t ___U3Cresult_indexU3Ek__BackingField_1;
	// IBM.Watson.SpeechToText.V1.SpeakerLabelsResult[] IBM.Watson.SpeechToText.V1.SpeechRecognitionEvent::<speaker_labels>k__BackingField
	SpeakerLabelsResultU5BU5D_t1AD07102E6E60EEFFD46BE0F2509956FCB03116B* ___U3Cspeaker_labelsU3Ek__BackingField_2;
	// System.String[] IBM.Watson.SpeechToText.V1.SpeechRecognitionEvent::<warnings>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CwarningsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CresultsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230, ___U3CresultsU3Ek__BackingField_0)); }
	inline SpeechRecognitionResultU5BU5D_tE5588CA022B07261258A003F314656A7F9219D83* get_U3CresultsU3Ek__BackingField_0() const { return ___U3CresultsU3Ek__BackingField_0; }
	inline SpeechRecognitionResultU5BU5D_tE5588CA022B07261258A003F314656A7F9219D83** get_address_of_U3CresultsU3Ek__BackingField_0() { return &___U3CresultsU3Ek__BackingField_0; }
	inline void set_U3CresultsU3Ek__BackingField_0(SpeechRecognitionResultU5BU5D_tE5588CA022B07261258A003F314656A7F9219D83* value)
	{
		___U3CresultsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cresult_indexU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230, ___U3Cresult_indexU3Ek__BackingField_1)); }
	inline int32_t get_U3Cresult_indexU3Ek__BackingField_1() const { return ___U3Cresult_indexU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3Cresult_indexU3Ek__BackingField_1() { return &___U3Cresult_indexU3Ek__BackingField_1; }
	inline void set_U3Cresult_indexU3Ek__BackingField_1(int32_t value)
	{
		___U3Cresult_indexU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3Cspeaker_labelsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230, ___U3Cspeaker_labelsU3Ek__BackingField_2)); }
	inline SpeakerLabelsResultU5BU5D_t1AD07102E6E60EEFFD46BE0F2509956FCB03116B* get_U3Cspeaker_labelsU3Ek__BackingField_2() const { return ___U3Cspeaker_labelsU3Ek__BackingField_2; }
	inline SpeakerLabelsResultU5BU5D_t1AD07102E6E60EEFFD46BE0F2509956FCB03116B** get_address_of_U3Cspeaker_labelsU3Ek__BackingField_2() { return &___U3Cspeaker_labelsU3Ek__BackingField_2; }
	inline void set_U3Cspeaker_labelsU3Ek__BackingField_2(SpeakerLabelsResultU5BU5D_t1AD07102E6E60EEFFD46BE0F2509956FCB03116B* value)
	{
		___U3Cspeaker_labelsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cspeaker_labelsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwarningsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230, ___U3CwarningsU3Ek__BackingField_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CwarningsU3Ek__BackingField_3() const { return ___U3CwarningsU3Ek__BackingField_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CwarningsU3Ek__BackingField_3() { return &___U3CwarningsU3Ek__BackingField_3; }
	inline void set_U3CwarningsU3Ek__BackingField_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CwarningsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwarningsU3Ek__BackingField_3), (void*)value);
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


// IBM.Watson.LanguageTranslator.V3.Model.TranslationModels
struct TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<IBM.Watson.LanguageTranslator.V3.Model.TranslationModel> IBM.Watson.LanguageTranslator.V3.Model.TranslationModels::<Models>k__BackingField
	List_1_t12C606ABDAB97F160C6E140103DABC9987485B94 * ___U3CModelsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CModelsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82, ___U3CModelsU3Ek__BackingField_0)); }
	inline List_1_t12C606ABDAB97F160C6E140103DABC9987485B94 * get_U3CModelsU3Ek__BackingField_0() const { return ___U3CModelsU3Ek__BackingField_0; }
	inline List_1_t12C606ABDAB97F160C6E140103DABC9987485B94 ** get_address_of_U3CModelsU3Ek__BackingField_0() { return &___U3CModelsU3Ek__BackingField_0; }
	inline void set_U3CModelsU3Ek__BackingField_0(List_1_t12C606ABDAB97F160C6E140103DABC9987485B94 * value)
	{
		___U3CModelsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CModelsU3Ek__BackingField_0), (void*)value);
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

// ExampleLanguageTranslatorV3/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4  : public RuntimeObject
{
public:
	// IBM.Watson.LanguageTranslator.V3.Model.TranslationModels ExampleLanguageTranslatorV3/<>c__DisplayClass6_0::listModelsResponse
	TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 * ___listModelsResponse_0;

public:
	inline static int32_t get_offset_of_listModelsResponse_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4, ___listModelsResponse_0)); }
	inline TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 * get_listModelsResponse_0() const { return ___listModelsResponse_0; }
	inline TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 ** get_address_of_listModelsResponse_0() { return &___listModelsResponse_0; }
	inline void set_listModelsResponse_0(TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 * value)
	{
		___listModelsResponse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listModelsResponse_0), (void*)value);
	}
};


// ExampleLanguageTranslatorV3/<ExampleListModels>d__6
struct U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E  : public RuntimeObject
{
public:
	// System.Int32 ExampleLanguageTranslatorV3/<ExampleListModels>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExampleLanguageTranslatorV3/<ExampleListModels>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ExampleLanguageTranslatorV3 ExampleLanguageTranslatorV3/<ExampleListModels>d__6::<>4__this
	ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30 * ___U3CU3E4__this_2;
	// ExampleLanguageTranslatorV3/<>c__DisplayClass6_0 ExampleLanguageTranslatorV3/<ExampleListModels>d__6::<>8__1
	U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 * ___U3CU3E8__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E, ___U3CU3E4__this_2)); }
	inline ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276  : public RuntimeObject
{
public:
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass7_0::analyzeResponse
	AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * ___analyzeResponse_0;

public:
	inline static int32_t get_offset_of_analyzeResponse_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276, ___analyzeResponse_0)); }
	inline AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * get_analyzeResponse_0() const { return ___analyzeResponse_0; }
	inline AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 ** get_address_of_analyzeResponse_0() { return &___analyzeResponse_0; }
	inline void set_analyzeResponse_0(AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * value)
	{
		___analyzeResponse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___analyzeResponse_0), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161  : public RuntimeObject
{
public:
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass8_0::listModelsResponse
	ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * ___listModelsResponse_0;

public:
	inline static int32_t get_offset_of_listModelsResponse_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161, ___listModelsResponse_0)); }
	inline ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * get_listModelsResponse_0() const { return ___listModelsResponse_0; }
	inline ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 ** get_address_of_listModelsResponse_0() { return &___listModelsResponse_0; }
	inline void set_listModelsResponse_0(ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * value)
	{
		___listModelsResponse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listModelsResponse_0), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7  : public RuntimeObject
{
public:
	// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass9_0::deleteModelResponse
	DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * ___deleteModelResponse_0;

public:
	inline static int32_t get_offset_of_deleteModelResponse_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7, ___deleteModelResponse_0)); }
	inline DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * get_deleteModelResponse_0() const { return ___deleteModelResponse_0; }
	inline DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 ** get_address_of_deleteModelResponse_0() { return &___deleteModelResponse_0; }
	inline void set_deleteModelResponse_0(DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * value)
	{
		___deleteModelResponse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deleteModelResponse_0), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6
struct U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2  : public RuntimeObject
{
public:
	// System.Int32 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::<>4__this
	ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * ___U3CU3E4__this_2;
	// IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::<authenticator>5__2
	IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * ___U3CauthenticatorU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2, ___U3CU3E4__this_2)); }
	inline ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CauthenticatorU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2, ___U3CauthenticatorU3E5__2_3)); }
	inline IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * get_U3CauthenticatorU3E5__2_3() const { return ___U3CauthenticatorU3E5__2_3; }
	inline IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B ** get_address_of_U3CauthenticatorU3E5__2_3() { return &___U3CauthenticatorU3E5__2_3; }
	inline void set_U3CauthenticatorU3E5__2_3(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * value)
	{
		___U3CauthenticatorU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CauthenticatorU3E5__2_3), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7
struct U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC  : public RuntimeObject
{
public:
	// System.Int32 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::<>4__this
	ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * ___U3CU3E4__this_2;
	// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass7_0 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::<>8__1
	U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * ___U3CU3E8__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC, ___U3CU3E4__this_2)); }
	inline ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9
struct U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B  : public RuntimeObject
{
public:
	// System.Int32 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::<>4__this
	ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * ___U3CU3E4__this_2;
	// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass9_0 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::<>8__1
	U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * ___U3CU3E8__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B, ___U3CU3E4__this_2)); }
	inline ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8
struct U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C  : public RuntimeObject
{
public:
	// System.Int32 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::<>4__this
	ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * ___U3CU3E4__this_2;
	// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass8_0 IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::<>8__1
	U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * ___U3CU3E8__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C, ___U3CU3E4__this_2)); }
	inline ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}
};


// IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11
struct U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D  : public RuntimeObject
{
public:
	// System.Int32 IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// IBM.Watsson.Examples.ExampleStreaming IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::<>4__this
	ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * ___U3CU3E4__this_2;
	// IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::<authenticator>5__2
	IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * ___U3CauthenticatorU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D, ___U3CU3E4__this_2)); }
	inline ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CauthenticatorU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D, ___U3CauthenticatorU3E5__2_3)); }
	inline IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * get_U3CauthenticatorU3E5__2_3() const { return ___U3CauthenticatorU3E5__2_3; }
	inline IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B ** get_address_of_U3CauthenticatorU3E5__2_3() { return &___U3CauthenticatorU3E5__2_3; }
	inline void set_U3CauthenticatorU3E5__2_3(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * value)
	{
		___U3CauthenticatorU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CauthenticatorU3E5__2_3), (void*)value);
	}
};


// IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18
struct U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590  : public RuntimeObject
{
public:
	// System.Int32 IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// IBM.Watsson.Examples.ExampleStreaming IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::<>4__this
	ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * ___U3CU3E4__this_2;
	// System.Boolean IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::<bFirstBlock>5__2
	bool ___U3CbFirstBlockU3E5__2_3;
	// System.Int32 IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::<midPoint>5__3
	int32_t ___U3CmidPointU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590, ___U3CU3E4__this_2)); }
	inline ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbFirstBlockU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590, ___U3CbFirstBlockU3E5__2_3)); }
	inline bool get_U3CbFirstBlockU3E5__2_3() const { return ___U3CbFirstBlockU3E5__2_3; }
	inline bool* get_address_of_U3CbFirstBlockU3E5__2_3() { return &___U3CbFirstBlockU3E5__2_3; }
	inline void set_U3CbFirstBlockU3E5__2_3(bool value)
	{
		___U3CbFirstBlockU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CmidPointU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590, ___U3CmidPointU3E5__3_4)); }
	inline int32_t get_U3CmidPointU3E5__3_4() const { return ___U3CmidPointU3E5__3_4; }
	inline int32_t* get_address_of_U3CmidPointU3E5__3_4() { return &___U3CmidPointU3E5__3_4; }
	inline void set_U3CmidPointU3E5__3_4(int32_t value)
	{
		___U3CmidPointU3E5__3_4 = value;
	}
};


// IBM.Watson.Examples.ExampleTextToSpeechV1/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C  : public RuntimeObject
{
public:
	// System.Byte[] IBM.Watson.Examples.ExampleTextToSpeechV1/<>c__DisplayClass15_0::synthesizeResponse
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___synthesizeResponse_0;
	// UnityEngine.AudioClip IBM.Watson.Examples.ExampleTextToSpeechV1/<>c__DisplayClass15_0::clip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip_1;
	// IBM.Watson.Examples.ExampleTextToSpeechV1 IBM.Watson.Examples.ExampleTextToSpeechV1/<>c__DisplayClass15_0::<>4__this
	ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_synthesizeResponse_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C, ___synthesizeResponse_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_synthesizeResponse_0() const { return ___synthesizeResponse_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_synthesizeResponse_0() { return &___synthesizeResponse_0; }
	inline void set_synthesizeResponse_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___synthesizeResponse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synthesizeResponse_0), (void*)value);
	}

	inline static int32_t get_offset_of_clip_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C, ___clip_1)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_clip_1() const { return ___clip_1; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_clip_1() { return &___clip_1; }
	inline void set_clip_1(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___clip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C, ___U3CU3E4__this_2)); }
	inline ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14
struct U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F  : public RuntimeObject
{
public:
	// System.Int32 IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// IBM.Watson.Examples.ExampleTextToSpeechV1 IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::<>4__this
	ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * ___U3CU3E4__this_2;
	// IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::<authenticator>5__2
	IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * ___U3CauthenticatorU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F, ___U3CU3E4__this_2)); }
	inline ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CauthenticatorU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F, ___U3CauthenticatorU3E5__2_3)); }
	inline IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * get_U3CauthenticatorU3E5__2_3() const { return ___U3CauthenticatorU3E5__2_3; }
	inline IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B ** get_address_of_U3CauthenticatorU3E5__2_3() { return &___U3CauthenticatorU3E5__2_3; }
	inline void set_U3CauthenticatorU3E5__2_3(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * value)
	{
		___U3CauthenticatorU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CauthenticatorU3E5__2_3), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15
struct U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938  : public RuntimeObject
{
public:
	// System.Int32 IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// IBM.Watson.Examples.ExampleTextToSpeechV1 IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::<>4__this
	ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * ___U3CU3E4__this_2;
	// System.String IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::text
	String_t* ___text_3;
	// IBM.Watson.Examples.ExampleTextToSpeechV1/<>c__DisplayClass15_0 IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::<>8__1
	U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * ___U3CU3E8__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938, ___U3CU3E4__this_2)); }
	inline ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_4() { return static_cast<int32_t>(offsetof(U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938, ___U3CU3E8__1_4)); }
	inline U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * get_U3CU3E8__1_4() const { return ___U3CU3E8__1_4; }
	inline U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C ** get_address_of_U3CU3E8__1_4() { return &___U3CU3E8__1_4; }
	inline void set_U3CU3E8__1_4(U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * value)
	{
		___U3CU3E8__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_4), (void*)value);
	}
};


// IBM.Watson.Discovery.V1.Model.Field/TypeValue
struct TypeValue_t4FBA34070043325F105F484FFB4D20D4393933F1  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V2.Model.Field/TypeValue
struct TypeValue_t3C684970A7C037D33C99CE7A3AAA4D3A7606FF16  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.Gateway/StatusValue
struct StatusValue_t65CEEA3097C476EF1954BECA8EBDC9C9ED62E61E  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.Model.Grammar/StatusValue
struct StatusValue_t1997AD6C86A76E41B790274D9986E4CACF20DE13  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.Model.LanguageModel/StatusValue
struct StatusValue_t5600E311148712D7752C411664EC7A2C964F679B  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.LogMessage/LevelValue
struct LevelValue_t612EB3196E55FDA33BDE07B9617C30D935F985B5  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.LogMessageSource/TypeValue
struct TypeValue_t0AAF0BA8BFCB7568B02573F83A6D943FDDB1FEE5  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.LogQueryResponseResult/DocumentTypeValue
struct DocumentTypeValue_tC93A052414D19097F71FBAA0BD307E602F0090AC  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.LogQueryResponseResult/EventTypeValue
struct EventTypeValue_t80FE04D6C3BA41AC47AD57F6D8ACF4F4A9F1E7A1  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.LogQueryResponseResult/ResultTypeValue
struct ResultTypeValue_t45770152AE0FC4B3D85BE6D9F3712FB119520852  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V2.Model.MessageContextGlobalSystem/LocaleValue
struct LocaleValue_t2D13E6A6FD49B3392E51BE08FF14062301FB0D00  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V2.Model.MessageInput/MessageTypeValue
struct MessageTypeValue_t3A88DC437649B5992FBCABE7D6D2D3BB2208F7B1  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V2.Model.MessageInputStateless/MessageTypeValue
struct MessageTypeValue_t5AD62ADDDCD6905CE4E9A33901DDA3AF1E85A074  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V2.Model.MessageOutputDebug/BranchExitedReasonValue
struct BranchExitedReasonValue_t9993BB123C065777F21FF45794BC502AE2691674  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Model/StatusValue
struct StatusValue_t12A452C779A5DD367BD03013CE74DBFEAF87B2B3  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.ModelCredentials/SourceTypeValue
struct SourceTypeValue_t347314EFF083FC50D954BA3A842A2904237F5005  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.ModelEnvironment/SizeValue
struct SizeValue_tA2B997CC9B30D497D289585164ADF4680AB74450  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.ModelEnvironment/StatusValue
struct StatusValue_t3A6C3096E0221C4CCFCD929D5EFDC5C76DAB2744  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.NormalizationOperation/OperationValue
struct OperationValue_t6505774C0536FFA5DDFC4B69CC9B3E6FECD9EE57  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.Notice/SeverityValue
struct SeverityValue_tAEDF069F59F242DA8A3CF0D561AA236B7339154B  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V2.Model.Notice/SeverityValue
struct SeverityValue_t28F9070A985D3B75D78C78DE13E2E509765CEE30  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V2.Model.ProjectDetails/TypeValue
struct TypeValue_t603C3F2055EBFE34FE3C1C4BE76E3CB8CAD075E5  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V2.Model.ProjectListDetails/TypeValue
struct TypeValue_t52E7D70963067840176277EE623DD69E5A71AB9E  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.QueryNoticesResult/FileTypeValue
struct FileTypeValue_tB318E0D02E194995AA6286FF3095ABD413B874AD  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V2.Model.QueryResultMetadata/DocumentRetrievalSourceValue
struct DocumentRetrievalSourceValue_t40574470DB2941DF2DB14C3C0DE8E7B84C5D81F2  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.Model.RecognitionJob/StatusValue
struct StatusValue_t3CBFD4996CFF9DBF2FDAD04D6185009E200918FB  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.Model.RegisterStatus/StatusValue
struct StatusValue_t6EDA31CB0581AC916ADCCB49406A6784C5A1DCE3  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.ResponseGenericChannel/ChannelValue
struct ChannelValue_t887487A1641E8164361FCC2F6E7C2BB5F1ECDCA9  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.RetrievalDetails/DocumentRetrievalStrategyValue
struct DocumentRetrievalStrategyValue_tB308A345432938839434F7FE353B4BB6941A7833  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V2.Model.RetrievalDetails/DocumentRetrievalStrategyValue
struct DocumentRetrievalStrategyValue_t5CFAA9AFDB872E5858E2A7FDF08EE27EEC3172E7  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.RuntimeEntityInterpretation/GranularityValue
struct GranularityValue_t11D747643E9C76ABF034E9998E4AB125C11598E6  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V2.Model.RuntimeEntityInterpretation/GranularityValue
struct GranularityValue_t554E2DD9C413E9703112330C32E77F72413628BA  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.RuntimeEntityRole/TypeValue
struct TypeValue_tB3AED7C97149E2ECDF4C5C6A4508F79B9AACA928  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V2.Model.RuntimeEntityRole/TypeValue
struct TypeValue_t490BFD3837E73F69D3E105ED2E86A9714F9C1B55  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.RuntimeResponseGeneric/PreferenceValue
struct PreferenceValue_t96555F42E3DAA220E105DD6AF7B5D9ED6D2B7304  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V2.Model.RuntimeResponseGeneric/PreferenceValue
struct PreferenceValue_t55DAEFBC8660D9BD287B18DF0840F2D2627EAAFB  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.RuntimeResponseGenericRuntimeResponseTypeOption/PreferenceValue
struct PreferenceValue_t8B74F6AD983D1410E308844ABE268EA5DAAC4EBF  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V2.Model.RuntimeResponseGenericRuntimeResponseTypeOption/PreferenceValue
struct PreferenceValue_tE58932D93F8C1DF9A1291128AEB0414E8A9DC385  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.SearchStatus/StatusValue
struct StatusValue_tB86462E30E39862D174913B3CD8D3F1EC429E769  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SentimentModel/StatusValue
struct StatusValue_tD8C231997FAD21404339720A8452FCB78F574112  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.Source/TypeValue
struct TypeValue_tC764B668E531EA0A48A33F5F16602DFF522A21D6  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.SourceOptionsWebCrawl/CrawlSpeedValue
struct CrawlSpeedValue_tF75E94A978A1ECF194EE03378918AB2C9F8DC64C  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.SourceSchedule/FrequencyValue
struct FrequencyValue_tA8E1C4CB42F0B388998B2904731BE7B81E5317E9  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Discovery.V1.Model.SourceStatus/StatusValue
struct StatusValue_t38BA8C23AAFBFFC872B58BE5FB8E17622FEB638B  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.Model.SpeechRecognitionResult/EndOfUtteranceValue
struct EndOfUtteranceValue_t3C0EAC6C8413ACDC8E0F3F2280223773F1F18909  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242
struct U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836  : public RuntimeObject
{
public:
	// System.Int32 IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// IBM.Watson.SpeechToText.V1.SpeechToTextService IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::<>4__this
	SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * ___U3CU3E4__this_2;
	// UnityEngine.AudioClip IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::<_keepAliveClip>5__2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3C_keepAliveClipU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836, ___U3CU3E4__this_2)); }
	inline SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3C_keepAliveClipU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836, ___U3C_keepAliveClipU3E5__2_3)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3C_keepAliveClipU3E5__2_3() const { return ___U3C_keepAliveClipU3E5__2_3; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3C_keepAliveClipU3E5__2_3() { return &___U3C_keepAliveClipU3E5__2_3; }
	inline void set_U3C_keepAliveClipU3E5__2_3(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3C_keepAliveClipU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3C_keepAliveClipU3E5__2_3), (void*)value);
	}
};


// IBM.Watson.Discovery.V1.Model.TokenDictStatusResponse/StatusValue
struct StatusValue_t7573B43B5239932BEE2A3053A0FC94BF95A9EF7D  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.TokenResult/PartOfSpeechValue
struct PartOfSpeechValue_tA972607E24983E30A8CEBF5953F65440EC3690E6  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.Model.TrainingWarning/CodeValue
struct CodeValue_tE0061F25B75E10373B101F0F9AF35C7C0408CE7F  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.TextToSpeech.V1.Model.Translation/PartOfSpeechValue
struct PartOfSpeechValue_t087453C0139E384CF6A3484515999F6FDD15A962  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.LanguageTranslator.V3.Model.TranslationModel/StatusValue
struct StatusValue_t18B5CCB2FF7AB71AA9E00D21867B176BE438221B  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.Value/TypeValue
struct TypeValue_t4DA2068A47A875C329D74EFDDB8EFE4BD24F866D  : public RuntimeObject
{
public:

public:
};


// IBM.Cloud.SDK.Connection.WSConnector/Message
struct Message_t2184A9CCBB52B60EECA24C5579BB4D5A16019E7E  : public RuntimeObject
{
public:

public:
};


// IBM.Cloud.SDK.Widgetss.Widget/Data
struct Data_t05E96B30833A0B1AA40A8B45C98120056D5EF9DC  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.TextToSpeech.V1.Model.Word/PartOfSpeechValue
struct PartOfSpeechValue_t2D29F5AA397A859AA1EB7A4C34B5B2AE1F85E2E3  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.Workspace/StatusValue
struct StatusValue_t2DB7F3704EE6FD0EFFBC47872234B8DAA4FEED65  : public RuntimeObject
{
public:

public:
};


// IBM.Watson.Assistant.V1.Model.WorkspaceSystemSettingsDisambiguation/SensitivityValue
struct SensitivityValue_t59ADBEBA884523FFE4C7635C584592B8E15787C5  : public RuntimeObject
{
public:

public:
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Double>
struct Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// IBM.Cloud.SDK.DataTypes.AudioData
struct AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E  : public Data_t05E96B30833A0B1AA40A8B45C98120056D5EF9DC
{
public:
	// UnityEngine.AudioClip IBM.Cloud.SDK.DataTypes.AudioData::<Clip>k__BackingField
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CClipU3Ek__BackingField_0;
	// System.Single IBM.Cloud.SDK.DataTypes.AudioData::<MaxLevel>k__BackingField
	float ___U3CMaxLevelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CClipU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E, ___U3CClipU3Ek__BackingField_0)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CClipU3Ek__BackingField_0() const { return ___U3CClipU3Ek__BackingField_0; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CClipU3Ek__BackingField_0() { return &___U3CClipU3Ek__BackingField_0; }
	inline void set_U3CClipU3Ek__BackingField_0(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CClipU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClipU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaxLevelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E, ___U3CMaxLevelU3Ek__BackingField_1)); }
	inline float get_U3CMaxLevelU3Ek__BackingField_1() const { return ___U3CMaxLevelU3Ek__BackingField_1; }
	inline float* get_address_of_U3CMaxLevelU3Ek__BackingField_1() { return &___U3CMaxLevelU3Ek__BackingField_1; }
	inline void set_U3CMaxLevelU3Ek__BackingField_1(float value)
	{
		___U3CMaxLevelU3Ek__BackingField_1 = value;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// IBM.Watson.LanguageTranslator.V3.LanguageTranslatorService
struct LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97  : public BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C
{
public:
	// System.String IBM.Watson.LanguageTranslator.V3.LanguageTranslatorService::version
	String_t* ___version_10;
	// System.Boolean IBM.Watson.LanguageTranslator.V3.LanguageTranslatorService::disableSslVerification
	bool ___disableSslVerification_11;

public:
	inline static int32_t get_offset_of_version_10() { return static_cast<int32_t>(offsetof(LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97, ___version_10)); }
	inline String_t* get_version_10() const { return ___version_10; }
	inline String_t** get_address_of_version_10() { return &___version_10; }
	inline void set_version_10(String_t* value)
	{
		___version_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_10), (void*)value);
	}

	inline static int32_t get_offset_of_disableSslVerification_11() { return static_cast<int32_t>(offsetof(LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97, ___disableSslVerification_11)); }
	inline bool get_disableSslVerification_11() const { return ___disableSslVerification_11; }
	inline bool* get_address_of_disableSslVerification_11() { return &___disableSslVerification_11; }
	inline void set_disableSslVerification_11(bool value)
	{
		___disableSslVerification_11 = value;
	}
};


// IBM.Watson.NaturalLanguageUnderstanding.V1.NaturalLanguageUnderstandingService
struct NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2  : public BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C
{
public:
	// System.String IBM.Watson.NaturalLanguageUnderstanding.V1.NaturalLanguageUnderstandingService::version
	String_t* ___version_10;
	// System.Boolean IBM.Watson.NaturalLanguageUnderstanding.V1.NaturalLanguageUnderstandingService::disableSslVerification
	bool ___disableSslVerification_11;

public:
	inline static int32_t get_offset_of_version_10() { return static_cast<int32_t>(offsetof(NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2, ___version_10)); }
	inline String_t* get_version_10() const { return ___version_10; }
	inline String_t** get_address_of_version_10() { return &___version_10; }
	inline void set_version_10(String_t* value)
	{
		___version_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_10), (void*)value);
	}

	inline static int32_t get_offset_of_disableSslVerification_11() { return static_cast<int32_t>(offsetof(NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2, ___disableSslVerification_11)); }
	inline bool get_disableSslVerification_11() const { return ___disableSslVerification_11; }
	inline bool* get_address_of_disableSslVerification_11() { return &___disableSslVerification_11; }
	inline void set_disableSslVerification_11(bool value)
	{
		___disableSslVerification_11 = value;
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


// IBM.Watson.TextToSpeech.V1.TextToSpeechService
struct TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9  : public BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C
{
public:
	// System.Boolean IBM.Watson.TextToSpeech.V1.TextToSpeechService::disableSslVerification
	bool ___disableSslVerification_10;
	// IBM.Watson.TextToSpeech.V1.TextToSpeechService/OnSynthesize IBM.Watson.TextToSpeech.V1.TextToSpeechService::listenCallback
	OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 * ___listenCallback_11;
	// IBM.Cloud.SDK.Connection.WSConnector IBM.Watson.TextToSpeech.V1.TextToSpeechService::listenSocket
	WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 * ___listenSocket_12;
	// System.Boolean IBM.Watson.TextToSpeech.V1.TextToSpeechService::listenActive
	bool ___listenActive_13;
	// System.Boolean IBM.Watson.TextToSpeech.V1.TextToSpeechService::isListening
	bool ___isListening_14;
	// System.Collections.Generic.Queue`1<System.String> IBM.Watson.TextToSpeech.V1.TextToSpeechService::listenTexts
	Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * ___listenTexts_15;
	// System.String IBM.Watson.TextToSpeech.V1.TextToSpeechService::accept
	String_t* ___accept_16;
	// System.String IBM.Watson.TextToSpeech.V1.TextToSpeechService::voice
	String_t* ___voice_17;
	// System.String IBM.Watson.TextToSpeech.V1.TextToSpeechService::customization_id
	String_t* ___customization_id_18;
	// System.String[] IBM.Watson.TextToSpeech.V1.TextToSpeechService::timings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___timings_19;
	// System.String IBM.Watson.TextToSpeech.V1.TextToSpeechService::url
	String_t* ___url_20;
	// IBM.Watson.TextToSpeech.V1.TextToSpeechService/ErrorEvent IBM.Watson.TextToSpeech.V1.TextToSpeechService::<OnError>k__BackingField
	ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 * ___U3COnErrorU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_disableSslVerification_10() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___disableSslVerification_10)); }
	inline bool get_disableSslVerification_10() const { return ___disableSslVerification_10; }
	inline bool* get_address_of_disableSslVerification_10() { return &___disableSslVerification_10; }
	inline void set_disableSslVerification_10(bool value)
	{
		___disableSslVerification_10 = value;
	}

	inline static int32_t get_offset_of_listenCallback_11() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___listenCallback_11)); }
	inline OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 * get_listenCallback_11() const { return ___listenCallback_11; }
	inline OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 ** get_address_of_listenCallback_11() { return &___listenCallback_11; }
	inline void set_listenCallback_11(OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 * value)
	{
		___listenCallback_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listenCallback_11), (void*)value);
	}

	inline static int32_t get_offset_of_listenSocket_12() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___listenSocket_12)); }
	inline WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 * get_listenSocket_12() const { return ___listenSocket_12; }
	inline WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 ** get_address_of_listenSocket_12() { return &___listenSocket_12; }
	inline void set_listenSocket_12(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 * value)
	{
		___listenSocket_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listenSocket_12), (void*)value);
	}

	inline static int32_t get_offset_of_listenActive_13() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___listenActive_13)); }
	inline bool get_listenActive_13() const { return ___listenActive_13; }
	inline bool* get_address_of_listenActive_13() { return &___listenActive_13; }
	inline void set_listenActive_13(bool value)
	{
		___listenActive_13 = value;
	}

	inline static int32_t get_offset_of_isListening_14() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___isListening_14)); }
	inline bool get_isListening_14() const { return ___isListening_14; }
	inline bool* get_address_of_isListening_14() { return &___isListening_14; }
	inline void set_isListening_14(bool value)
	{
		___isListening_14 = value;
	}

	inline static int32_t get_offset_of_listenTexts_15() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___listenTexts_15)); }
	inline Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * get_listenTexts_15() const { return ___listenTexts_15; }
	inline Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D ** get_address_of_listenTexts_15() { return &___listenTexts_15; }
	inline void set_listenTexts_15(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * value)
	{
		___listenTexts_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listenTexts_15), (void*)value);
	}

	inline static int32_t get_offset_of_accept_16() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___accept_16)); }
	inline String_t* get_accept_16() const { return ___accept_16; }
	inline String_t** get_address_of_accept_16() { return &___accept_16; }
	inline void set_accept_16(String_t* value)
	{
		___accept_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accept_16), (void*)value);
	}

	inline static int32_t get_offset_of_voice_17() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___voice_17)); }
	inline String_t* get_voice_17() const { return ___voice_17; }
	inline String_t** get_address_of_voice_17() { return &___voice_17; }
	inline void set_voice_17(String_t* value)
	{
		___voice_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voice_17), (void*)value);
	}

	inline static int32_t get_offset_of_customization_id_18() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___customization_id_18)); }
	inline String_t* get_customization_id_18() const { return ___customization_id_18; }
	inline String_t** get_address_of_customization_id_18() { return &___customization_id_18; }
	inline void set_customization_id_18(String_t* value)
	{
		___customization_id_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customization_id_18), (void*)value);
	}

	inline static int32_t get_offset_of_timings_19() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___timings_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_timings_19() const { return ___timings_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_timings_19() { return &___timings_19; }
	inline void set_timings_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___timings_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timings_19), (void*)value);
	}

	inline static int32_t get_offset_of_url_20() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___url_20)); }
	inline String_t* get_url_20() const { return ___url_20; }
	inline String_t** get_address_of_url_20() { return &___url_20; }
	inline void set_url_20(String_t* value)
	{
		___url_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnErrorU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9, ___U3COnErrorU3Ek__BackingField_21)); }
	inline ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 * get_U3COnErrorU3Ek__BackingField_21() const { return ___U3COnErrorU3Ek__BackingField_21; }
	inline ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 ** get_address_of_U3COnErrorU3Ek__BackingField_21() { return &___U3COnErrorU3Ek__BackingField_21; }
	inline void set_U3COnErrorU3Ek__BackingField_21(ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 * value)
	{
		___U3COnErrorU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnErrorU3Ek__BackingField_21), (void*)value);
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

// IBM.Cloud.SDK.Connection.WSConnector/BinaryMessage
struct BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B  : public Message_t2184A9CCBB52B60EECA24C5579BB4D5A16019E7E
{
public:
	// System.Byte[] IBM.Cloud.SDK.Connection.WSConnector/BinaryMessage::<Data>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CDataU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> IBM.Cloud.SDK.Connection.WSConnector/BinaryMessage::<Headers>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CHeadersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B, ___U3CDataU3Ek__BackingField_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CDataU3Ek__BackingField_0() const { return ___U3CDataU3Ek__BackingField_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CDataU3Ek__BackingField_0() { return &___U3CDataU3Ek__BackingField_0; }
	inline void set_U3CDataU3Ek__BackingField_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CDataU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B, ___U3CHeadersU3Ek__BackingField_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CHeadersU3Ek__BackingField_1() const { return ___U3CHeadersU3Ek__BackingField_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CHeadersU3Ek__BackingField_1() { return &___U3CHeadersU3Ek__BackingField_1; }
	inline void set_U3CHeadersU3Ek__BackingField_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CHeadersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.AudioDataLoadState
struct AudioDataLoadState_t62C0FB585B1551A3E0955473C4394FE41B0B868D 
{
public:
	// System.Int32 UnityEngine.AudioDataLoadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioDataLoadState_t62C0FB585B1551A3E0955473C4394FE41B0B868D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator
struct IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B  : public Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA
{
public:
	// System.String IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator::<Apikey>k__BackingField
	String_t* ___U3CApikeyU3Ek__BackingField_19;
	// System.Nullable`1<System.Boolean> IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator::<DisableSslVerification>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CDisableSslVerificationU3Ek__BackingField_20;
	// System.String IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator::<ClientId>k__BackingField
	String_t* ___U3CClientIdU3Ek__BackingField_21;
	// System.String IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator::<ClientSecret>k__BackingField
	String_t* ___U3CClientSecretU3Ek__BackingField_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator::<Headers>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CHeadersU3Ek__BackingField_23;
	// IBM.Cloud.SDK.Authentication.Iam.IamToken IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator::tokenData
	IamToken_t73EE6122768F1FA6C2A6E326523D87F91D8E8ED5 * ___tokenData_24;

public:
	inline static int32_t get_offset_of_U3CApikeyU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B, ___U3CApikeyU3Ek__BackingField_19)); }
	inline String_t* get_U3CApikeyU3Ek__BackingField_19() const { return ___U3CApikeyU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CApikeyU3Ek__BackingField_19() { return &___U3CApikeyU3Ek__BackingField_19; }
	inline void set_U3CApikeyU3Ek__BackingField_19(String_t* value)
	{
		___U3CApikeyU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApikeyU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisableSslVerificationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B, ___U3CDisableSslVerificationU3Ek__BackingField_20)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CDisableSslVerificationU3Ek__BackingField_20() const { return ___U3CDisableSslVerificationU3Ek__BackingField_20; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CDisableSslVerificationU3Ek__BackingField_20() { return &___U3CDisableSslVerificationU3Ek__BackingField_20; }
	inline void set_U3CDisableSslVerificationU3Ek__BackingField_20(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CDisableSslVerificationU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CClientIdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B, ___U3CClientIdU3Ek__BackingField_21)); }
	inline String_t* get_U3CClientIdU3Ek__BackingField_21() const { return ___U3CClientIdU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CClientIdU3Ek__BackingField_21() { return &___U3CClientIdU3Ek__BackingField_21; }
	inline void set_U3CClientIdU3Ek__BackingField_21(String_t* value)
	{
		___U3CClientIdU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientIdU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientSecretU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B, ___U3CClientSecretU3Ek__BackingField_22)); }
	inline String_t* get_U3CClientSecretU3Ek__BackingField_22() const { return ___U3CClientSecretU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CClientSecretU3Ek__BackingField_22() { return &___U3CClientSecretU3Ek__BackingField_22; }
	inline void set_U3CClientSecretU3Ek__BackingField_22(String_t* value)
	{
		___U3CClientSecretU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientSecretU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B, ___U3CHeadersU3Ek__BackingField_23)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CHeadersU3Ek__BackingField_23() const { return ___U3CHeadersU3Ek__BackingField_23; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CHeadersU3Ek__BackingField_23() { return &___U3CHeadersU3Ek__BackingField_23; }
	inline void set_U3CHeadersU3Ek__BackingField_23(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CHeadersU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_tokenData_24() { return static_cast<int32_t>(offsetof(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B, ___tokenData_24)); }
	inline IamToken_t73EE6122768F1FA6C2A6E326523D87F91D8E8ED5 * get_tokenData_24() const { return ___tokenData_24; }
	inline IamToken_t73EE6122768F1FA6C2A6E326523D87F91D8E8ED5 ** get_address_of_tokenData_24() { return &___tokenData_24; }
	inline void set_tokenData_24(IamToken_t73EE6122768F1FA6C2A6E326523D87F91D8E8ED5 * value)
	{
		___tokenData_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenData_24), (void*)value);
	}
};


// IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions
struct KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD  : public RuntimeObject
{
public:
	// System.Nullable`1<System.Int64> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions::<Limit>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CLimitU3Ek__BackingField_0;
	// System.Nullable`1<System.Boolean> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions::<Sentiment>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CSentimentU3Ek__BackingField_1;
	// System.Nullable`1<System.Boolean> IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions::<Emotion>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CEmotionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CLimitU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD, ___U3CLimitU3Ek__BackingField_0)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CLimitU3Ek__BackingField_0() const { return ___U3CLimitU3Ek__BackingField_0; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CLimitU3Ek__BackingField_0() { return &___U3CLimitU3Ek__BackingField_0; }
	inline void set_U3CLimitU3Ek__BackingField_0(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CLimitU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSentimentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD, ___U3CSentimentU3Ek__BackingField_1)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CSentimentU3Ek__BackingField_1() const { return ___U3CSentimentU3Ek__BackingField_1; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CSentimentU3Ek__BackingField_1() { return &___U3CSentimentU3Ek__BackingField_1; }
	inline void set_U3CSentimentU3Ek__BackingField_1(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CSentimentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CEmotionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD, ___U3CEmotionU3Ek__BackingField_2)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CEmotionU3Ek__BackingField_2() const { return ___U3CEmotionU3Ek__BackingField_2; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CEmotionU3Ek__BackingField_2() { return &___U3CEmotionU3Ek__BackingField_2; }
	inline void set_U3CEmotionU3Ek__BackingField_2(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CEmotionU3Ek__BackingField_2 = value;
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

// IBM.Watson.SpeechToText.V1.SpeechToTextService
struct SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2  : public BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C
{
public:
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::disableSslVerification
	bool ___disableSslVerification_10;
	// IBM.Watson.SpeechToText.V1.SpeechToTextService/LoadFileDelegate IBM.Watson.SpeechToText.V1.SpeechToTextService::<LoadFile>k__BackingField
	LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 * ___U3CLoadFileU3Ek__BackingField_15;
	// IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognize IBM.Watson.SpeechToText.V1.SpeechToTextService::_listenCallback
	OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C * ____listenCallback_16;
	// IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognizeSpeaker IBM.Watson.SpeechToText.V1.SpeechToTextService::_speakerLabelCallback
	OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F * ____speakerLabelCallback_17;
	// IBM.Cloud.SDK.Connection.WSConnector IBM.Watson.SpeechToText.V1.SpeechToTextService::_listenSocket
	WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 * ____listenSocket_18;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_listenActive
	bool ____listenActive_19;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_audioSent
	bool ____audioSent_20;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_isListening
	bool ____isListening_21;
	// System.Collections.Generic.Queue`1<IBM.Cloud.SDK.DataTypes.AudioData> IBM.Watson.SpeechToText.V1.SpeechToTextService::_listenRecordings
	Queue_1_t954AE8CB97EE0665F8F64098EDBAD77A63BE4FDD * ____listenRecordings_22;
	// System.Int32 IBM.Watson.SpeechToText.V1.SpeechToTextService::_keepAliveRoutine
	int32_t ____keepAliveRoutine_23;
	// System.DateTime IBM.Watson.SpeechToText.V1.SpeechToTextService::_lastKeepAlive
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____lastKeepAlive_24;
	// System.DateTime IBM.Watson.SpeechToText.V1.SpeechToTextService::_lastStartSent
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____lastStartSent_25;
	// System.String IBM.Watson.SpeechToText.V1.SpeechToTextService::_recognizeModel
	String_t* ____recognizeModel_26;
	// System.Int32 IBM.Watson.SpeechToText.V1.SpeechToTextService::_maxAlternatives
	int32_t ____maxAlternatives_27;
	// System.String[] IBM.Watson.SpeechToText.V1.SpeechToTextService::_keywords
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____keywords_28;
	// System.Nullable`1<System.Single> IBM.Watson.SpeechToText.V1.SpeechToTextService::_keywordsThreshold
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ____keywordsThreshold_29;
	// System.Nullable`1<System.Single> IBM.Watson.SpeechToText.V1.SpeechToTextService::_wordAlternativesThreshold
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ____wordAlternativesThreshold_30;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_profanityFilter
	bool ____profanityFilter_31;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_smartFormatting
	bool ____smartFormatting_32;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_speakerLabels
	bool ____speakerLabels_33;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_timestamps
	bool ____timestamps_34;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_wordConfidence
	bool ____wordConfidence_35;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_detectSilence
	bool ____detectSilence_36;
	// System.Single IBM.Watson.SpeechToText.V1.SpeechToTextService::_silenceThreshold
	float ____silenceThreshold_37;
	// System.Int32 IBM.Watson.SpeechToText.V1.SpeechToTextService::_recordingHZ
	int32_t ____recordingHZ_38;
	// System.Int32 IBM.Watson.SpeechToText.V1.SpeechToTextService::_inactivityTimeout
	int32_t ____inactivityTimeout_39;
	// System.String IBM.Watson.SpeechToText.V1.SpeechToTextService::_customization_id
	String_t* ____customization_id_40;
	// System.String IBM.Watson.SpeechToText.V1.SpeechToTextService::_languageCustomizationId
	String_t* ____languageCustomizationId_41;
	// System.String IBM.Watson.SpeechToText.V1.SpeechToTextService::_acoustic_customization_id
	String_t* ____acoustic_customization_id_42;
	// System.Nullable`1<System.Single> IBM.Watson.SpeechToText.V1.SpeechToTextService::_customization_weight
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ____customization_weight_43;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::_streamMultipart
	bool ____streamMultipart_44;
	// System.Single IBM.Watson.SpeechToText.V1.SpeechToTextService::_silenceDuration
	float ____silenceDuration_45;
	// System.Single IBM.Watson.SpeechToText.V1.SpeechToTextService::_silenceCutoff
	float ____silenceCutoff_46;
	// System.String IBM.Watson.SpeechToText.V1.SpeechToTextService::_url
	String_t* ____url_47;
	// IBM.Watson.SpeechToText.V1.SpeechToTextService/ErrorEvent IBM.Watson.SpeechToText.V1.SpeechToTextService::<OnError>k__BackingField
	ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 * ___U3COnErrorU3Ek__BackingField_48;
	// System.Nullable`1<System.Boolean> IBM.Watson.SpeechToText.V1.SpeechToTextService::<EnableInterimResults>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CEnableInterimResultsU3Ek__BackingField_49;
	// System.String IBM.Watson.SpeechToText.V1.SpeechToTextService::<GrammarName>k__BackingField
	String_t* ___U3CGrammarNameU3Ek__BackingField_50;
	// System.String IBM.Watson.SpeechToText.V1.SpeechToTextService::<Redaction>k__BackingField
	String_t* ___U3CRedactionU3Ek__BackingField_51;
	// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::<ProcessingMetrics>k__BackingField
	bool ___U3CProcessingMetricsU3Ek__BackingField_52;
	// System.Nullable`1<System.Single> IBM.Watson.SpeechToText.V1.SpeechToTextService::<ProcessingMetricsInterval>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CProcessingMetricsIntervalU3Ek__BackingField_53;
	// System.Nullable`1<System.Double> IBM.Watson.SpeechToText.V1.SpeechToTextService::<EndOfPhraseSilenceTime>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CEndOfPhraseSilenceTimeU3Ek__BackingField_54;
	// System.Nullable`1<System.Boolean> IBM.Watson.SpeechToText.V1.SpeechToTextService::<SplitTranscriptAtPhraseEnd>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CSplitTranscriptAtPhraseEndU3Ek__BackingField_55;
	// System.Nullable`1<System.Single> IBM.Watson.SpeechToText.V1.SpeechToTextService::<SpeechDetectorSensitivity>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CSpeechDetectorSensitivityU3Ek__BackingField_56;
	// System.Nullable`1<System.Single> IBM.Watson.SpeechToText.V1.SpeechToTextService::<BackgroundAudioSuppression>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CBackgroundAudioSuppressionU3Ek__BackingField_57;

public:
	inline static int32_t get_offset_of_disableSslVerification_10() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___disableSslVerification_10)); }
	inline bool get_disableSslVerification_10() const { return ___disableSslVerification_10; }
	inline bool* get_address_of_disableSslVerification_10() { return &___disableSslVerification_10; }
	inline void set_disableSslVerification_10(bool value)
	{
		___disableSslVerification_10 = value;
	}

	inline static int32_t get_offset_of_U3CLoadFileU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CLoadFileU3Ek__BackingField_15)); }
	inline LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 * get_U3CLoadFileU3Ek__BackingField_15() const { return ___U3CLoadFileU3Ek__BackingField_15; }
	inline LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 ** get_address_of_U3CLoadFileU3Ek__BackingField_15() { return &___U3CLoadFileU3Ek__BackingField_15; }
	inline void set_U3CLoadFileU3Ek__BackingField_15(LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 * value)
	{
		___U3CLoadFileU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadFileU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of__listenCallback_16() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____listenCallback_16)); }
	inline OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C * get__listenCallback_16() const { return ____listenCallback_16; }
	inline OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C ** get_address_of__listenCallback_16() { return &____listenCallback_16; }
	inline void set__listenCallback_16(OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C * value)
	{
		____listenCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listenCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of__speakerLabelCallback_17() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____speakerLabelCallback_17)); }
	inline OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F * get__speakerLabelCallback_17() const { return ____speakerLabelCallback_17; }
	inline OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F ** get_address_of__speakerLabelCallback_17() { return &____speakerLabelCallback_17; }
	inline void set__speakerLabelCallback_17(OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F * value)
	{
		____speakerLabelCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____speakerLabelCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of__listenSocket_18() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____listenSocket_18)); }
	inline WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 * get__listenSocket_18() const { return ____listenSocket_18; }
	inline WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 ** get_address_of__listenSocket_18() { return &____listenSocket_18; }
	inline void set__listenSocket_18(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 * value)
	{
		____listenSocket_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listenSocket_18), (void*)value);
	}

	inline static int32_t get_offset_of__listenActive_19() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____listenActive_19)); }
	inline bool get__listenActive_19() const { return ____listenActive_19; }
	inline bool* get_address_of__listenActive_19() { return &____listenActive_19; }
	inline void set__listenActive_19(bool value)
	{
		____listenActive_19 = value;
	}

	inline static int32_t get_offset_of__audioSent_20() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____audioSent_20)); }
	inline bool get__audioSent_20() const { return ____audioSent_20; }
	inline bool* get_address_of__audioSent_20() { return &____audioSent_20; }
	inline void set__audioSent_20(bool value)
	{
		____audioSent_20 = value;
	}

	inline static int32_t get_offset_of__isListening_21() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____isListening_21)); }
	inline bool get__isListening_21() const { return ____isListening_21; }
	inline bool* get_address_of__isListening_21() { return &____isListening_21; }
	inline void set__isListening_21(bool value)
	{
		____isListening_21 = value;
	}

	inline static int32_t get_offset_of__listenRecordings_22() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____listenRecordings_22)); }
	inline Queue_1_t954AE8CB97EE0665F8F64098EDBAD77A63BE4FDD * get__listenRecordings_22() const { return ____listenRecordings_22; }
	inline Queue_1_t954AE8CB97EE0665F8F64098EDBAD77A63BE4FDD ** get_address_of__listenRecordings_22() { return &____listenRecordings_22; }
	inline void set__listenRecordings_22(Queue_1_t954AE8CB97EE0665F8F64098EDBAD77A63BE4FDD * value)
	{
		____listenRecordings_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listenRecordings_22), (void*)value);
	}

	inline static int32_t get_offset_of__keepAliveRoutine_23() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____keepAliveRoutine_23)); }
	inline int32_t get__keepAliveRoutine_23() const { return ____keepAliveRoutine_23; }
	inline int32_t* get_address_of__keepAliveRoutine_23() { return &____keepAliveRoutine_23; }
	inline void set__keepAliveRoutine_23(int32_t value)
	{
		____keepAliveRoutine_23 = value;
	}

	inline static int32_t get_offset_of__lastKeepAlive_24() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____lastKeepAlive_24)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__lastKeepAlive_24() const { return ____lastKeepAlive_24; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__lastKeepAlive_24() { return &____lastKeepAlive_24; }
	inline void set__lastKeepAlive_24(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____lastKeepAlive_24 = value;
	}

	inline static int32_t get_offset_of__lastStartSent_25() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____lastStartSent_25)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__lastStartSent_25() const { return ____lastStartSent_25; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__lastStartSent_25() { return &____lastStartSent_25; }
	inline void set__lastStartSent_25(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____lastStartSent_25 = value;
	}

	inline static int32_t get_offset_of__recognizeModel_26() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____recognizeModel_26)); }
	inline String_t* get__recognizeModel_26() const { return ____recognizeModel_26; }
	inline String_t** get_address_of__recognizeModel_26() { return &____recognizeModel_26; }
	inline void set__recognizeModel_26(String_t* value)
	{
		____recognizeModel_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recognizeModel_26), (void*)value);
	}

	inline static int32_t get_offset_of__maxAlternatives_27() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____maxAlternatives_27)); }
	inline int32_t get__maxAlternatives_27() const { return ____maxAlternatives_27; }
	inline int32_t* get_address_of__maxAlternatives_27() { return &____maxAlternatives_27; }
	inline void set__maxAlternatives_27(int32_t value)
	{
		____maxAlternatives_27 = value;
	}

	inline static int32_t get_offset_of__keywords_28() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____keywords_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__keywords_28() const { return ____keywords_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__keywords_28() { return &____keywords_28; }
	inline void set__keywords_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____keywords_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keywords_28), (void*)value);
	}

	inline static int32_t get_offset_of__keywordsThreshold_29() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____keywordsThreshold_29)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get__keywordsThreshold_29() const { return ____keywordsThreshold_29; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of__keywordsThreshold_29() { return &____keywordsThreshold_29; }
	inline void set__keywordsThreshold_29(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		____keywordsThreshold_29 = value;
	}

	inline static int32_t get_offset_of__wordAlternativesThreshold_30() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____wordAlternativesThreshold_30)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get__wordAlternativesThreshold_30() const { return ____wordAlternativesThreshold_30; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of__wordAlternativesThreshold_30() { return &____wordAlternativesThreshold_30; }
	inline void set__wordAlternativesThreshold_30(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		____wordAlternativesThreshold_30 = value;
	}

	inline static int32_t get_offset_of__profanityFilter_31() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____profanityFilter_31)); }
	inline bool get__profanityFilter_31() const { return ____profanityFilter_31; }
	inline bool* get_address_of__profanityFilter_31() { return &____profanityFilter_31; }
	inline void set__profanityFilter_31(bool value)
	{
		____profanityFilter_31 = value;
	}

	inline static int32_t get_offset_of__smartFormatting_32() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____smartFormatting_32)); }
	inline bool get__smartFormatting_32() const { return ____smartFormatting_32; }
	inline bool* get_address_of__smartFormatting_32() { return &____smartFormatting_32; }
	inline void set__smartFormatting_32(bool value)
	{
		____smartFormatting_32 = value;
	}

	inline static int32_t get_offset_of__speakerLabels_33() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____speakerLabels_33)); }
	inline bool get__speakerLabels_33() const { return ____speakerLabels_33; }
	inline bool* get_address_of__speakerLabels_33() { return &____speakerLabels_33; }
	inline void set__speakerLabels_33(bool value)
	{
		____speakerLabels_33 = value;
	}

	inline static int32_t get_offset_of__timestamps_34() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____timestamps_34)); }
	inline bool get__timestamps_34() const { return ____timestamps_34; }
	inline bool* get_address_of__timestamps_34() { return &____timestamps_34; }
	inline void set__timestamps_34(bool value)
	{
		____timestamps_34 = value;
	}

	inline static int32_t get_offset_of__wordConfidence_35() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____wordConfidence_35)); }
	inline bool get__wordConfidence_35() const { return ____wordConfidence_35; }
	inline bool* get_address_of__wordConfidence_35() { return &____wordConfidence_35; }
	inline void set__wordConfidence_35(bool value)
	{
		____wordConfidence_35 = value;
	}

	inline static int32_t get_offset_of__detectSilence_36() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____detectSilence_36)); }
	inline bool get__detectSilence_36() const { return ____detectSilence_36; }
	inline bool* get_address_of__detectSilence_36() { return &____detectSilence_36; }
	inline void set__detectSilence_36(bool value)
	{
		____detectSilence_36 = value;
	}

	inline static int32_t get_offset_of__silenceThreshold_37() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____silenceThreshold_37)); }
	inline float get__silenceThreshold_37() const { return ____silenceThreshold_37; }
	inline float* get_address_of__silenceThreshold_37() { return &____silenceThreshold_37; }
	inline void set__silenceThreshold_37(float value)
	{
		____silenceThreshold_37 = value;
	}

	inline static int32_t get_offset_of__recordingHZ_38() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____recordingHZ_38)); }
	inline int32_t get__recordingHZ_38() const { return ____recordingHZ_38; }
	inline int32_t* get_address_of__recordingHZ_38() { return &____recordingHZ_38; }
	inline void set__recordingHZ_38(int32_t value)
	{
		____recordingHZ_38 = value;
	}

	inline static int32_t get_offset_of__inactivityTimeout_39() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____inactivityTimeout_39)); }
	inline int32_t get__inactivityTimeout_39() const { return ____inactivityTimeout_39; }
	inline int32_t* get_address_of__inactivityTimeout_39() { return &____inactivityTimeout_39; }
	inline void set__inactivityTimeout_39(int32_t value)
	{
		____inactivityTimeout_39 = value;
	}

	inline static int32_t get_offset_of__customization_id_40() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____customization_id_40)); }
	inline String_t* get__customization_id_40() const { return ____customization_id_40; }
	inline String_t** get_address_of__customization_id_40() { return &____customization_id_40; }
	inline void set__customization_id_40(String_t* value)
	{
		____customization_id_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____customization_id_40), (void*)value);
	}

	inline static int32_t get_offset_of__languageCustomizationId_41() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____languageCustomizationId_41)); }
	inline String_t* get__languageCustomizationId_41() const { return ____languageCustomizationId_41; }
	inline String_t** get_address_of__languageCustomizationId_41() { return &____languageCustomizationId_41; }
	inline void set__languageCustomizationId_41(String_t* value)
	{
		____languageCustomizationId_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____languageCustomizationId_41), (void*)value);
	}

	inline static int32_t get_offset_of__acoustic_customization_id_42() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____acoustic_customization_id_42)); }
	inline String_t* get__acoustic_customization_id_42() const { return ____acoustic_customization_id_42; }
	inline String_t** get_address_of__acoustic_customization_id_42() { return &____acoustic_customization_id_42; }
	inline void set__acoustic_customization_id_42(String_t* value)
	{
		____acoustic_customization_id_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____acoustic_customization_id_42), (void*)value);
	}

	inline static int32_t get_offset_of__customization_weight_43() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____customization_weight_43)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get__customization_weight_43() const { return ____customization_weight_43; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of__customization_weight_43() { return &____customization_weight_43; }
	inline void set__customization_weight_43(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		____customization_weight_43 = value;
	}

	inline static int32_t get_offset_of__streamMultipart_44() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____streamMultipart_44)); }
	inline bool get__streamMultipart_44() const { return ____streamMultipart_44; }
	inline bool* get_address_of__streamMultipart_44() { return &____streamMultipart_44; }
	inline void set__streamMultipart_44(bool value)
	{
		____streamMultipart_44 = value;
	}

	inline static int32_t get_offset_of__silenceDuration_45() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____silenceDuration_45)); }
	inline float get__silenceDuration_45() const { return ____silenceDuration_45; }
	inline float* get_address_of__silenceDuration_45() { return &____silenceDuration_45; }
	inline void set__silenceDuration_45(float value)
	{
		____silenceDuration_45 = value;
	}

	inline static int32_t get_offset_of__silenceCutoff_46() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____silenceCutoff_46)); }
	inline float get__silenceCutoff_46() const { return ____silenceCutoff_46; }
	inline float* get_address_of__silenceCutoff_46() { return &____silenceCutoff_46; }
	inline void set__silenceCutoff_46(float value)
	{
		____silenceCutoff_46 = value;
	}

	inline static int32_t get_offset_of__url_47() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ____url_47)); }
	inline String_t* get__url_47() const { return ____url_47; }
	inline String_t** get_address_of__url_47() { return &____url_47; }
	inline void set__url_47(String_t* value)
	{
		____url_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____url_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnErrorU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3COnErrorU3Ek__BackingField_48)); }
	inline ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 * get_U3COnErrorU3Ek__BackingField_48() const { return ___U3COnErrorU3Ek__BackingField_48; }
	inline ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 ** get_address_of_U3COnErrorU3Ek__BackingField_48() { return &___U3COnErrorU3Ek__BackingField_48; }
	inline void set_U3COnErrorU3Ek__BackingField_48(ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 * value)
	{
		___U3COnErrorU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnErrorU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableInterimResultsU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CEnableInterimResultsU3Ek__BackingField_49)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CEnableInterimResultsU3Ek__BackingField_49() const { return ___U3CEnableInterimResultsU3Ek__BackingField_49; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CEnableInterimResultsU3Ek__BackingField_49() { return &___U3CEnableInterimResultsU3Ek__BackingField_49; }
	inline void set_U3CEnableInterimResultsU3Ek__BackingField_49(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CEnableInterimResultsU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_U3CGrammarNameU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CGrammarNameU3Ek__BackingField_50)); }
	inline String_t* get_U3CGrammarNameU3Ek__BackingField_50() const { return ___U3CGrammarNameU3Ek__BackingField_50; }
	inline String_t** get_address_of_U3CGrammarNameU3Ek__BackingField_50() { return &___U3CGrammarNameU3Ek__BackingField_50; }
	inline void set_U3CGrammarNameU3Ek__BackingField_50(String_t* value)
	{
		___U3CGrammarNameU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGrammarNameU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRedactionU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CRedactionU3Ek__BackingField_51)); }
	inline String_t* get_U3CRedactionU3Ek__BackingField_51() const { return ___U3CRedactionU3Ek__BackingField_51; }
	inline String_t** get_address_of_U3CRedactionU3Ek__BackingField_51() { return &___U3CRedactionU3Ek__BackingField_51; }
	inline void set_U3CRedactionU3Ek__BackingField_51(String_t* value)
	{
		___U3CRedactionU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRedactionU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProcessingMetricsU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CProcessingMetricsU3Ek__BackingField_52)); }
	inline bool get_U3CProcessingMetricsU3Ek__BackingField_52() const { return ___U3CProcessingMetricsU3Ek__BackingField_52; }
	inline bool* get_address_of_U3CProcessingMetricsU3Ek__BackingField_52() { return &___U3CProcessingMetricsU3Ek__BackingField_52; }
	inline void set_U3CProcessingMetricsU3Ek__BackingField_52(bool value)
	{
		___U3CProcessingMetricsU3Ek__BackingField_52 = value;
	}

	inline static int32_t get_offset_of_U3CProcessingMetricsIntervalU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CProcessingMetricsIntervalU3Ek__BackingField_53)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CProcessingMetricsIntervalU3Ek__BackingField_53() const { return ___U3CProcessingMetricsIntervalU3Ek__BackingField_53; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CProcessingMetricsIntervalU3Ek__BackingField_53() { return &___U3CProcessingMetricsIntervalU3Ek__BackingField_53; }
	inline void set_U3CProcessingMetricsIntervalU3Ek__BackingField_53(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CProcessingMetricsIntervalU3Ek__BackingField_53 = value;
	}

	inline static int32_t get_offset_of_U3CEndOfPhraseSilenceTimeU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CEndOfPhraseSilenceTimeU3Ek__BackingField_54)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CEndOfPhraseSilenceTimeU3Ek__BackingField_54() const { return ___U3CEndOfPhraseSilenceTimeU3Ek__BackingField_54; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CEndOfPhraseSilenceTimeU3Ek__BackingField_54() { return &___U3CEndOfPhraseSilenceTimeU3Ek__BackingField_54; }
	inline void set_U3CEndOfPhraseSilenceTimeU3Ek__BackingField_54(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CEndOfPhraseSilenceTimeU3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_U3CSplitTranscriptAtPhraseEndU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CSplitTranscriptAtPhraseEndU3Ek__BackingField_55)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CSplitTranscriptAtPhraseEndU3Ek__BackingField_55() const { return ___U3CSplitTranscriptAtPhraseEndU3Ek__BackingField_55; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CSplitTranscriptAtPhraseEndU3Ek__BackingField_55() { return &___U3CSplitTranscriptAtPhraseEndU3Ek__BackingField_55; }
	inline void set_U3CSplitTranscriptAtPhraseEndU3Ek__BackingField_55(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CSplitTranscriptAtPhraseEndU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CSpeechDetectorSensitivityU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CSpeechDetectorSensitivityU3Ek__BackingField_56)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CSpeechDetectorSensitivityU3Ek__BackingField_56() const { return ___U3CSpeechDetectorSensitivityU3Ek__BackingField_56; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CSpeechDetectorSensitivityU3Ek__BackingField_56() { return &___U3CSpeechDetectorSensitivityU3Ek__BackingField_56; }
	inline void set_U3CSpeechDetectorSensitivityU3Ek__BackingField_56(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CSpeechDetectorSensitivityU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CBackgroundAudioSuppressionU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2, ___U3CBackgroundAudioSuppressionU3Ek__BackingField_57)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CBackgroundAudioSuppressionU3Ek__BackingField_57() const { return ___U3CBackgroundAudioSuppressionU3Ek__BackingField_57; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CBackgroundAudioSuppressionU3Ek__BackingField_57() { return &___U3CBackgroundAudioSuppressionU3Ek__BackingField_57; }
	inline void set_U3CBackgroundAudioSuppressionU3Ek__BackingField_57(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CBackgroundAudioSuppressionU3Ek__BackingField_57 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// IBM.Cloud.SDK.Connection.WSConnector/ConnectionState
struct ConnectionState_t3497ECAC082B64E9F41D0DF7157473B6A28E91B5 
{
public:
	// System.Int32 IBM.Cloud.SDK.Connection.WSConnector/ConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionState_t3497ECAC082B64E9F41D0DF7157473B6A28E91B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// IBM.Cloud.SDK.Utilities.IBMException
struct IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387  : public Exception_t
{
public:

public:
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// IBM.Cloud.SDK.Connection.WSConnector
struct WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122  : public RuntimeObject
{
public:
	// IBM.Cloud.SDK.Connection.WSConnector/ConnectorEvent IBM.Cloud.SDK.Connection.WSConnector::<OnClose>k__BackingField
	ConnectorEvent_t62A57A0F9FAD94CDE5F2E95469DBFAA2DE4AE544 * ___U3COnCloseU3Ek__BackingField_1;
	// IBM.Cloud.SDK.Connection.WSConnector/MessageEvent IBM.Cloud.SDK.Connection.WSConnector::<OnMessage>k__BackingField
	MessageEvent_t10AEB6F566BB16FD51A30A69B082CA9321B9A51D * ___U3COnMessageU3Ek__BackingField_2;
	// System.String IBM.Cloud.SDK.Connection.WSConnector::<URL>k__BackingField
	String_t* ___U3CURLU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> IBM.Cloud.SDK.Connection.WSConnector::_headers
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ____headers_4;
	// IBM.Cloud.SDK.Authentication.Authenticator IBM.Cloud.SDK.Connection.WSConnector::<Authentication>k__BackingField
	Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA * ___U3CAuthenticationU3Ek__BackingField_5;
	// System.Boolean IBM.Cloud.SDK.Connection.WSConnector::disableSslVerification
	bool ___disableSslVerification_6;
	// IBM.Cloud.SDK.Connection.WSConnector/ConnectionState IBM.Cloud.SDK.Connection.WSConnector::_connectionState
	int32_t ____connectionState_7;
	// System.Threading.Thread IBM.Cloud.SDK.Connection.WSConnector::_sendThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____sendThread_8;
	// System.Threading.AutoResetEvent IBM.Cloud.SDK.Connection.WSConnector::_sendEvent
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ____sendEvent_9;
	// System.Collections.Generic.Queue`1<IBM.Cloud.SDK.Connection.WSConnector/Message> IBM.Cloud.SDK.Connection.WSConnector::_sendQueue
	Queue_1_tDB0B2ABEE1C6130BBC07C1BD02952AE411152BD1 * ____sendQueue_10;
	// System.Threading.AutoResetEvent IBM.Cloud.SDK.Connection.WSConnector::_receiveEvent
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ____receiveEvent_11;
	// System.Collections.Generic.Queue`1<IBM.Cloud.SDK.Connection.WSConnector/Message> IBM.Cloud.SDK.Connection.WSConnector::_receiveQueue
	Queue_1_tDB0B2ABEE1C6130BBC07C1BD02952AE411152BD1 * ____receiveQueue_12;
	// System.Int32 IBM.Cloud.SDK.Connection.WSConnector::_receiverRoutine
	int32_t ____receiverRoutine_13;

public:
	inline static int32_t get_offset_of_U3COnCloseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ___U3COnCloseU3Ek__BackingField_1)); }
	inline ConnectorEvent_t62A57A0F9FAD94CDE5F2E95469DBFAA2DE4AE544 * get_U3COnCloseU3Ek__BackingField_1() const { return ___U3COnCloseU3Ek__BackingField_1; }
	inline ConnectorEvent_t62A57A0F9FAD94CDE5F2E95469DBFAA2DE4AE544 ** get_address_of_U3COnCloseU3Ek__BackingField_1() { return &___U3COnCloseU3Ek__BackingField_1; }
	inline void set_U3COnCloseU3Ek__BackingField_1(ConnectorEvent_t62A57A0F9FAD94CDE5F2E95469DBFAA2DE4AE544 * value)
	{
		___U3COnCloseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnCloseU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ___U3COnMessageU3Ek__BackingField_2)); }
	inline MessageEvent_t10AEB6F566BB16FD51A30A69B082CA9321B9A51D * get_U3COnMessageU3Ek__BackingField_2() const { return ___U3COnMessageU3Ek__BackingField_2; }
	inline MessageEvent_t10AEB6F566BB16FD51A30A69B082CA9321B9A51D ** get_address_of_U3COnMessageU3Ek__BackingField_2() { return &___U3COnMessageU3Ek__BackingField_2; }
	inline void set_U3COnMessageU3Ek__BackingField_2(MessageEvent_t10AEB6F566BB16FD51A30A69B082CA9321B9A51D * value)
	{
		___U3COnMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnMessageU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CURLU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ___U3CURLU3Ek__BackingField_3)); }
	inline String_t* get_U3CURLU3Ek__BackingField_3() const { return ___U3CURLU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CURLU3Ek__BackingField_3() { return &___U3CURLU3Ek__BackingField_3; }
	inline void set_U3CURLU3Ek__BackingField_3(String_t* value)
	{
		___U3CURLU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CURLU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of__headers_4() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ____headers_4)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get__headers_4() const { return ____headers_4; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of__headers_4() { return &____headers_4; }
	inline void set__headers_4(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		____headers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____headers_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthenticationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ___U3CAuthenticationU3Ek__BackingField_5)); }
	inline Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA * get_U3CAuthenticationU3Ek__BackingField_5() const { return ___U3CAuthenticationU3Ek__BackingField_5; }
	inline Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA ** get_address_of_U3CAuthenticationU3Ek__BackingField_5() { return &___U3CAuthenticationU3Ek__BackingField_5; }
	inline void set_U3CAuthenticationU3Ek__BackingField_5(Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA * value)
	{
		___U3CAuthenticationU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthenticationU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_disableSslVerification_6() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ___disableSslVerification_6)); }
	inline bool get_disableSslVerification_6() const { return ___disableSslVerification_6; }
	inline bool* get_address_of_disableSslVerification_6() { return &___disableSslVerification_6; }
	inline void set_disableSslVerification_6(bool value)
	{
		___disableSslVerification_6 = value;
	}

	inline static int32_t get_offset_of__connectionState_7() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ____connectionState_7)); }
	inline int32_t get__connectionState_7() const { return ____connectionState_7; }
	inline int32_t* get_address_of__connectionState_7() { return &____connectionState_7; }
	inline void set__connectionState_7(int32_t value)
	{
		____connectionState_7 = value;
	}

	inline static int32_t get_offset_of__sendThread_8() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ____sendThread_8)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get__sendThread_8() const { return ____sendThread_8; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of__sendThread_8() { return &____sendThread_8; }
	inline void set__sendThread_8(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		____sendThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendThread_8), (void*)value);
	}

	inline static int32_t get_offset_of__sendEvent_9() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ____sendEvent_9)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get__sendEvent_9() const { return ____sendEvent_9; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of__sendEvent_9() { return &____sendEvent_9; }
	inline void set__sendEvent_9(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		____sendEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of__sendQueue_10() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ____sendQueue_10)); }
	inline Queue_1_tDB0B2ABEE1C6130BBC07C1BD02952AE411152BD1 * get__sendQueue_10() const { return ____sendQueue_10; }
	inline Queue_1_tDB0B2ABEE1C6130BBC07C1BD02952AE411152BD1 ** get_address_of__sendQueue_10() { return &____sendQueue_10; }
	inline void set__sendQueue_10(Queue_1_tDB0B2ABEE1C6130BBC07C1BD02952AE411152BD1 * value)
	{
		____sendQueue_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendQueue_10), (void*)value);
	}

	inline static int32_t get_offset_of__receiveEvent_11() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ____receiveEvent_11)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get__receiveEvent_11() const { return ____receiveEvent_11; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of__receiveEvent_11() { return &____receiveEvent_11; }
	inline void set__receiveEvent_11(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		____receiveEvent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receiveEvent_11), (void*)value);
	}

	inline static int32_t get_offset_of__receiveQueue_12() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ____receiveQueue_12)); }
	inline Queue_1_tDB0B2ABEE1C6130BBC07C1BD02952AE411152BD1 * get__receiveQueue_12() const { return ____receiveQueue_12; }
	inline Queue_1_tDB0B2ABEE1C6130BBC07C1BD02952AE411152BD1 ** get_address_of__receiveQueue_12() { return &____receiveQueue_12; }
	inline void set__receiveQueue_12(Queue_1_tDB0B2ABEE1C6130BBC07C1BD02952AE411152BD1 * value)
	{
		____receiveQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receiveQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of__receiverRoutine_13() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122, ____receiverRoutine_13)); }
	inline int32_t get__receiverRoutine_13() const { return ____receiverRoutine_13; }
	inline int32_t* get_address_of__receiverRoutine_13() { return &____receiverRoutine_13; }
	inline void set__receiverRoutine_13(int32_t value)
	{
		____receiverRoutine_13 = value;
	}
};

struct WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122_StaticFields
{
public:
	// System.String IBM.Cloud.SDK.Connection.WSConnector::https
	String_t* ___https_14;
	// System.String IBM.Cloud.SDK.Connection.WSConnector::wss
	String_t* ___wss_15;

public:
	inline static int32_t get_offset_of_https_14() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122_StaticFields, ___https_14)); }
	inline String_t* get_https_14() const { return ___https_14; }
	inline String_t** get_address_of_https_14() { return &___https_14; }
	inline void set_https_14(String_t* value)
	{
		___https_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___https_14), (void*)value);
	}

	inline static int32_t get_offset_of_wss_15() { return static_cast<int32_t>(offsetof(WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122_StaticFields, ___wss_15)); }
	inline String_t* get_wss_15() const { return ___wss_15; }
	inline String_t** get_address_of_wss_15() { return &___wss_15; }
	inline void set_wss_15(String_t* value)
	{
		___wss_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wss_15), (void*)value);
	}
};


// IBM.Cloud.SDK.Callback`1<System.Byte[]>
struct Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD  : public MulticastDelegate_t
{
public:

public:
};


// IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults>
struct Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649  : public MulticastDelegate_t
{
public:

public:
};


// IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults>
struct Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90  : public MulticastDelegate_t
{
public:

public:
};


// IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults>
struct Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E  : public MulticastDelegate_t
{
public:

public:
};


// IBM.Cloud.SDK.Callback`1<IBM.Watson.LanguageTranslator.V3.Model.TranslationModels>
struct Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.SpeechToTextService/ErrorEvent
struct ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831  : public MulticastDelegate_t
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.SpeechToTextService/LoadFileDelegate
struct LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92  : public MulticastDelegate_t
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognize
struct OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C  : public MulticastDelegate_t
{
public:

public:
};


// IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognizeSpeaker
struct OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F  : public MulticastDelegate_t
{
public:

public:
};


// IBM.Watson.TextToSpeech.V1.TextToSpeechService/ErrorEvent
struct ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57  : public MulticastDelegate_t
{
public:

public:
};


// IBM.Watson.TextToSpeech.V1.TextToSpeechService/OnSynthesize
struct OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099  : public MulticastDelegate_t
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


// ExampleLanguageTranslatorV3
struct ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String ExampleLanguageTranslatorV3::iamApikey
	String_t* ___iamApikey_4;
	// System.String ExampleLanguageTranslatorV3::serviceUrl
	String_t* ___serviceUrl_5;
	// System.String ExampleLanguageTranslatorV3::versionDate
	String_t* ___versionDate_6;
	// IBM.Watson.LanguageTranslator.V3.LanguageTranslatorService ExampleLanguageTranslatorV3::service
	LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97 * ___service_7;

public:
	inline static int32_t get_offset_of_iamApikey_4() { return static_cast<int32_t>(offsetof(ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30, ___iamApikey_4)); }
	inline String_t* get_iamApikey_4() const { return ___iamApikey_4; }
	inline String_t** get_address_of_iamApikey_4() { return &___iamApikey_4; }
	inline void set_iamApikey_4(String_t* value)
	{
		___iamApikey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iamApikey_4), (void*)value);
	}

	inline static int32_t get_offset_of_serviceUrl_5() { return static_cast<int32_t>(offsetof(ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30, ___serviceUrl_5)); }
	inline String_t* get_serviceUrl_5() const { return ___serviceUrl_5; }
	inline String_t** get_address_of_serviceUrl_5() { return &___serviceUrl_5; }
	inline void set_serviceUrl_5(String_t* value)
	{
		___serviceUrl_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serviceUrl_5), (void*)value);
	}

	inline static int32_t get_offset_of_versionDate_6() { return static_cast<int32_t>(offsetof(ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30, ___versionDate_6)); }
	inline String_t* get_versionDate_6() const { return ___versionDate_6; }
	inline String_t** get_address_of_versionDate_6() { return &___versionDate_6; }
	inline void set_versionDate_6(String_t* value)
	{
		___versionDate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___versionDate_6), (void*)value);
	}

	inline static int32_t get_offset_of_service_7() { return static_cast<int32_t>(offsetof(ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30, ___service_7)); }
	inline LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97 * get_service_7() const { return ___service_7; }
	inline LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97 ** get_address_of_service_7() { return &___service_7; }
	inline void set_service_7(LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97 * value)
	{
		___service_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_7), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1
struct ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1::iamApikey
	String_t* ___iamApikey_4;
	// System.String IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1::serviceUrl
	String_t* ___serviceUrl_5;
	// System.String IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1::versionDate
	String_t* ___versionDate_6;
	// IBM.Watson.NaturalLanguageUnderstanding.V1.NaturalLanguageUnderstandingService IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1::service
	NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * ___service_7;
	// System.String IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1::nluText
	String_t* ___nluText_8;

public:
	inline static int32_t get_offset_of_iamApikey_4() { return static_cast<int32_t>(offsetof(ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E, ___iamApikey_4)); }
	inline String_t* get_iamApikey_4() const { return ___iamApikey_4; }
	inline String_t** get_address_of_iamApikey_4() { return &___iamApikey_4; }
	inline void set_iamApikey_4(String_t* value)
	{
		___iamApikey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iamApikey_4), (void*)value);
	}

	inline static int32_t get_offset_of_serviceUrl_5() { return static_cast<int32_t>(offsetof(ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E, ___serviceUrl_5)); }
	inline String_t* get_serviceUrl_5() const { return ___serviceUrl_5; }
	inline String_t** get_address_of_serviceUrl_5() { return &___serviceUrl_5; }
	inline void set_serviceUrl_5(String_t* value)
	{
		___serviceUrl_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serviceUrl_5), (void*)value);
	}

	inline static int32_t get_offset_of_versionDate_6() { return static_cast<int32_t>(offsetof(ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E, ___versionDate_6)); }
	inline String_t* get_versionDate_6() const { return ___versionDate_6; }
	inline String_t** get_address_of_versionDate_6() { return &___versionDate_6; }
	inline void set_versionDate_6(String_t* value)
	{
		___versionDate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___versionDate_6), (void*)value);
	}

	inline static int32_t get_offset_of_service_7() { return static_cast<int32_t>(offsetof(ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E, ___service_7)); }
	inline NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * get_service_7() const { return ___service_7; }
	inline NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 ** get_address_of_service_7() { return &___service_7; }
	inline void set_service_7(NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * value)
	{
		___service_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_7), (void*)value);
	}

	inline static int32_t get_offset_of_nluText_8() { return static_cast<int32_t>(offsetof(ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E, ___nluText_8)); }
	inline String_t* get_nluText_8() const { return ___nluText_8; }
	inline String_t** get_address_of_nluText_8() { return &___nluText_8; }
	inline void set_nluText_8(String_t* value)
	{
		___nluText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nluText_8), (void*)value);
	}
};


// IBM.Watsson.Examples.ExampleStreaming
struct ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String IBM.Watsson.Examples.ExampleStreaming::_serviceUrl
	String_t* ____serviceUrl_4;
	// UnityEngine.UI.Text IBM.Watsson.Examples.ExampleStreaming::ResultsField
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ResultsField_5;
	// System.String IBM.Watsson.Examples.ExampleStreaming::_iamApikey
	String_t* ____iamApikey_6;
	// System.String IBM.Watsson.Examples.ExampleStreaming::_recognizeModel
	String_t* ____recognizeModel_7;
	// System.Int32 IBM.Watsson.Examples.ExampleStreaming::_recordingRoutine
	int32_t ____recordingRoutine_8;
	// System.String IBM.Watsson.Examples.ExampleStreaming::_microphoneID
	String_t* ____microphoneID_9;
	// UnityEngine.AudioClip IBM.Watsson.Examples.ExampleStreaming::_recording
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____recording_10;
	// System.Int32 IBM.Watsson.Examples.ExampleStreaming::_recordingBufferSize
	int32_t ____recordingBufferSize_11;
	// System.Int32 IBM.Watsson.Examples.ExampleStreaming::_recordingHZ
	int32_t ____recordingHZ_12;
	// IBM.Watson.SpeechToText.V1.SpeechToTextService IBM.Watsson.Examples.ExampleStreaming::_service
	SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * ____service_13;

public:
	inline static int32_t get_offset_of__serviceUrl_4() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ____serviceUrl_4)); }
	inline String_t* get__serviceUrl_4() const { return ____serviceUrl_4; }
	inline String_t** get_address_of__serviceUrl_4() { return &____serviceUrl_4; }
	inline void set__serviceUrl_4(String_t* value)
	{
		____serviceUrl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serviceUrl_4), (void*)value);
	}

	inline static int32_t get_offset_of_ResultsField_5() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ___ResultsField_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ResultsField_5() const { return ___ResultsField_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ResultsField_5() { return &___ResultsField_5; }
	inline void set_ResultsField_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ResultsField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResultsField_5), (void*)value);
	}

	inline static int32_t get_offset_of__iamApikey_6() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ____iamApikey_6)); }
	inline String_t* get__iamApikey_6() const { return ____iamApikey_6; }
	inline String_t** get_address_of__iamApikey_6() { return &____iamApikey_6; }
	inline void set__iamApikey_6(String_t* value)
	{
		____iamApikey_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____iamApikey_6), (void*)value);
	}

	inline static int32_t get_offset_of__recognizeModel_7() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ____recognizeModel_7)); }
	inline String_t* get__recognizeModel_7() const { return ____recognizeModel_7; }
	inline String_t** get_address_of__recognizeModel_7() { return &____recognizeModel_7; }
	inline void set__recognizeModel_7(String_t* value)
	{
		____recognizeModel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recognizeModel_7), (void*)value);
	}

	inline static int32_t get_offset_of__recordingRoutine_8() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ____recordingRoutine_8)); }
	inline int32_t get__recordingRoutine_8() const { return ____recordingRoutine_8; }
	inline int32_t* get_address_of__recordingRoutine_8() { return &____recordingRoutine_8; }
	inline void set__recordingRoutine_8(int32_t value)
	{
		____recordingRoutine_8 = value;
	}

	inline static int32_t get_offset_of__microphoneID_9() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ____microphoneID_9)); }
	inline String_t* get__microphoneID_9() const { return ____microphoneID_9; }
	inline String_t** get_address_of__microphoneID_9() { return &____microphoneID_9; }
	inline void set__microphoneID_9(String_t* value)
	{
		____microphoneID_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____microphoneID_9), (void*)value);
	}

	inline static int32_t get_offset_of__recording_10() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ____recording_10)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__recording_10() const { return ____recording_10; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__recording_10() { return &____recording_10; }
	inline void set__recording_10(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____recording_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recording_10), (void*)value);
	}

	inline static int32_t get_offset_of__recordingBufferSize_11() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ____recordingBufferSize_11)); }
	inline int32_t get__recordingBufferSize_11() const { return ____recordingBufferSize_11; }
	inline int32_t* get_address_of__recordingBufferSize_11() { return &____recordingBufferSize_11; }
	inline void set__recordingBufferSize_11(int32_t value)
	{
		____recordingBufferSize_11 = value;
	}

	inline static int32_t get_offset_of__recordingHZ_12() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ____recordingHZ_12)); }
	inline int32_t get__recordingHZ_12() const { return ____recordingHZ_12; }
	inline int32_t* get_address_of__recordingHZ_12() { return &____recordingHZ_12; }
	inline void set__recordingHZ_12(int32_t value)
	{
		____recordingHZ_12 = value;
	}

	inline static int32_t get_offset_of__service_13() { return static_cast<int32_t>(offsetof(ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9, ____service_13)); }
	inline SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * get__service_13() const { return ____service_13; }
	inline SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 ** get_address_of__service_13() { return &____service_13; }
	inline void set__service_13(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * value)
	{
		____service_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____service_13), (void*)value);
	}
};


// IBM.Watson.Examples.ExampleTextToSpeechV1
struct ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String IBM.Watson.Examples.ExampleTextToSpeechV1::iamApikey
	String_t* ___iamApikey_4;
	// System.String IBM.Watson.Examples.ExampleTextToSpeechV1::serviceUrl
	String_t* ___serviceUrl_5;
	// IBM.Watson.TextToSpeech.V1.TextToSpeechService IBM.Watson.Examples.ExampleTextToSpeechV1::service
	TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 * ___service_6;
	// System.String IBM.Watson.Examples.ExampleTextToSpeechV1::allisionVoice
	String_t* ___allisionVoice_7;
	// System.String IBM.Watson.Examples.ExampleTextToSpeechV1::synthesizeText
	String_t* ___synthesizeText_8;
	// System.String IBM.Watson.Examples.ExampleTextToSpeechV1::placeholderText
	String_t* ___placeholderText_9;
	// System.String IBM.Watson.Examples.ExampleTextToSpeechV1::waitingText
	String_t* ___waitingText_10;
	// System.String IBM.Watson.Examples.ExampleTextToSpeechV1::synthesizeMimeType
	String_t* ___synthesizeMimeType_11;
	// UnityEngine.UI.InputField IBM.Watson.Examples.ExampleTextToSpeechV1::textInput
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___textInput_12;
	// System.Boolean IBM.Watson.Examples.ExampleTextToSpeechV1::_textEntered
	bool ____textEntered_13;
	// UnityEngine.AudioClip IBM.Watson.Examples.ExampleTextToSpeechV1::_recording
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____recording_14;
	// System.Byte[] IBM.Watson.Examples.ExampleTextToSpeechV1::audioStream
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___audioStream_15;

public:
	inline static int32_t get_offset_of_iamApikey_4() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___iamApikey_4)); }
	inline String_t* get_iamApikey_4() const { return ___iamApikey_4; }
	inline String_t** get_address_of_iamApikey_4() { return &___iamApikey_4; }
	inline void set_iamApikey_4(String_t* value)
	{
		___iamApikey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iamApikey_4), (void*)value);
	}

	inline static int32_t get_offset_of_serviceUrl_5() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___serviceUrl_5)); }
	inline String_t* get_serviceUrl_5() const { return ___serviceUrl_5; }
	inline String_t** get_address_of_serviceUrl_5() { return &___serviceUrl_5; }
	inline void set_serviceUrl_5(String_t* value)
	{
		___serviceUrl_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serviceUrl_5), (void*)value);
	}

	inline static int32_t get_offset_of_service_6() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___service_6)); }
	inline TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 * get_service_6() const { return ___service_6; }
	inline TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 ** get_address_of_service_6() { return &___service_6; }
	inline void set_service_6(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 * value)
	{
		___service_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___service_6), (void*)value);
	}

	inline static int32_t get_offset_of_allisionVoice_7() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___allisionVoice_7)); }
	inline String_t* get_allisionVoice_7() const { return ___allisionVoice_7; }
	inline String_t** get_address_of_allisionVoice_7() { return &___allisionVoice_7; }
	inline void set_allisionVoice_7(String_t* value)
	{
		___allisionVoice_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allisionVoice_7), (void*)value);
	}

	inline static int32_t get_offset_of_synthesizeText_8() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___synthesizeText_8)); }
	inline String_t* get_synthesizeText_8() const { return ___synthesizeText_8; }
	inline String_t** get_address_of_synthesizeText_8() { return &___synthesizeText_8; }
	inline void set_synthesizeText_8(String_t* value)
	{
		___synthesizeText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synthesizeText_8), (void*)value);
	}

	inline static int32_t get_offset_of_placeholderText_9() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___placeholderText_9)); }
	inline String_t* get_placeholderText_9() const { return ___placeholderText_9; }
	inline String_t** get_address_of_placeholderText_9() { return &___placeholderText_9; }
	inline void set_placeholderText_9(String_t* value)
	{
		___placeholderText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placeholderText_9), (void*)value);
	}

	inline static int32_t get_offset_of_waitingText_10() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___waitingText_10)); }
	inline String_t* get_waitingText_10() const { return ___waitingText_10; }
	inline String_t** get_address_of_waitingText_10() { return &___waitingText_10; }
	inline void set_waitingText_10(String_t* value)
	{
		___waitingText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitingText_10), (void*)value);
	}

	inline static int32_t get_offset_of_synthesizeMimeType_11() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___synthesizeMimeType_11)); }
	inline String_t* get_synthesizeMimeType_11() const { return ___synthesizeMimeType_11; }
	inline String_t** get_address_of_synthesizeMimeType_11() { return &___synthesizeMimeType_11; }
	inline void set_synthesizeMimeType_11(String_t* value)
	{
		___synthesizeMimeType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synthesizeMimeType_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInput_12() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___textInput_12)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_textInput_12() const { return ___textInput_12; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_textInput_12() { return &___textInput_12; }
	inline void set_textInput_12(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___textInput_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInput_12), (void*)value);
	}

	inline static int32_t get_offset_of__textEntered_13() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ____textEntered_13)); }
	inline bool get__textEntered_13() const { return ____textEntered_13; }
	inline bool* get_address_of__textEntered_13() { return &____textEntered_13; }
	inline void set__textEntered_13(bool value)
	{
		____textEntered_13 = value;
	}

	inline static int32_t get_offset_of__recording_14() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ____recording_14)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__recording_14() const { return ____recording_14; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__recording_14() { return &____recording_14; }
	inline void set__recording_14(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____recording_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recording_14), (void*)value);
	}

	inline static int32_t get_offset_of_audioStream_15() { return static_cast<int32_t>(offsetof(ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605, ___audioStream_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_audioStream_15() const { return ___audioStream_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_audioStream_15() { return &___audioStream_15; }
	inline void set_audioStream_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___audioStream_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioStream_15), (void*)value);
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void IBM.Cloud.SDK.Callback`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_1__ctor_m156C8135447A973AF7890FE495CB97F958008554_gshared (Callback_1_t6593A7665A52B1B7ECD61B558F568300100C4AFA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String IBM.Cloud.SDK.DetailedResponse`1<System.Object>::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DetailedResponse_1_get_Response_mA65234D321A5AA5139D7FE791460A880612E48DF_gshared_inline (DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614 * __this, const RuntimeMethod* method);
// !0 IBM.Cloud.SDK.DetailedResponse`1<System.Object>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DetailedResponse_1_get_Result_m305BFFF31974941B4E49B51DC17C3DDD9B71A106_gshared_inline (DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int64>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_gshared (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ExampleLanguageTranslatorV3/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m5C83A1FEDBE7DE3D165B5A1E58093CF8A909B66C (U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 * __this, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Callback`1<IBM.Watson.LanguageTranslator.V3.Model.TranslationModels>::.ctor(System.Object,System.IntPtr)
inline void Callback_1__ctor_m8B7C203A67C895CD46A46E5369C4B8E755321DD3 (Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback_1__ctor_m156C8135447A973AF7890FE495CB97F958008554_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean IBM.Watson.LanguageTranslator.V3.LanguageTranslatorService::ListModels(IBM.Cloud.SDK.Callback`1<IBM.Watson.LanguageTranslator.V3.Model.TranslationModels>,System.String,System.String,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LanguageTranslatorService_ListModels_mCAE0A3CDC6CC9B43DEECD3D183CA60D80E599263 (LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97 * __this, Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB * ___callback0, String_t* ___source1, String_t* ___target2, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____default3, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.String IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults>::get_Response()
inline String_t* DetailedResponse_1_get_Response_m96F2FC20EA5BF393B7B79B231677D1F576DE711D_inline (DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199 *, const RuntimeMethod*))DetailedResponse_1_get_Response_mA65234D321A5AA5139D7FE791460A880612E48DF_gshared_inline)(__this, method);
}
// System.Void IBM.Cloud.SDK.Log::Debug(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Debug_m87EF25C5B8AEC7DCB5377F2D6C20F6AE29C1EB6E (String_t* ___subSystem0, String_t* ___messageFmt1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// !0 IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults>::get_Result()
inline AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * DetailedResponse_1_get_Result_m3E11384B715E00DAC8B90C0ED9919D90B855F811_inline (DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199 * __this, const RuntimeMethod* method)
{
	return ((  AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * (*) (DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199 *, const RuntimeMethod*))DetailedResponse_1_get_Result_m305BFFF31974941B4E49B51DC17C3DDD9B71A106_gshared_inline)(__this, method);
}
// System.String IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults>::get_Response()
inline String_t* DetailedResponse_1_get_Response_mC2F71186CA46A1E9A7873547D089EE8FE442737D_inline (DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E *, const RuntimeMethod*))DetailedResponse_1_get_Response_mA65234D321A5AA5139D7FE791460A880612E48DF_gshared_inline)(__this, method);
}
// !0 IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults>::get_Result()
inline ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * DetailedResponse_1_get_Result_m15745899C8BFEC0A877EB75E81008A991329688B_inline (DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E * __this, const RuntimeMethod* method)
{
	return ((  ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * (*) (DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E *, const RuntimeMethod*))DetailedResponse_1_get_Result_m305BFFF31974941B4E49B51DC17C3DDD9B71A106_gshared_inline)(__this, method);
}
// System.String IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults>::get_Response()
inline String_t* DetailedResponse_1_get_Response_m3D54282E19E7ADFE2D5115816A0FE83680C98338_inline (DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79 *, const RuntimeMethod*))DetailedResponse_1_get_Response_mA65234D321A5AA5139D7FE791460A880612E48DF_gshared_inline)(__this, method);
}
// !0 IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults>::get_Result()
inline DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * DetailedResponse_1_get_Result_mE88247AC57D84941FCD0E464C4E2005171AB3390_inline (DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79 * __this, const RuntimeMethod* method)
{
	return ((  DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * (*) (DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79 *, const RuntimeMethod*))DetailedResponse_1_get_Result_m305BFFF31974941B4E49B51DC17C3DDD9B71A106_gshared_inline)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Utilities.IBMException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBMException__ctor_m3ABCF17B8414F2DBD04253612A8419B74835B5C0 (IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Authentication.Iam.IamAuthenticator::.ctor(System.String,System.String,System.String,System.String,System.Nullable`1<System.Boolean>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IamAuthenticator__ctor_mCAFEFC85D0ADA4F11D47059F4F868A6E9B064741 (IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * __this, String_t* ___apikey0, String_t* ___url1, String_t* ___clientId2, String_t* ___clientSecret3, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___disableSslVerification4, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers5, const RuntimeMethod* method);
// System.Void IBM.Watson.NaturalLanguageUnderstanding.V1.NaturalLanguageUnderstandingService::.ctor(System.String,IBM.Cloud.SDK.Authentication.Authenticator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NaturalLanguageUnderstandingService__ctor_m1E3E22B82500A68258C941B289C26627838951D5 (NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * __this, String_t* ___version0, Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA * ___authenticator1, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.BaseService::SetServiceUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_SetServiceUrl_mD827E4AE1B3B14A8D1DC44E0DF1C04D77605CDC9 (BaseService_tD689D8C55679603B5D352B5DED874C43AACBCF4C * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Collections.IEnumerator IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1::ExampleAnalyze()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExampleNaturalLanguageUnderstandingV1_ExampleAnalyze_m90E5364D827962891D60436A3EFA9649262BDFDD (ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * __this, const RuntimeMethod* method);
// System.Int32 IBM.Cloud.SDK.Utilities.Runnable::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Runnable_Run_m592CB944CBBCAF8C2A4C97DB891F247703DE0F6E (RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1::ExampleListModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExampleNaturalLanguageUnderstandingV1_ExampleListModels_mD847F7F3CF272D9435292D3D8F6B567211F6DAF9 (ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1::ExampleDeleteModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExampleNaturalLanguageUnderstandingV1_ExampleDeleteModel_m49B4B8DD9E07C8AA107AB81F17B516CA53EFC043 (ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m76AA0E001349CF760C948E267CD0D66373596E5F (U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Features__ctor_m2AB4D8D6EECF2C0B26C1172B04105AD8A14A6324 (Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550 * __this, const RuntimeMethod* method);
// System.Void IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordsOptions__ctor_mF454904B198EC0ABB571152130655CA3D4E57EB5 (KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int64>::.ctor(!0)
inline void Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *, int64_t, const RuntimeMethod*))Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_gshared)(__this, ___value0, method);
}
// System.Void IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions::set_Limit(System.Nullable`1<System.Int64>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordsOptions_set_Limit_m1496FBDD037FDCF9A578D1CC65497070B74B5FB9_inline (KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * __this, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
inline void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, bool, const RuntimeMethod*))Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared)(__this, ___value0, method);
}
// System.Void IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions::set_Sentiment(System.Nullable`1<System.Boolean>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordsOptions_set_Sentiment_m34167B9C0CA7E19A4C653AD1ACE11EA4CE6CE507_inline (KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * __this, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___value0, const RuntimeMethod* method);
// System.Void IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features::set_Keywords(IBM.Watson.NaturalLanguageUnderstanding.V1.Model.KeywordsOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Features_set_Keywords_m3DC628A421506D006BE2A4F7E8DF474891BB2371_inline (Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550 * __this, KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * ___value0, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults>::.ctor(System.Object,System.IntPtr)
inline void Callback_1__ctor_m6DA914CAB9E3C94E18CC5A511F652E8E70D1C366 (Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback_1__ctor_m156C8135447A973AF7890FE495CB97F958008554_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean IBM.Watson.NaturalLanguageUnderstanding.V1.NaturalLanguageUnderstandingService::Analyze(IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults>,IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Features,System.String,System.String,System.String,System.Nullable`1<System.Boolean>,System.String,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.String,System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NaturalLanguageUnderstandingService_Analyze_m4A45B8932526BFAB450562E352402D11B56D9247 (NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * __this, Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649 * ___callback0, Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550 * ___features1, String_t* ___text2, String_t* ___html3, String_t* ___url4, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___clean5, String_t* ___xpath6, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___fallbackToRaw7, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___returnAnalyzedText8, String_t* ___language9, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___limitTextCharacters10, const RuntimeMethod* method);
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m8DAD62301CBFEFB06D0E8302EBACAFFC68346856 (U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * __this, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults>::.ctor(System.Object,System.IntPtr)
inline void Callback_1__ctor_mB95DE5AEEF4F5545BD12F6A0138E08844616D493 (Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback_1__ctor_m156C8135447A973AF7890FE495CB97F958008554_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean IBM.Watson.NaturalLanguageUnderstanding.V1.NaturalLanguageUnderstandingService::DeleteModel(IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NaturalLanguageUnderstandingService_DeleteModel_m412AF22AFEF46418B8B1CE74A920D8C0E7A28277 (NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * __this, Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90 * ___callback0, String_t* ___modelId1, const RuntimeMethod* method);
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mF8EAFB11B9A6191C1D6CC65FDF75F14F6FB36835 (U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * __this, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults>::.ctor(System.Object,System.IntPtr)
inline void Callback_1__ctor_m97E120863B140D33CBE7ECC47999C6DDBB70D0FA (Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback_1__ctor_m156C8135447A973AF7890FE495CB97F958008554_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean IBM.Watson.NaturalLanguageUnderstanding.V1.NaturalLanguageUnderstandingService::ListModels(IBM.Cloud.SDK.Callback`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NaturalLanguageUnderstandingService_ListModels_m45EA888A626F489EA48A667A0CE018AFBBFBE77C (NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * __this, Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E * ___callback0, const RuntimeMethod* method);
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService::.ctor(IBM.Cloud.SDK.Authentication.Authenticator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToTextService__ctor_m82294B308266725E35FCAC87FA963B91C1D60D21 (SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * __this, Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA * ___authenticator0, const RuntimeMethod* method);
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService::set_StreamMultipart(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechToTextService_set_StreamMultipart_m392A8264D8239D4356513E054A032170C11A88E8_inline (SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void IBM.Watsson.Examples.ExampleStreaming::set_Active(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleStreaming_set_Active_m4764B936EA418AE3028735BFF40B72638CC95650 (ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void IBM.Watsson.Examples.ExampleStreaming::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleStreaming_StartRecording_mFE933BB9DC8D1108AEBFB002D758499BA674517A (ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * __this, const RuntimeMethod* method);
// System.String[] UnityEngine.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A (const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void IBM.Watsson.Examples.ExampleStreaming::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleStreaming_StopRecording_m545AB403A7BD9F3CCAF36110100FC64A0ED53522 (ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587 (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4 (String_t* ___deviceName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void IBM.Cloud.SDK.Log::Error(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m30E65F9D31647F73E862281C6061258C5299A789 (String_t* ___subSystem0, String_t* ___messageFmt1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.DataTypes.AudioData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioData__ctor_mB44622F7D263EECE2C43C88C447F8AA5BE7A2904 (AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mBFD6E1F7B1716EB3113CDEA310FA42D8968E16AF (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_mF4D4C83FF7655E1D027E2D445280E72000958E2C (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.DataTypes.AudioData::set_MaxLevel(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioData_set_MaxLevel_m6C73B457D28FD78AB59A5C36A2AEFA2267BC9D26_inline (AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClip_Create_m889DC46878E297CE089D4182F5FCDC4961529137 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.DataTypes.AudioData::set_Clip(UnityEngine.AudioClip)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioData_set_Clip_m54312E832F721C0692A2DA47E7CC59C23B41B6DB_inline (AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// UnityEngine.AudioClip IBM.Cloud.SDK.DataTypes.AudioData::get_Clip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioData_get_Clip_mCF946CEC39D6E1A41AC391BD820D67328FDCA581_inline (AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService::OnListen(IBM.Cloud.SDK.DataTypes.AudioData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpeechToTextService_OnListen_m8ABBF4C35793069F0C81CE467284C31A14F8E641 (SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * __this, AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !0 IBM.Cloud.SDK.DetailedResponse`1<System.Byte[]>::get_Result()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DetailedResponse_1_get_Result_mC8254063F1CD13EE4DA37AC716EB3C42B5D98C45_inline (DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358 *, const RuntimeMethod*))DetailedResponse_1_get_Result_m305BFFF31974941B4E49B51DC17C3DDD9B71A106_gshared_inline)(__this, method);
}
// UnityEngine.AudioClip IBM.Cloud.SDK.Utilities.WaveFile::ParseWAV(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * WaveFile_ParseWAV_m8BD23C76C90CBFAD65483A163EDB3AC2EC19A92A (String_t* ___clipName0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1::PlayClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleTextToSpeechV1_PlayClip_m0EEA8707690D3471D0AEC2E282B28872431A349D (ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void IBM.Watson.TextToSpeech.V1.TextToSpeechService::.ctor(IBM.Cloud.SDK.Authentication.Authenticator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechService__ctor_m7B545A3BAB2F271609C2A0E6937240163BDBC284 (TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 * __this, Authenticator_t51692EAA883FC1736C2D6C24990F8CC970FD68AA * ___authenticator0, const RuntimeMethod* method);
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m94EC35904A5C0C8A34CDFFF8065D06E57048D3D8 (U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * __this, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Callback`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Callback_1__ctor_m83DF4CCF1FD338C090DAA8BC761A6B30FA5FE811 (Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback_1__ctor_m156C8135447A973AF7890FE495CB97F958008554_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean IBM.Watson.TextToSpeech.V1.TextToSpeechService::Synthesize(IBM.Cloud.SDK.Callback`1<System.Byte[]>,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechService_Synthesize_m0FDF5F5242347279625ECEE5DD4F971EFE16F13F (TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 * __this, Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD * ___callback0, String_t* ___text1, String_t* ___accept2, String_t* ___voice3, String_t* ___customizationId4, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.AudioClip>(System.String)
inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// UnityEngine.AudioDataLoadState UnityEngine.AudioClip::get_loadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadState_m1FF966C14C813FEFD41778D79DC79D557BE67B06 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Byte[] IBM.Cloud.SDK.AudioClipUtil::GetL16(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AudioClipUtil_GetL16_mFB4CA53371841EFA3E73B2ABD68F123A3A614070 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Connection.WSConnector/BinaryMessage::.ctor(System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryMessage__ctor_m9BA1E59793A7F2D142EDE59326E5C55A29284975 (BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers1, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Connection.WSConnector::Send(IBM.Cloud.SDK.Connection.WSConnector/Message,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WSConnector_Send_mA09BB46460A4133494756F62D0493A79057824A6 (WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 * __this, Message_t2184A9CCBB52B60EECA24C5579BB4D5A16019E7E * ___msg0, bool ___queue1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExampleLanguageTranslatorV3/<ExampleListModels>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleListModelsU3Ed__6__ctor_m46065373DFA339A8618F8D7C5E4554FFFE7FEAAD (U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ExampleLanguageTranslatorV3/<ExampleListModels>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleListModelsU3Ed__6_System_IDisposable_Dispose_m160606EC45B020B51785483291A5B3DECCE8B858 (U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ExampleLanguageTranslatorV3/<ExampleListModels>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExampleListModelsU3Ed__6_MoveNext_m7F59E3C91BB985715F86B22ADDFD3A111ABEE734 (U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1__ctor_m8B7C203A67C895CD46A46E5369C4B8E755321DD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CExampleListModelsU3Eb__0_m14E8DD659738172A691EB799BC6433E9C2EBDA12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30 * V_1 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0077;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 * L_4 = (U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m5C83A1FEDBE7DE3D165B5A1E58093CF8A909B66C(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_3(L_4);
		// TranslationModels listModelsResponse = null;
		U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 * L_5 = __this->get_U3CU3E8__1_3();
		NullCheck(L_5);
		L_5->set_listModelsResponse_0((TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 *)NULL);
		// service.ListModels(
		//     callback: (DetailedResponse<TranslationModels> response, IBMError error) =>
		//     {
		//         Log.Debug("LanguageTranslatorServiceV3", "ListModels result: {0}", response.Response);
		//         listModelsResponse = response.Result;
		//     },
		//     source: "en",
		//     target: "fr"
		// );
		ExampleLanguageTranslatorV3_t8BF80E8AE3AE66A0704051CABCB05ED07D5E0E30 * L_6 = V_1;
		NullCheck(L_6);
		LanguageTranslatorService_t6DB62D524FEC610DB71BDDDFCFBDB3A60EE9ED97 * L_7 = L_6->get_service_7();
		U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 * L_8 = __this->get_U3CU3E8__1_3();
		Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB * L_9 = (Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB *)il2cpp_codegen_object_new(Callback_1_tBE91B785DB05ED9655BD44000376E43AD1DF26AB_il2cpp_TypeInfo_var);
		Callback_1__ctor_m8B7C203A67C895CD46A46E5369C4B8E755321DD3(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3CExampleListModelsU3Eb__0_m14E8DD659738172A691EB799BC6433E9C2EBDA12_RuntimeMethod_var), /*hidden argument*/Callback_1__ctor_m8B7C203A67C895CD46A46E5369C4B8E755321DD3_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_10 = V_2;
		NullCheck(L_7);
		bool L_11;
		L_11 = LanguageTranslatorService_ListModels_mCAE0A3CDC6CC9B43DEECD3D183CA60D80E599263(L_7, L_9, _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096, _stringLiteral203DD5C89072A85E4D8D935A3028CCC3E3855F85, L_10, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_0067:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0077:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_007e:
	{
		// while (listModelsResponse == null)
		U3CU3Ec__DisplayClass6_0_tC8A0FCB4B198DFA3061D737B5646C77E069077D4 * L_12 = __this->get_U3CU3E8__1_3();
		NullCheck(L_12);
		TranslationModels_tC73C87994B3F793B6AE7F8401DFB05C0D1BEAE82 * L_13 = L_12->get_listModelsResponse_0();
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ExampleLanguageTranslatorV3/<ExampleListModels>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleListModelsU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m00AE977AE9598B73C560EE273966740DBA2CC10B (U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ExampleLanguageTranslatorV3/<ExampleListModels>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleListModelsU3Ed__6_System_Collections_IEnumerator_Reset_mF69ACE28D405B9C72893F224573B20055DF60C8C (U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExampleListModelsU3Ed__6_System_Collections_IEnumerator_Reset_mF69ACE28D405B9C72893F224573B20055DF60C8C_RuntimeMethod_var)));
	}
}
// System.Object ExampleLanguageTranslatorV3/<ExampleListModels>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleListModelsU3Ed__6_System_Collections_IEnumerator_get_Current_mECE65A4657711657B78A7DDEC0A6846B85CF3CBE (U3CExampleListModelsU3Ed__6_t09F0D3A3C0E7E0C39FC9DD95C3EB1F7433D3A04E * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m76AA0E001349CF760C948E267CD0D66373596E5F (U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass7_0::<ExampleAnalyze>b__0(IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.AnalysisResults>,IBM.Cloud.SDK.IBMError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CExampleAnalyzeU3Eb__0_m8207A23F23BE9DE612C91ACC4E31BF10A9693753 (U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * __this, DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199 * ___response0, IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239 * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailedResponse_1_get_Response_m96F2FC20EA5BF393B7B79B231677D1F576DE711D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailedResponse_1_get_Result_m3E11384B715E00DAC8B90C0ED9919D90B855F811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4A945C6EB6E75983539280E95D3297461237217);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD630860689252D66B6DE949F1B56B5D00521A270);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log.Debug("NaturalLanguageUnderstandingServiceV1", "Analyze result: {0}", response.Response);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199 * L_2 = ___response0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DetailedResponse_1_get_Response_m96F2FC20EA5BF393B7B79B231677D1F576DE711D_inline(L_2, /*hidden argument*/DetailedResponse_1_get_Response_m96F2FC20EA5BF393B7B79B231677D1F576DE711D_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		Log_Debug_m87EF25C5B8AEC7DCB5377F2D6C20F6AE29C1EB6E(_stringLiteralD630860689252D66B6DE949F1B56B5D00521A270, _stringLiteralC4A945C6EB6E75983539280E95D3297461237217, L_1, /*hidden argument*/NULL);
		// analyzeResponse = response.Result;
		DetailedResponse_1_tF82ADE0BCDDB3DD723A107AC4F75451989D79199 * L_4 = ___response0;
		NullCheck(L_4);
		AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * L_5;
		L_5 = DetailedResponse_1_get_Result_m3E11384B715E00DAC8B90C0ED9919D90B855F811_inline(L_4, /*hidden argument*/DetailedResponse_1_get_Result_m3E11384B715E00DAC8B90C0ED9919D90B855F811_RuntimeMethod_var);
		__this->set_analyzeResponse_0(L_5);
		// },
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
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mF8EAFB11B9A6191C1D6CC65FDF75F14F6FB36835 (U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass8_0::<ExampleListModels>b__0(IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.ListModelsResults>,IBM.Cloud.SDK.IBMError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CExampleListModelsU3Eb__0_m9F676A49C4C01A36733671CEDE1BEA52D385639A (U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * __this, DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E * ___response0, IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239 * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailedResponse_1_get_Response_mC2F71186CA46A1E9A7873547D089EE8FE442737D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailedResponse_1_get_Result_m15745899C8BFEC0A877EB75E81008A991329688B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3173CDDE324FF75CFAB9C279D40AEC1024A2982F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD630860689252D66B6DE949F1B56B5D00521A270);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log.Debug("NaturalLanguageUnderstandingServiceV1", "ListModels result: {0}", response.Response);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E * L_2 = ___response0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DetailedResponse_1_get_Response_mC2F71186CA46A1E9A7873547D089EE8FE442737D_inline(L_2, /*hidden argument*/DetailedResponse_1_get_Response_mC2F71186CA46A1E9A7873547D089EE8FE442737D_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		Log_Debug_m87EF25C5B8AEC7DCB5377F2D6C20F6AE29C1EB6E(_stringLiteralD630860689252D66B6DE949F1B56B5D00521A270, _stringLiteral3173CDDE324FF75CFAB9C279D40AEC1024A2982F, L_1, /*hidden argument*/NULL);
		// listModelsResponse = response.Result;
		DetailedResponse_1_t0607D5ECDBDA2D979EF1DEA8EDEAEF97D40E2E2E * L_4 = ___response0;
		NullCheck(L_4);
		ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * L_5;
		L_5 = DetailedResponse_1_get_Result_m15745899C8BFEC0A877EB75E81008A991329688B_inline(L_4, /*hidden argument*/DetailedResponse_1_get_Result_m15745899C8BFEC0A877EB75E81008A991329688B_RuntimeMethod_var);
		__this->set_listModelsResponse_0(L_5);
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
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m8DAD62301CBFEFB06D0E8302EBACAFFC68346856 (U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<>c__DisplayClass9_0::<ExampleDeleteModel>b__0(IBM.Cloud.SDK.DetailedResponse`1<IBM.Watson.NaturalLanguageUnderstanding.V1.Model.DeleteModelResults>,IBM.Cloud.SDK.IBMError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CExampleDeleteModelU3Eb__0_mC0131666BCF94A6587533671310164C99A353DE8 (U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * __this, DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79 * ___response0, IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239 * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailedResponse_1_get_Response_m3D54282E19E7ADFE2D5115816A0FE83680C98338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailedResponse_1_get_Result_mE88247AC57D84941FCD0E464C4E2005171AB3390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4AE8C38A21D2CD6E7D762F293D94D1505036FCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD630860689252D66B6DE949F1B56B5D00521A270);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log.Debug("NaturalLanguageUnderstandingServiceV1", "DeleteModel result: {0}", response.Response);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79 * L_2 = ___response0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DetailedResponse_1_get_Response_m3D54282E19E7ADFE2D5115816A0FE83680C98338_inline(L_2, /*hidden argument*/DetailedResponse_1_get_Response_m3D54282E19E7ADFE2D5115816A0FE83680C98338_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		Log_Debug_m87EF25C5B8AEC7DCB5377F2D6C20F6AE29C1EB6E(_stringLiteralD630860689252D66B6DE949F1B56B5D00521A270, _stringLiteralB4AE8C38A21D2CD6E7D762F293D94D1505036FCF, L_1, /*hidden argument*/NULL);
		// deleteModelResponse = response.Result;
		DetailedResponse_1_tB6848746E810930840838876BF691E6183220C79 * L_4 = ___response0;
		NullCheck(L_4);
		DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * L_5;
		L_5 = DetailedResponse_1_get_Result_mE88247AC57D84941FCD0E464C4E2005171AB3390_inline(L_4, /*hidden argument*/DetailedResponse_1_get_Result_mE88247AC57D84941FCD0E464C4E2005171AB3390_RuntimeMethod_var);
		__this->set_deleteModelResponse_0(L_5);
		// },
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
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateServiceU3Ed__6__ctor_mE018DF2553873C335834072B1DD5B9241289CC8D (U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateServiceU3Ed__6_System_IDisposable_Dispose_m49A5055E194283ECF40CB532EE7510BAB661E6A5 (U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateServiceU3Ed__6_MoveNext_m3E058ED990B785DEAC4D0DB89516783F3C76101E (U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * V_1 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (string.IsNullOrEmpty(iamApikey))
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_iamApikey_4();
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// throw new IBMException("Please add IAM ApiKey to the Iam Apikey field in the inspector.");
		IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387 * L_7 = (IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387_il2cpp_TypeInfo_var)));
		IBMException__ctor_m3ABCF17B8414F2DBD04253612A8419B74835B5C0(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79AF0021328FC2816B1B53EA85744E7798B2B7EA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateServiceU3Ed__6_MoveNext_m3E058ED990B785DEAC4D0DB89516783F3C76101E_RuntimeMethod_var)));
	}

IL_0036:
	{
		// IamAuthenticator authenticator = new IamAuthenticator(apikey: iamApikey);
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_iamApikey_4();
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_10 = V_2;
		IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * L_11 = (IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B *)il2cpp_codegen_object_new(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B_il2cpp_TypeInfo_var);
		IamAuthenticator__ctor_mCAFEFC85D0ADA4F11D47059F4F868A6E9B064741(L_11, L_9, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, L_10, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, /*hidden argument*/NULL);
		__this->set_U3CauthenticatorU3E5__2_3(L_11);
		goto IL_006d;
	}

IL_0056:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006d:
	{
		// while (!authenticator.CanAuthenticate())
		IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * L_12 = __this->get_U3CauthenticatorU3E5__2_3();
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean IBM.Cloud.SDK.Authentication.Authenticator::CanAuthenticate() */, L_12);
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		// service = new NaturalLanguageUnderstandingService(versionDate, authenticator);
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_14 = V_1;
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_versionDate_6();
		IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * L_17 = __this->get_U3CauthenticatorU3E5__2_3();
		NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * L_18 = (NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 *)il2cpp_codegen_object_new(NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2_il2cpp_TypeInfo_var);
		NaturalLanguageUnderstandingService__ctor_m1E3E22B82500A68258C941B289C26627838951D5(L_18, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_service_7(L_18);
		// if (!string.IsNullOrEmpty(serviceUrl))
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_serviceUrl_5();
		bool L_21;
		L_21 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00af;
		}
	}
	{
		// service.SetServiceUrl(serviceUrl);
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_22 = V_1;
		NullCheck(L_22);
		NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * L_23 = L_22->get_service_7();
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25 = L_24->get_serviceUrl_5();
		NullCheck(L_23);
		BaseService_SetServiceUrl_mD827E4AE1B3B14A8D1DC44E0DF1C04D77605CDC9(L_23, L_25, /*hidden argument*/NULL);
	}

IL_00af:
	{
		// Runnable.Run(ExampleAnalyze());
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_26 = V_1;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = ExampleNaturalLanguageUnderstandingV1_ExampleAnalyze_m90E5364D827962891D60436A3EFA9649262BDFDD(L_26, /*hidden argument*/NULL);
		int32_t L_28;
		L_28 = Runnable_Run_m592CB944CBBCAF8C2A4C97DB891F247703DE0F6E(L_27, /*hidden argument*/NULL);
		// Runnable.Run(ExampleListModels());
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = ExampleNaturalLanguageUnderstandingV1_ExampleListModels_mD847F7F3CF272D9435292D3D8F6B567211F6DAF9(L_29, /*hidden argument*/NULL);
		int32_t L_31;
		L_31 = Runnable_Run_m592CB944CBBCAF8C2A4C97DB891F247703DE0F6E(L_30, /*hidden argument*/NULL);
		// Runnable.Run(ExampleDeleteModel());
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_32 = V_1;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = ExampleNaturalLanguageUnderstandingV1_ExampleDeleteModel_m49B4B8DD9E07C8AA107AB81F17B516CA53EFC043(L_32, /*hidden argument*/NULL);
		int32_t L_34;
		L_34 = Runnable_Run_m592CB944CBBCAF8C2A4C97DB891F247703DE0F6E(L_33, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateServiceU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m108B752A97594DEDE6AA7ECAF51961A43F52591A (U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateServiceU3Ed__6_System_Collections_IEnumerator_Reset_m7FC6EDA244657BDAD0E19A5216854ABE572883A1 (U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateServiceU3Ed__6_System_Collections_IEnumerator_Reset_m7FC6EDA244657BDAD0E19A5216854ABE572883A1_RuntimeMethod_var)));
	}
}
// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<CreateService>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateServiceU3Ed__6_System_Collections_IEnumerator_get_Current_mDC5099BE733A298718BF7A4C45A3DAED5808BD33 (U3CCreateServiceU3Ed__6_t25B6E090D967E2EB2DE10847D9EE52A5592282B2 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleAnalyzeU3Ed__7__ctor_m26DF9F1880AEB48F1A88E07308F55BCDFAE6A76E (U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleAnalyzeU3Ed__7_System_IDisposable_Dispose_m43B60AEFC369C12B2E20AA81E8C66B0BC4E08C5A (U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExampleAnalyzeU3Ed__7_MoveNext_m55F240A6227FA8415C70FAB54819F31022E0C5B5 (U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1__ctor_m6DA914CAB9E3C94E18CC5A511F652E8E70D1C366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CExampleAnalyzeU3Eb__0_m8207A23F23BE9DE612C91ACC4E31BF10A9693753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * V_1 = NULL;
	Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550 * V_2 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00c1;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * L_4 = (U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m76AA0E001349CF760C948E267CD0D66373596E5F(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_3(L_4);
		// Features features = new Features()
		// {
		//     Keywords = new KeywordsOptions()
		//     {
		//         Limit = 2,
		//         Sentiment = true
		//     },
		// };
		Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550 * L_5 = (Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550 *)il2cpp_codegen_object_new(Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550_il2cpp_TypeInfo_var);
		Features__ctor_m2AB4D8D6EECF2C0B26C1172B04105AD8A14A6324(L_5, /*hidden argument*/NULL);
		Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550 * L_6 = L_5;
		KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * L_7 = (KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD *)il2cpp_codegen_object_new(KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD_il2cpp_TypeInfo_var);
		KeywordsOptions__ctor_mF454904B198EC0ABB571152130655CA3D4E57EB5(L_7, /*hidden argument*/NULL);
		KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * L_8 = L_7;
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D((&L_9), ((int64_t)((int64_t)2)), /*hidden argument*/Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
		NullCheck(L_8);
		KeywordsOptions_set_Limit_m1496FBDD037FDCF9A578D1CC65497070B74B5FB9_inline(L_8, L_9, /*hidden argument*/NULL);
		KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * L_10 = L_8;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_11), (bool)1, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		NullCheck(L_10);
		KeywordsOptions_set_Sentiment_m34167B9C0CA7E19A4C653AD1ACE11EA4CE6CE507_inline(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		Features_set_Keywords_m3DC628A421506D006BE2A4F7E8DF474891BB2371_inline(L_6, L_10, /*hidden argument*/NULL);
		V_2 = L_6;
		// AnalysisResults analyzeResponse = null;
		U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * L_12 = __this->get_U3CU3E8__1_3();
		NullCheck(L_12);
		L_12->set_analyzeResponse_0((AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 *)NULL);
		// service.Analyze(
		//     callback: (DetailedResponse<AnalysisResults> response, IBMError error) =>
		//     {
		//         Log.Debug("NaturalLanguageUnderstandingServiceV1", "Analyze result: {0}", response.Response);
		//         analyzeResponse = response.Result;
		//     },
		//     features: features,
		//     text: nluText
		// );
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_13 = V_1;
		NullCheck(L_13);
		NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * L_14 = L_13->get_service_7();
		U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * L_15 = __this->get_U3CU3E8__1_3();
		Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649 * L_16 = (Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649 *)il2cpp_codegen_object_new(Callback_1_t90A30B9B34BD47EBABEB5BC5FCDAFF76655AC649_il2cpp_TypeInfo_var);
		Callback_1__ctor_m6DA914CAB9E3C94E18CC5A511F652E8E70D1C366(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CExampleAnalyzeU3Eb__0_m8207A23F23BE9DE612C91ACC4E31BF10A9693753_RuntimeMethod_var), /*hidden argument*/Callback_1__ctor_m6DA914CAB9E3C94E18CC5A511F652E8E70D1C366_RuntimeMethod_var);
		Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550 * L_17 = V_2;
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_nluText_8();
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_20 = V_3;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_21 = V_3;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_22 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F ));
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_23 = V_4;
		NullCheck(L_14);
		bool L_24;
		L_24 = NaturalLanguageUnderstandingService_Analyze_m4A45B8932526BFAB450562E352402D11B56D9247(L_14, L_16, L_17, L_19, (String_t*)NULL, (String_t*)NULL, L_20, (String_t*)NULL, L_21, L_22, (String_t*)NULL, L_23, /*hidden argument*/NULL);
		goto IL_00c8;
	}

IL_00b1:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c1:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00c8:
	{
		// while (analyzeResponse == null)
		U3CU3Ec__DisplayClass7_0_t34C656A35DCFF81547147AA8F3761ACA9BA4B276 * L_25 = __this->get_U3CU3E8__1_3();
		NullCheck(L_25);
		AnalysisResults_t83147D5E11BA388B6C53AD5AAFF3F67FA7CF0546 * L_26 = L_25->get_analyzeResponse_0();
		if (!L_26)
		{
			goto IL_00b1;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleAnalyzeU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB40A33553C591B1D81DD9E7873F9F4C4743EFDA8 (U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleAnalyzeU3Ed__7_System_Collections_IEnumerator_Reset_m08C2672D8738ABA0B261D0D2FC074190D064F59B (U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExampleAnalyzeU3Ed__7_System_Collections_IEnumerator_Reset_m08C2672D8738ABA0B261D0D2FC074190D064F59B_RuntimeMethod_var)));
	}
}
// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleAnalyze>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleAnalyzeU3Ed__7_System_Collections_IEnumerator_get_Current_m21BCB784DF1ACB082B2C62EDACD48B625453AFBA (U3CExampleAnalyzeU3Ed__7_t84060723BCBE5E729A2B008D2E2164C59EE1FCDC * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleDeleteModelU3Ed__9__ctor_mA8B749C3D38204259D997128031F499EBD8B5730 (U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleDeleteModelU3Ed__9_System_IDisposable_Dispose_mD248E4E63A6C1A34833605CE25FDD2473EA87D84 (U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExampleDeleteModelU3Ed__9_MoveNext_m6A776F4DB51F2150512257D50388D0FFF046B6B6 (U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1__ctor_mB95DE5AEEF4F5545BD12F6A0138E08844616D493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CExampleDeleteModelU3Eb__0_mC0131666BCF94A6587533671310164C99A353DE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD04C2F82BBCD35549793B3BD9B41FAEC8020E6D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * L_4 = (U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_m8DAD62301CBFEFB06D0E8302EBACAFFC68346856(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_3(L_4);
		// DeleteModelResults deleteModelResponse = null;
		U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * L_5 = __this->get_U3CU3E8__1_3();
		NullCheck(L_5);
		L_5->set_deleteModelResponse_0((DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 *)NULL);
		// service.DeleteModel(
		//     callback: (DetailedResponse<DeleteModelResults> response, IBMError error) =>
		//     {
		//         Log.Debug("NaturalLanguageUnderstandingServiceV1", "DeleteModel result: {0}", response.Response);
		//         deleteModelResponse = response.Result;
		//     },
		//     modelId: "<modelId>" // Enter model Id here
		// );
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_6 = V_1;
		NullCheck(L_6);
		NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * L_7 = L_6->get_service_7();
		U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * L_8 = __this->get_U3CU3E8__1_3();
		Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90 * L_9 = (Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90 *)il2cpp_codegen_object_new(Callback_1_t68B81C7EBA498B2C0321AAAF398FBF7D653CDB90_il2cpp_TypeInfo_var);
		Callback_1__ctor_mB95DE5AEEF4F5545BD12F6A0138E08844616D493(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CExampleDeleteModelU3Eb__0_mC0131666BCF94A6587533671310164C99A353DE8_RuntimeMethod_var), /*hidden argument*/Callback_1__ctor_mB95DE5AEEF4F5545BD12F6A0138E08844616D493_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_10;
		L_10 = NaturalLanguageUnderstandingService_DeleteModel_m412AF22AFEF46418B8B1CE74A920D8C0E7A28277(L_7, L_9, _stringLiteralBD04C2F82BBCD35549793B3BD9B41FAEC8020E6D, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0059:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0069:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0070:
	{
		// while (deleteModelResponse == null)
		U3CU3Ec__DisplayClass9_0_tC16EDC447CED210D4488490029E3D45D68DE39C7 * L_11 = __this->get_U3CU3E8__1_3();
		NullCheck(L_11);
		DeleteModelResults_tD4AC5B120409319BE0294CA6AF1FBE7397359ED2 * L_12 = L_11->get_deleteModelResponse_0();
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleDeleteModelU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5748B68C9B5C0A41388E224248F1389D1616D33C (U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleDeleteModelU3Ed__9_System_Collections_IEnumerator_Reset_m2A7EB8E1C2AAA6424604225B942164AF60D44229 (U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExampleDeleteModelU3Ed__9_System_Collections_IEnumerator_Reset_m2A7EB8E1C2AAA6424604225B942164AF60D44229_RuntimeMethod_var)));
	}
}
// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleDeleteModel>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleDeleteModelU3Ed__9_System_Collections_IEnumerator_get_Current_mAC7545B7FACA08E4D1C7E411E976B89B66D42849 (U3CExampleDeleteModelU3Ed__9_t08701F6617ACDA43CE1FADE23CA90C0EFF7A944B * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleListModelsU3Ed__8__ctor_m0FF5EC524B45616213AA4A7F14CCE94399937A0D (U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleListModelsU3Ed__8_System_IDisposable_Dispose_m00065FAAA3B35F07763F45489DDE177C8E3404D3 (U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExampleListModelsU3Ed__8_MoveNext_m636E9F95C11B6B17A34826C6B87AC851C89510F7 (U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1__ctor_m97E120863B140D33CBE7ECC47999C6DDBB70D0FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CExampleListModelsU3Eb__0_m9F676A49C4C01A36733671CEDE1BEA52D385639A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0064;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * L_4 = (U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_mF8EAFB11B9A6191C1D6CC65FDF75F14F6FB36835(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_3(L_4);
		// ListModelsResults listModelsResponse = null;
		U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * L_5 = __this->get_U3CU3E8__1_3();
		NullCheck(L_5);
		L_5->set_listModelsResponse_0((ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 *)NULL);
		// service.ListModels(
		//     callback: (DetailedResponse<ListModelsResults> response, IBMError error) =>
		//     {
		//         Log.Debug("NaturalLanguageUnderstandingServiceV1", "ListModels result: {0}", response.Response);
		//         listModelsResponse = response.Result;
		//     }
		// );
		ExampleNaturalLanguageUnderstandingV1_t57C5F45762765A2CF7DE61F79544D5F68F57587E * L_6 = V_1;
		NullCheck(L_6);
		NaturalLanguageUnderstandingService_t6CA7C97F59291D164392C86DD52F55C64EAED6D2 * L_7 = L_6->get_service_7();
		U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * L_8 = __this->get_U3CU3E8__1_3();
		Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E * L_9 = (Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E *)il2cpp_codegen_object_new(Callback_1_t4C0F87B88EBA23808E345243C72BB04712C1D82E_il2cpp_TypeInfo_var);
		Callback_1__ctor_m97E120863B140D33CBE7ECC47999C6DDBB70D0FA(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CExampleListModelsU3Eb__0_m9F676A49C4C01A36733671CEDE1BEA52D385639A_RuntimeMethod_var), /*hidden argument*/Callback_1__ctor_m97E120863B140D33CBE7ECC47999C6DDBB70D0FA_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_10;
		L_10 = NaturalLanguageUnderstandingService_ListModels_m45EA888A626F489EA48A667A0CE018AFBBFBE77C(L_7, L_9, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_0054:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0064:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006b:
	{
		// while (listModelsResponse == null)
		U3CU3Ec__DisplayClass8_0_t59F89DC5887ED4F9EAC5914D617529192DD57161 * L_11 = __this->get_U3CU3E8__1_3();
		NullCheck(L_11);
		ListModelsResults_t0E18EBB98B16206BAD7B73A30DF7FAFA334AA622 * L_12 = L_11->get_listModelsResponse_0();
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleListModelsU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m474C71F7B1C46E4A77A2540F9E0ED294A9A18B22 (U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleListModelsU3Ed__8_System_Collections_IEnumerator_Reset_mE48C8E7D55A639BB7FF7D91D008E7EB81641E713 (U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExampleListModelsU3Ed__8_System_Collections_IEnumerator_Reset_mE48C8E7D55A639BB7FF7D91D008E7EB81641E713_RuntimeMethod_var)));
	}
}
// System.Object IBM.Watson.Examples.ExampleNaturalLanguageUnderstandingV1/<ExampleListModels>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleListModelsU3Ed__8_System_Collections_IEnumerator_get_Current_m2C4EEC2F8A730194C7ECDA5EE1DA4538E8940673 (U3CExampleListModelsU3Ed__8_t654555E483A70828B2A65A5E463C353D7D8CAB7C * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateServiceU3Ed__11__ctor_m788D786F651772247119010ACD5031F9E839ABD4 (U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateServiceU3Ed__11_System_IDisposable_Dispose_m27F23C5E0D8B7CCEA2FD04685D54A0B6A3ADF837 (U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateServiceU3Ed__11_MoveNext_mA5B833F7DA549E323EF56CAB12DE9AF469EFC4B2 (U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * V_1 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (string.IsNullOrEmpty(_iamApikey))
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get__iamApikey_6();
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// throw new IBMException("Plesae provide IAM ApiKey for the service.");
		IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387 * L_7 = (IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387_il2cpp_TypeInfo_var)));
		IBMException__ctor_m3ABCF17B8414F2DBD04253612A8419B74835B5C0(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF60CDBEE2DA2C9FB8157958A4F53F332B2EEE3F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateServiceU3Ed__11_MoveNext_mA5B833F7DA549E323EF56CAB12DE9AF469EFC4B2_RuntimeMethod_var)));
	}

IL_0036:
	{
		// IamAuthenticator authenticator = new IamAuthenticator(apikey: _iamApikey);
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->get__iamApikey_6();
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_10 = V_2;
		IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * L_11 = (IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B *)il2cpp_codegen_object_new(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B_il2cpp_TypeInfo_var);
		IamAuthenticator__ctor_mCAFEFC85D0ADA4F11D47059F4F868A6E9B064741(L_11, L_9, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, L_10, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, /*hidden argument*/NULL);
		__this->set_U3CauthenticatorU3E5__2_3(L_11);
		goto IL_006d;
	}

IL_0056:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006d:
	{
		// while (!authenticator.CanAuthenticate())
		IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * L_12 = __this->get_U3CauthenticatorU3E5__2_3();
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean IBM.Cloud.SDK.Authentication.Authenticator::CanAuthenticate() */, L_12);
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		// _service = new SpeechToTextService(authenticator);
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_14 = V_1;
		IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * L_15 = __this->get_U3CauthenticatorU3E5__2_3();
		SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * L_16 = (SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 *)il2cpp_codegen_object_new(SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2_il2cpp_TypeInfo_var);
		SpeechToTextService__ctor_m82294B308266725E35FCAC87FA963B91C1D60D21(L_16, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set__service_13(L_16);
		// if (!string.IsNullOrEmpty(_serviceUrl))
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = L_17->get__serviceUrl_4();
		bool L_19;
		L_19 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		// _service.SetServiceUrl(_serviceUrl);
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_20 = V_1;
		NullCheck(L_20);
		SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * L_21 = L_20->get__service_13();
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_22 = V_1;
		NullCheck(L_22);
		String_t* L_23 = L_22->get__serviceUrl_4();
		NullCheck(L_21);
		BaseService_SetServiceUrl_mD827E4AE1B3B14A8D1DC44E0DF1C04D77605CDC9(L_21, L_23, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// _service.StreamMultipart = true;
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_24 = V_1;
		NullCheck(L_24);
		SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * L_25 = L_24->get__service_13();
		NullCheck(L_25);
		SpeechToTextService_set_StreamMultipart_m392A8264D8239D4356513E054A032170C11A88E8_inline(L_25, (bool)1, /*hidden argument*/NULL);
		// Active = true;
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_26 = V_1;
		NullCheck(L_26);
		ExampleStreaming_set_Active_m4764B936EA418AE3028735BFF40B72638CC95650(L_26, (bool)1, /*hidden argument*/NULL);
		// StartRecording();
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_27 = V_1;
		NullCheck(L_27);
		ExampleStreaming_StartRecording_mFE933BB9DC8D1108AEBFB002D758499BA674517A(L_27, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateServiceU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m73DDE5A4BED88AE418E0B4C7D70961FAB3A56C94 (U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateServiceU3Ed__11_System_Collections_IEnumerator_Reset_mE37473E93FE209113B58389EEA2885307CDB37E9 (U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateServiceU3Ed__11_System_Collections_IEnumerator_Reset_mE37473E93FE209113B58389EEA2885307CDB37E9_RuntimeMethod_var)));
	}
}
// System.Object IBM.Watsson.Examples.ExampleStreaming/<CreateService>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateServiceU3Ed__11_System_Collections_IEnumerator_get_Current_m7A088317E77EC3CA3306FDE517112C3AC4B4655E (U3CCreateServiceU3Ed__11_t68BA8583A0246E69488A983653770940CD385E0D * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordingHandlerU3Ed__18__ctor_mB702A9EBA6C64254BC74C452038F07289D687FAA (U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordingHandlerU3Ed__18_System_IDisposable_Dispose_m7E56CD08A2FC2C42DC25C4DEA2EFC7036D322581 (U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRecordingHandlerU3Ed__18_MoveNext_mACF4421D502A93A3ADBDC7D349F47D493DBC8869 (U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F1A0CCD93E4274B3E92C31DB91F64F071DF1D01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2317EE7E961FD756F4EA1E591187F37C849CD9DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C6BB9BA0C2E915ADCDD9AE2510014A5A98F5B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFCEFF603839CE43FDF4D590D592E42055E8B4A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * V_1 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_3 = NULL;
	int32_t V_4 = 0;
	AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * V_5 = NULL;
	float V_6 = 0.0f;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B15_0 = NULL;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * G_B15_1 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B14_0 = NULL;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B16_1 = NULL;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * G_B16_2 = NULL;
	int32_t G_B20_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_006d;
			}
			case 2:
			{
				goto IL_0201;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Log.Debug("ExampleStreaming.RecordingHandler()", "devices: {0}", Microphone.devices);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		V_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_3;
		Log_Debug_m87EF25C5B8AEC7DCB5377F2D6C20F6AE29C1EB6E(_stringLiteral2317EE7E961FD756F4EA1E591187F37C849CD9DC, _stringLiteral3C6BB9BA0C2E915ADCDD9AE2510014A5A98F5B74, L_4, /*hidden argument*/NULL);
		// _recording = Microphone.Start(_microphoneID, true, _recordingBufferSize, _recordingHZ);
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_5 = V_1;
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->get__microphoneID_9();
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get__recordingBufferSize_11();
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get__recordingHZ_12();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_12;
		L_12 = Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D(L_7, (bool)1, L_9, L_11, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set__recording_10(L_12);
		// yield return null;      // let _recordingRoutine get set..
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_recording == null)
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_13 = V_1;
		NullCheck(L_13);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_14 = L_13->get__recording_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		// StopRecording();
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_16 = V_1;
		NullCheck(L_16);
		ExampleStreaming_StopRecording_m545AB403A7BD9F3CCAF36110100FC64A0ED53522(L_16, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_008a:
	{
		// bool bFirstBlock = true;
		__this->set_U3CbFirstBlockU3E5__2_3((bool)1);
		// int midPoint = _recording.samples / 2;
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_17 = V_1;
		NullCheck(L_17);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18 = L_17->get__recording_10();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_18, /*hidden argument*/NULL);
		__this->set_U3CmidPointU3E5__3_4(((int32_t)((int32_t)L_19/(int32_t)2)));
		// float[] samples = null;
		V_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL;
		goto IL_0208;
	}

IL_00ab:
	{
		// int writePos = Microphone.GetPosition(_microphoneID);
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = L_20->get__microphoneID_9();
		int32_t L_22;
		L_22 = Microphone_GetPosition_m7D0A6CF146C1F716F0DF886223B119279DE1E587(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		// if (writePos > _recording.samples || !Microphone.IsRecording(_microphoneID))
		int32_t L_23 = V_4;
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_24 = V_1;
		NullCheck(L_24);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_25 = L_24->get__recording_10();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_23) > ((int32_t)L_26)))
		{
			goto IL_00d4;
		}
	}
	{
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28 = L_27->get__microphoneID_9();
		bool L_29;
		L_29 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f0;
		}
	}

IL_00d4:
	{
		// Log.Error("ExampleStreaming.RecordingHandler()", "Microphone disconnected.");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30;
		L_30 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		Log_Error_m30E65F9D31647F73E862281C6061258C5299A789(_stringLiteral2317EE7E961FD756F4EA1E591187F37C849CD9DC, _stringLiteral0F1A0CCD93E4274B3E92C31DB91F64F071DF1D01, L_30, /*hidden argument*/NULL);
		// StopRecording();
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_31 = V_1;
		NullCheck(L_31);
		ExampleStreaming_StopRecording_m545AB403A7BD9F3CCAF36110100FC64A0ED53522(L_31, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_00f0:
	{
		// if ((bFirstBlock && writePos >= midPoint)
		//   || (!bFirstBlock && writePos < midPoint))
		bool L_32 = __this->get_U3CbFirstBlockU3E5__2_3();
		if (!L_32)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_33 = V_4;
		int32_t L_34 = __this->get_U3CmidPointU3E5__3_4();
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_011a;
		}
	}

IL_0102:
	{
		bool L_35 = __this->get_U3CbFirstBlockU3E5__2_3();
		if (L_35)
		{
			goto IL_01bf;
		}
	}
	{
		int32_t L_36 = V_4;
		int32_t L_37 = __this->get_U3CmidPointU3E5__3_4();
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_01bf;
		}
	}

IL_011a:
	{
		// samples = new float[midPoint];
		int32_t L_38 = __this->get_U3CmidPointU3E5__3_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_39 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_2 = L_39;
		// _recording.GetData(samples, bFirstBlock ? 0 : midPoint);
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_40 = V_1;
		NullCheck(L_40);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_41 = L_40->get__recording_10();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = V_2;
		bool L_43 = __this->get_U3CbFirstBlockU3E5__2_3();
		G_B14_0 = L_42;
		G_B14_1 = L_41;
		if (L_43)
		{
			G_B15_0 = L_42;
			G_B15_1 = L_41;
			goto IL_013d;
		}
	}
	{
		int32_t L_44 = __this->get_U3CmidPointU3E5__3_4();
		G_B16_0 = L_44;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_013e;
	}

IL_013d:
	{
		G_B16_0 = 0;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_013e:
	{
		NullCheck(G_B16_2);
		bool L_45;
		L_45 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(G_B16_2, G_B16_1, G_B16_0, /*hidden argument*/NULL);
		// AudioData record = new AudioData();
		AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * L_46 = (AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E *)il2cpp_codegen_object_new(AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E_il2cpp_TypeInfo_var);
		AudioData__ctor_mB44622F7D263EECE2C43C88C447F8AA5BE7A2904(L_46, /*hidden argument*/NULL);
		V_5 = L_46;
		// record.MaxLevel = Mathf.Max(Mathf.Abs(Mathf.Min(samples)), Mathf.Max(samples));
		AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * L_47 = V_5;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_48 = V_2;
		float L_49;
		L_49 = Mathf_Min_mBFD6E1F7B1716EB3113CDEA310FA42D8968E16AF(L_48, /*hidden argument*/NULL);
		float L_50;
		L_50 = fabsf(L_49);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_51 = V_2;
		float L_52;
		L_52 = Mathf_Max_mF4D4C83FF7655E1D027E2D445280E72000958E2C(L_51, /*hidden argument*/NULL);
		float L_53;
		L_53 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_50, L_52, /*hidden argument*/NULL);
		NullCheck(L_47);
		AudioData_set_MaxLevel_m6C73B457D28FD78AB59A5C36A2AEFA2267BC9D26_inline(L_47, L_53, /*hidden argument*/NULL);
		// record.Clip = AudioClip.Create("Recording", midPoint, _recording.channels, _recordingHZ, false);
		AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * L_54 = V_5;
		int32_t L_55 = __this->get_U3CmidPointU3E5__3_4();
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_56 = V_1;
		NullCheck(L_56);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_57 = L_56->get__recording_10();
		NullCheck(L_57);
		int32_t L_58;
		L_58 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_57, /*hidden argument*/NULL);
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = L_59->get__recordingHZ_12();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_61;
		L_61 = AudioClip_Create_m889DC46878E297CE089D4182F5FCDC4961529137(_stringLiteralDFCEFF603839CE43FDF4D590D592E42055E8B4A2, L_55, L_58, L_60, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_54);
		AudioData_set_Clip_m54312E832F721C0692A2DA47E7CC59C23B41B6DB_inline(L_54, L_61, /*hidden argument*/NULL);
		// record.Clip.SetData(samples, 0);
		AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * L_62 = V_5;
		NullCheck(L_62);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_63;
		L_63 = AudioData_get_Clip_mCF946CEC39D6E1A41AC391BD820D67328FDCA581_inline(L_62, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_64 = V_2;
		NullCheck(L_63);
		bool L_65;
		L_65 = AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7(L_63, L_64, 0, /*hidden argument*/NULL);
		// _service.OnListen(record);
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_66 = V_1;
		NullCheck(L_66);
		SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * L_67 = L_66->get__service_13();
		AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * L_68 = V_5;
		NullCheck(L_67);
		bool L_69;
		L_69 = SpeechToTextService_OnListen_m8ABBF4C35793069F0C81CE467284C31A14F8E641(L_67, L_68, /*hidden argument*/NULL);
		// bFirstBlock = !bFirstBlock;
		bool L_70 = __this->get_U3CbFirstBlockU3E5__2_3();
		__this->set_U3CbFirstBlockU3E5__2_3((bool)((((int32_t)L_70) == ((int32_t)0))? 1 : 0));
		// }
		goto IL_0208;
	}

IL_01bf:
	{
		// int remaining = bFirstBlock ? (midPoint - writePos) : (_recording.samples - writePos);
		bool L_71 = __this->get_U3CbFirstBlockU3E5__2_3();
		if (L_71)
		{
			goto IL_01d7;
		}
	}
	{
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_72 = V_1;
		NullCheck(L_72);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_73 = L_72->get__recording_10();
		NullCheck(L_73);
		int32_t L_74;
		L_74 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_73, /*hidden argument*/NULL);
		int32_t L_75 = V_4;
		G_B20_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)L_75));
		goto IL_01e0;
	}

IL_01d7:
	{
		int32_t L_76 = __this->get_U3CmidPointU3E5__3_4();
		int32_t L_77 = V_4;
		G_B20_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)L_77));
	}

IL_01e0:
	{
		// float timeRemaining = (float)remaining / (float)_recordingHZ;
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_78 = V_1;
		NullCheck(L_78);
		int32_t L_79 = L_78->get__recordingHZ_12();
		V_6 = ((float)((float)((float)((float)G_B20_0))/(float)((float)((float)L_79))));
		// yield return new WaitForSeconds(timeRemaining);
		float L_80 = V_6;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_81 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_81, L_80, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_81);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0201:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0208:
	{
		// while (_recordingRoutine != 0 && _recording != null)
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_82 = V_1;
		NullCheck(L_82);
		int32_t L_83 = L_82->get__recordingRoutine_8();
		if (!L_83)
		{
			goto IL_0221;
		}
	}
	{
		ExampleStreaming_t3B11D5802F374F5D0D4C50B53A2C757C6E7B95D9 * L_84 = V_1;
		NullCheck(L_84);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_85 = L_84->get__recording_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_85, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_86)
		{
			goto IL_00ab;
		}
	}

IL_0221:
	{
		// yield break;
		return (bool)0;
	}
}
// System.Object IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRecordingHandlerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB1B054DC3A69BA2255EA26E1AC1557E6E7197E63 (U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordingHandlerU3Ed__18_System_Collections_IEnumerator_Reset_m32315E16DAEBC90B42CC88EB2CA479C18A5C4322 (U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRecordingHandlerU3Ed__18_System_Collections_IEnumerator_Reset_m32315E16DAEBC90B42CC88EB2CA479C18A5C4322_RuntimeMethod_var)));
	}
}
// System.Object IBM.Watsson.Examples.ExampleStreaming/<RecordingHandler>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRecordingHandlerU3Ed__18_System_Collections_IEnumerator_get_Current_mA03B649927F29C1819BB099C7C22CFE574912E13 (U3CRecordingHandlerU3Ed__18_t7B5A91B19D4DF41059E6FC124F1E2642C81F2590 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m94EC35904A5C0C8A34CDFFF8065D06E57048D3D8 (U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1/<>c__DisplayClass15_0::<ExampleSynthesize>b__0(IBM.Cloud.SDK.DetailedResponse`1<System.Byte[]>,IBM.Cloud.SDK.IBMError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CExampleSynthesizeU3Eb__0_mE6CE83ACC2D9D497A12381A2C3B9F21DB7A60640 (U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * __this, DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358 * ___response0, IBMError_tBBADBA6FCBA7177C5DA8E430BC47C3DCA3365239 * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailedResponse_1_get_Result_mC8254063F1CD13EE4DA37AC716EB3C42B5D98C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral361C5ABC5C4E4011168E599A78F739519F27A0FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6B130AE780E09114E62267E8D008821771FC4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3F70F109FD9DE1923ADBF56A0AB04A7577E5DE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// synthesizeResponse = response.Result;
		DetailedResponse_1_t65CA0DF3E113E2772EAA10C6B7F7AEBC650EA358 * L_0 = ___response0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = DetailedResponse_1_get_Result_mC8254063F1CD13EE4DA37AC716EB3C42B5D98C45_inline(L_0, /*hidden argument*/DetailedResponse_1_get_Result_mC8254063F1CD13EE4DA37AC716EB3C42B5D98C45_RuntimeMethod_var);
		__this->set_synthesizeResponse_0(L_1);
		// Log.Debug("ExampleTextToSpeechV1", "Synthesize done!");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		Log_Debug_m87EF25C5B8AEC7DCB5377F2D6C20F6AE29C1EB6E(_stringLiteral361C5ABC5C4E4011168E599A78F739519F27A0FF, _stringLiteralE3F70F109FD9DE1923ADBF56A0AB04A7577E5DE2, L_2, /*hidden argument*/NULL);
		// clip = WaveFile.ParseWAV("myClip", synthesizeResponse);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_synthesizeResponse_0();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4;
		L_4 = WaveFile_ParseWAV_m8BD23C76C90CBFAD65483A163EDB3AC2EC19A92A(_stringLiteralDD6B130AE780E09114E62267E8D008821771FC4F, L_3, /*hidden argument*/NULL);
		__this->set_clip_1(L_4);
		// PlayClip(clip);
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_5 = __this->get_U3CU3E4__this_2();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = __this->get_clip_1();
		NullCheck(L_5);
		ExampleTextToSpeechV1_PlayClip_m0EEA8707690D3471D0AEC2E282B28872431A349D(L_5, L_6, /*hidden argument*/NULL);
		// },
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
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateServiceU3Ed__14__ctor_m81A84B99C2FF43C2CD27034E64478D254AD705E4 (U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateServiceU3Ed__14_System_IDisposable_Dispose_m1AAC7C1FCB4B9202CF35863BB47292D4B71EA25E (U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateServiceU3Ed__14_MoveNext_m6C13EF253DB9D57B0D7DAA0F075DA85F09A105E2 (U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * V_1 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (string.IsNullOrEmpty(iamApikey))
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_iamApikey_4();
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// throw new IBMException("Please add IAM ApiKey to the Iam Apikey field in the inspector.");
		IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387 * L_7 = (IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IBMException_t6A95DEB493A2FDD141C01F1E51F22BABF7333387_il2cpp_TypeInfo_var)));
		IBMException__ctor_m3ABCF17B8414F2DBD04253612A8419B74835B5C0(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79AF0021328FC2816B1B53EA85744E7798B2B7EA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateServiceU3Ed__14_MoveNext_m6C13EF253DB9D57B0D7DAA0F075DA85F09A105E2_RuntimeMethod_var)));
	}

IL_0036:
	{
		// IamAuthenticator authenticator = new IamAuthenticator(apikey: iamApikey);
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_iamApikey_4();
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_10 = V_2;
		IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * L_11 = (IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B *)il2cpp_codegen_object_new(IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B_il2cpp_TypeInfo_var);
		IamAuthenticator__ctor_mCAFEFC85D0ADA4F11D47059F4F868A6E9B064741(L_11, L_9, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, L_10, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, /*hidden argument*/NULL);
		__this->set_U3CauthenticatorU3E5__2_3(L_11);
		goto IL_006d;
	}

IL_0056:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006d:
	{
		// while (!authenticator.CanAuthenticate())
		IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * L_12 = __this->get_U3CauthenticatorU3E5__2_3();
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean IBM.Cloud.SDK.Authentication.Authenticator::CanAuthenticate() */, L_12);
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		// service = new TextToSpeechService(authenticator);
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_14 = V_1;
		IamAuthenticator_t650E3DC25BA50636336FED5E0F549A3F52C1109B * L_15 = __this->get_U3CauthenticatorU3E5__2_3();
		TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 * L_16 = (TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 *)il2cpp_codegen_object_new(TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9_il2cpp_TypeInfo_var);
		TextToSpeechService__ctor_m7B545A3BAB2F271609C2A0E6937240163BDBC284(L_16, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_service_6(L_16);
		// if (!string.IsNullOrEmpty(serviceUrl))
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_serviceUrl_5();
		bool L_19;
		L_19 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		// service.SetServiceUrl(serviceUrl);
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_20 = V_1;
		NullCheck(L_20);
		TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 * L_21 = L_20->get_service_6();
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_22 = V_1;
		NullCheck(L_22);
		String_t* L_23 = L_22->get_serviceUrl_5();
		NullCheck(L_21);
		BaseService_SetServiceUrl_mD827E4AE1B3B14A8D1DC44E0DF1C04D77605CDC9(L_21, L_23, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// }
		return (bool)0;
	}
}
// System.Object IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateServiceU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m50B1D989BFD60779E050AE685656B70232467CF0 (U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateServiceU3Ed__14_System_Collections_IEnumerator_Reset_m67A95BD9D91B4CF2A75BBE1C877E2C0403775C83 (U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateServiceU3Ed__14_System_Collections_IEnumerator_Reset_m67A95BD9D91B4CF2A75BBE1C877E2C0403775C83_RuntimeMethod_var)));
	}
}
// System.Object IBM.Watson.Examples.ExampleTextToSpeechV1/<CreateService>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateServiceU3Ed__14_System_Collections_IEnumerator_get_Current_m771D0DAF2C413880967D9E9F779F32E984A647A6 (U3CCreateServiceU3Ed__14_tC003A8D1C5AB3C7C74BE4980759632698289C58F * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleSynthesizeU3Ed__15__ctor_m6004F5BB1670545E12C287A18BC6E9C00EBC4022 (U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleSynthesizeU3Ed__15_System_IDisposable_Dispose_m8E0A5DA960526473F5387C9E80169CAF08230BA5 (U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExampleSynthesizeU3Ed__15_MoveNext_m7741B06CD745D5951F9497433243228801BD37E4 (U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1__ctor_m83DF4CCF1FD338C090DAA8BC761A6B30FA5FE811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CExampleSynthesizeU3Eb__0_mE6CE83ACC2D9D497A12381A2C3B9F21DB7A60640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral361C5ABC5C4E4011168E599A78F739519F27A0FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral728EED72E5625324F0DE017B5D94F3A941CDA85B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_00ce;
			}
			case 2:
			{
				goto IL_0106;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * L_3 = (U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15_0__ctor_m94EC35904A5C0C8A34CDFFF8065D06E57048D3D8(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_4(L_3);
		U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * L_4 = __this->get_U3CU3E8__1_4();
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_2(L_5);
		// if (string.IsNullOrEmpty(text))
		String_t* L_6 = __this->get_text_3();
		bool L_7;
		L_7 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		// text = synthesizeText;
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_synthesizeText_8();
		__this->set_text_3(L_9);
		// Log.Debug("ExampleTextToSpeechV1", "Using default text, please enter your own text in dialog box!");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10;
		L_10 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		Log_Debug_m87EF25C5B8AEC7DCB5377F2D6C20F6AE29C1EB6E(_stringLiteral361C5ABC5C4E4011168E599A78F739519F27A0FF, _stringLiteral728EED72E5625324F0DE017B5D94F3A941CDA85B, L_10, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// byte[] synthesizeResponse = null;
		U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * L_11 = __this->get_U3CU3E8__1_4();
		NullCheck(L_11);
		L_11->set_synthesizeResponse_0((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		// AudioClip clip = null;
		U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * L_12 = __this->get_U3CU3E8__1_4();
		NullCheck(L_12);
		L_12->set_clip_1((AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
		// service.Synthesize(
		//     callback: (DetailedResponse<byte[]> response, IBMError error) =>
		//     {
		//         synthesizeResponse = response.Result;
		//         Log.Debug("ExampleTextToSpeechV1", "Synthesize done!");
		//         clip = WaveFile.ParseWAV("myClip", synthesizeResponse);
		//         PlayClip(clip);
		//     },
		//     text: text,
		//     voice: allisionVoice,
		//     accept: synthesizeMimeType
		// );
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_13 = V_1;
		NullCheck(L_13);
		TextToSpeechService_tFEFCA133175ACFC56396C3503A9C5DC730671ED9 * L_14 = L_13->get_service_6();
		U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * L_15 = __this->get_U3CU3E8__1_4();
		Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD * L_16 = (Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD *)il2cpp_codegen_object_new(Callback_1_tFF6AF70A1E53D70C9921F796B4921E18DF49C2FD_il2cpp_TypeInfo_var);
		Callback_1__ctor_m83DF4CCF1FD338C090DAA8BC761A6B30FA5FE811(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass15_0_U3CExampleSynthesizeU3Eb__0_mE6CE83ACC2D9D497A12381A2C3B9F21DB7A60640_RuntimeMethod_var), /*hidden argument*/Callback_1__ctor_m83DF4CCF1FD338C090DAA8BC761A6B30FA5FE811_RuntimeMethod_var);
		String_t* L_17 = __this->get_text_3();
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_allisionVoice_7();
		V_2 = L_19;
		ExampleTextToSpeechV1_tB85C461B5DD7C1DCBB7E091D71AB9357747BD605 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_synthesizeMimeType_11();
		String_t* L_22 = V_2;
		NullCheck(L_14);
		bool L_23;
		L_23 = TextToSpeechService_Synthesize_m0FDF5F5242347279625ECEE5DD4F971EFE16F13F(L_14, L_16, L_17, L_21, L_22, (String_t*)NULL, /*hidden argument*/NULL);
		goto IL_00d5;
	}

IL_00be:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ce:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00d5:
	{
		// while (synthesizeResponse == null)
		U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * L_24 = __this->get_U3CU3E8__1_4();
		NullCheck(L_24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = L_24->get_synthesizeResponse_0();
		if (!L_25)
		{
			goto IL_00be;
		}
	}
	{
		// yield return new WaitForSeconds(clip.length);
		U3CU3Ec__DisplayClass15_0_t6738FA7534A51AC018AAE075C0214D84CAD3891C * L_26 = __this->get_U3CU3E8__1_4();
		NullCheck(L_26);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_27 = L_26->get_clip_1();
		NullCheck(L_27);
		float L_28;
		L_28 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_27, /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_29 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_29, L_28, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_29);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0106:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleSynthesizeU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m85BE6650ECC39DE2D7259F84D071C5779CCBC6FA (U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExampleSynthesizeU3Ed__15_System_Collections_IEnumerator_Reset_m3D5F0530A8339C63AAA4CC0D55ED98B28DB4CF3C (U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExampleSynthesizeU3Ed__15_System_Collections_IEnumerator_Reset_m3D5F0530A8339C63AAA4CC0D55ED98B28DB4CF3C_RuntimeMethod_var)));
	}
}
// System.Object IBM.Watson.Examples.ExampleTextToSpeechV1/<ExampleSynthesize>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExampleSynthesizeU3Ed__15_System_Collections_IEnumerator_get_Current_m7ED204A1FD1B469FBCB00E84397E4203E10DB3DF (U3CExampleSynthesizeU3Ed__15_tEC11623D73ED0A17AE4B7322A033F494A3126938 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.Field/TypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValue__ctor_m3A2DF3E3E1A74C08B44490D04E80360E6DA2C457 (TypeValue_t4FBA34070043325F105F484FFB4D20D4393933F1 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V2.Model.Field/TypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValue__ctor_m1DAA67AFE24EE704BBF6BEFE0F7DB728A8984C24 (TypeValue_t3C684970A7C037D33C99CE7A3AAA4D3A7606FF16 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.Gateway/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_mFC5209E7867F531B97428D8319AE12CDEC7FEB55 (StatusValue_t65CEEA3097C476EF1954BECA8EBDC9C9ED62E61E * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.SpeechToText.V1.Model.Grammar/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_m175263A33D9254309EABCE493F1546A04E367677 (StatusValue_t1997AD6C86A76E41B790274D9986E4CACF20DE13 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.SpeechToText.V1.Model.LanguageModel/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_m7B93FEE96C5A0E942B8640FF717D03668A280C25 (StatusValue_t5600E311148712D7752C411664EC7A2C964F679B * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.LogMessage/LevelValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelValue__ctor_mC3AB4C946C5A1F3A6D340BB5DB30701C9335EEDC (LevelValue_t612EB3196E55FDA33BDE07B9617C30D935F985B5 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.LogMessageSource/TypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValue__ctor_mA9470722864D0BAD9D51CE52A4D24131EB374DC8 (TypeValue_t0AAF0BA8BFCB7568B02573F83A6D943FDDB1FEE5 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.LogQueryResponseResult/DocumentTypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentTypeValue__ctor_mDD71E439BBC7BA24C484E676460416DE9642969D (DocumentTypeValue_tC93A052414D19097F71FBAA0BD307E602F0090AC * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.LogQueryResponseResult/EventTypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTypeValue__ctor_mE64EE1E1542516B7DFDC361488301CA1E0A597EF (EventTypeValue_t80FE04D6C3BA41AC47AD57F6D8ACF4F4A9F1E7A1 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.LogQueryResponseResult/ResultTypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultTypeValue__ctor_mAA2F5A2D81440BBC3D5998050376640F45247B85 (ResultTypeValue_t45770152AE0FC4B3D85BE6D9F3712FB119520852 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V2.Model.MessageContextGlobalSystem/LocaleValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocaleValue__ctor_m9CCF0A01056C8B47678BECE1FD681DEEF7A5813B (LocaleValue_t2D13E6A6FD49B3392E51BE08FF14062301FB0D00 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V2.Model.MessageInput/MessageTypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeValue__ctor_m214DFD24F8848AF9C410D4BCC82F74B94F6132CC (MessageTypeValue_t3A88DC437649B5992FBCABE7D6D2D3BB2208F7B1 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V2.Model.MessageInputStateless/MessageTypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeValue__ctor_m438AB270E81132B2A2F5748EF5386388C3C1DE6E (MessageTypeValue_t5AD62ADDDCD6905CE4E9A33901DDA3AF1E85A074 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V2.Model.MessageOutputDebug/BranchExitedReasonValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BranchExitedReasonValue__ctor_m93FB88237F10B093207679BBDB8D43B970EB8F99 (BranchExitedReasonValue_t9993BB123C065777F21FF45794BC502AE2691674 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.NaturalLanguageUnderstanding.V1.Model.Model/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_mBE4FA3D5764353D0D307816D0DB96AB505FDF615 (StatusValue_t12A452C779A5DD367BD03013CE74DBFEAF87B2B3 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.ModelCredentials/SourceTypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceTypeValue__ctor_m0FF103831018133D112BB521D72C0AD2C5CA1877 (SourceTypeValue_t347314EFF083FC50D954BA3A842A2904237F5005 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.ModelEnvironment/SizeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeValue__ctor_mFDF66A3E4962074CA58AEB747FDBE7A55DAF0604 (SizeValue_tA2B997CC9B30D497D289585164ADF4680AB74450 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.ModelEnvironment/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_m53236F01C25F2BC564999E38C485128A2AAA6AA9 (StatusValue_t3A6C3096E0221C4CCFCD929D5EFDC5C76DAB2744 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.NormalizationOperation/OperationValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationValue__ctor_m70E1218AD8B15316D51260777B7D5C7A1AC84ABA (OperationValue_t6505774C0536FFA5DDFC4B69CC9B3E6FECD9EE57 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.Notice/SeverityValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeverityValue__ctor_m418F3DE0A4C811D76CF246ADEF517EA2B6ED9158 (SeverityValue_tAEDF069F59F242DA8A3CF0D561AA236B7339154B * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V2.Model.Notice/SeverityValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeverityValue__ctor_m9140F3483815F6D1B487D78621473D175D5E8BA7 (SeverityValue_t28F9070A985D3B75D78C78DE13E2E509765CEE30 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V2.Model.ProjectDetails/TypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValue__ctor_mEF3B9B34A5D467A2A1B12A6EE254FD74C893F753 (TypeValue_t603C3F2055EBFE34FE3C1C4BE76E3CB8CAD075E5 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V2.Model.ProjectListDetails/TypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValue__ctor_m01D6AA9AF69FAE57A15F796B3147FE42811308A3 (TypeValue_t52E7D70963067840176277EE623DD69E5A71AB9E * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.QueryNoticesResult/FileTypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileTypeValue__ctor_mA5606D3FC5ADEF66E32761C79D3BC096B71BF551 (FileTypeValue_tB318E0D02E194995AA6286FF3095ABD413B874AD * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V2.Model.QueryResultMetadata/DocumentRetrievalSourceValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentRetrievalSourceValue__ctor_m1F48E75112CC8271B9087E62DE961601FB3DA565 (DocumentRetrievalSourceValue_t40574470DB2941DF2DB14C3C0DE8E7B84C5D81F2 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.SpeechToText.V1.Model.RecognitionJob/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_mA7B467D2030C423AB04DA1EAE0ED7668FFFA99F1 (StatusValue_t3CBFD4996CFF9DBF2FDAD04D6185009E200918FB * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.SpeechToText.V1.Model.RegisterStatus/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_mCFE91E46B4C557389A116C1D6A60DB5F97C6C40D (StatusValue_t6EDA31CB0581AC916ADCCB49406A6784C5A1DCE3 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.ResponseGenericChannel/ChannelValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelValue__ctor_mCF89AC82FFA47FB76B6451D08D00D6CC75345811 (ChannelValue_t887487A1641E8164361FCC2F6E7C2BB5F1ECDCA9 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.RetrievalDetails/DocumentRetrievalStrategyValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentRetrievalStrategyValue__ctor_mC2E2890018293B17D8BC65966272F3B48D529F93 (DocumentRetrievalStrategyValue_tB308A345432938839434F7FE353B4BB6941A7833 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V2.Model.RetrievalDetails/DocumentRetrievalStrategyValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentRetrievalStrategyValue__ctor_m5A0141CBF2C45A5E248CA450E2843465EE23E9CC (DocumentRetrievalStrategyValue_t5CFAA9AFDB872E5858E2A7FDF08EE27EEC3172E7 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.RuntimeEntityInterpretation/GranularityValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GranularityValue__ctor_m11DC980553954287566D092CFF30691B63F44C7A (GranularityValue_t11D747643E9C76ABF034E9998E4AB125C11598E6 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V2.Model.RuntimeEntityInterpretation/GranularityValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GranularityValue__ctor_mDFB697DC18EF8CDDD0F648339F7B841C0CFDC105 (GranularityValue_t554E2DD9C413E9703112330C32E77F72413628BA * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.RuntimeEntityRole/TypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValue__ctor_m3511728DC8A522B4DFD4F2D962E92B839D339A69 (TypeValue_tB3AED7C97149E2ECDF4C5C6A4508F79B9AACA928 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V2.Model.RuntimeEntityRole/TypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValue__ctor_m945AE771E866D067CB9DE25AA31A0FE2DCD80265 (TypeValue_t490BFD3837E73F69D3E105ED2E86A9714F9C1B55 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.RuntimeResponseGeneric/PreferenceValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreferenceValue__ctor_mC16B1AF73985BA5EB74B31C554DB273B56EF0BE4 (PreferenceValue_t96555F42E3DAA220E105DD6AF7B5D9ED6D2B7304 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V2.Model.RuntimeResponseGeneric/PreferenceValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreferenceValue__ctor_mCA0832368198C808C938731022185B454903FB82 (PreferenceValue_t55DAEFBC8660D9BD287B18DF0840F2D2627EAAFB * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.RuntimeResponseGenericRuntimeResponseTypeOption/PreferenceValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreferenceValue__ctor_mA1ADBD2A9401BD94798DBCBF5D6F6D9DAB36B6D5 (PreferenceValue_t8B74F6AD983D1410E308844ABE268EA5DAAC4EBF * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V2.Model.RuntimeResponseGenericRuntimeResponseTypeOption/PreferenceValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreferenceValue__ctor_m9C212DB4AEA29E6609B6356DC9E2D3FCEA1F40E3 (PreferenceValue_tE58932D93F8C1DF9A1291128AEB0414E8A9DC385 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.SearchStatus/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_m300430F903669227F3AEE2C78C16DC792E864AEC (StatusValue_tB86462E30E39862D174913B3CD8D3F1EC429E769 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.NaturalLanguageUnderstanding.V1.Model.SentimentModel/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_m08D5C8825B6D5D3F8C72F0EC7FC28C43E08FE416 (StatusValue_tD8C231997FAD21404339720A8452FCB78F574112 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.Source/TypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValue__ctor_mB8FE4A516B0C2C32186D45EC20717AF7A3F0BBBB (TypeValue_tC764B668E531EA0A48A33F5F16602DFF522A21D6 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.SourceOptionsWebCrawl/CrawlSpeedValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrawlSpeedValue__ctor_mF3208B0C415E582B9CEF7BD5386271042306B17E (CrawlSpeedValue_tF75E94A978A1ECF194EE03378918AB2C9F8DC64C * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.SourceSchedule/FrequencyValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrequencyValue__ctor_mAD0926B99AED05428B5A2CF4D1ED73D92312DF16 (FrequencyValue_tA8E1C4CB42F0B388998B2904731BE7B81E5317E9 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Discovery.V1.Model.SourceStatus/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_m3FC0E889AD8BB2F41FD0E70189FEA5CF6242CFDF (StatusValue_t38BA8C23AAFBFFC872B58BE5FB8E17622FEB638B * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.SpeechToText.V1.Model.SpeechRecognitionResult/EndOfUtteranceValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfUtteranceValue__ctor_m4BAFD9B21BC5DBCE7C00D324A13B3E92B013DDD7 (EndOfUtteranceValue_t3C0EAC6C8413ACDC8E0F3F2280223773F1F18909 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKeepAliveU3Ed__242__ctor_m92569DBE793DFF35ADAB5A6ED774EAB7007290FC (U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKeepAliveU3Ed__242_System_IDisposable_Dispose_m0B27E87A4E30C4C3F97AC6C3484E12D77F0AEFDB (U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CKeepAliveU3Ed__242_MoveNext_mA795072870FA9330B537D6C7D6DBB205B1C2C991 (U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral576A87924814114E2EACB8108F009B9B033A3883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6E4BE1627246B4E0E1B912A876B9DF4ABC75F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC6CCC133B79DCA6AC1D405787F3A0F4D37C7AEA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * V_1 = NULL;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_003e;
			}
			case 2:
			{
				goto IL_008a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00d5;
	}

IL_002e:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if ((DateTime.Now - _lastKeepAlive).TotalSeconds > WsKeepAliveInterval)
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * L_4 = V_1;
		NullCheck(L_4);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = L_4->get__lastKeepAlive_24();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_6;
		L_6 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_3, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		double L_7;
		L_7 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_2), /*hidden argument*/NULL);
		if ((!(((double)L_7) > ((double)(20.0)))))
		{
			goto IL_00d5;
		}
	}
	{
		// AudioClip _keepAliveClip = Resources.Load<AudioClip>("highHat");
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8;
		L_8 = Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1(_stringLiteralAD6E4BE1627246B4E0E1B912A876B9DF4ABC75F4, /*hidden argument*/Resources_Load_TisAudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE_m6BF04F0FBDDD2978D86924C75AC86AF2B7273EA1_RuntimeMethod_var);
		__this->set_U3C_keepAliveClipU3E5__2_3(L_8);
		goto IL_0091;
	}

IL_007a:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_008a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0091:
	{
		// while (_keepAliveClip.loadState != AudioDataLoadState.Loaded)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = __this->get_U3C_keepAliveClipU3E5__2_3();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = AudioClip_get_loadState_m1FF966C14C813FEFD41778D79DC79D557BE67B06(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}
	{
		// _listenSocket.Send(new WSConnector.BinaryMessage(AudioClipUtil.GetL16(_keepAliveClip)));
		SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * L_11 = V_1;
		NullCheck(L_11);
		WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 * L_12 = L_11->get__listenSocket_18();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_13 = __this->get_U3C_keepAliveClipU3E5__2_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = AudioClipUtil_GetL16_mFB4CA53371841EFA3E73B2ABD68F123A3A614070(L_13, /*hidden argument*/NULL);
		BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B * L_15 = (BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B *)il2cpp_codegen_object_new(BinaryMessage_t2F38E04BED44DB85AC7D11E382A76CD02C78AF1B_il2cpp_TypeInfo_var);
		BinaryMessage__ctor_m9BA1E59793A7F2D142EDE59326E5C55A29284975(L_15, L_14, (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_12);
		WSConnector_Send_mA09BB46460A4133494756F62D0493A79057824A6(L_12, L_15, (bool)0, /*hidden argument*/NULL);
		// _keepAliveClip = null;
		__this->set_U3C_keepAliveClipU3E5__2_3((AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
		// _lastKeepAlive = DateTime.Now;
		SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_17;
		L_17 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set__lastKeepAlive_24(L_17);
		// }
		__this->set_U3C_keepAliveClipU3E5__2_3((AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL);
	}

IL_00d5:
	{
		// while (_listenSocket != null)
		SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * L_18 = V_1;
		NullCheck(L_18);
		WSConnector_tEB02C786035370E5BEE883BE58CD3F0A8A2E7122 * L_19 = L_18->get__listenSocket_18();
		if (L_19)
		{
			goto IL_002e;
		}
	}
	{
		// Log.Debug("SpeechToText.KeepAlive()", "KeepAlive exited.");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20;
		L_20 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		Log_Debug_m87EF25C5B8AEC7DCB5377F2D6C20F6AE29C1EB6E(_stringLiteralCC6CCC133B79DCA6AC1D405787F3A0F4D37C7AEA, _stringLiteral576A87924814114E2EACB8108F009B9B033A3883, L_20, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CKeepAliveU3Ed__242_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m759EC391F6F44F0F8C10064D578257C152B4F110 (U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKeepAliveU3Ed__242_System_Collections_IEnumerator_Reset_mCBA9957BB573FEC487305CE2CCE5CD47BE83727B (U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CKeepAliveU3Ed__242_System_Collections_IEnumerator_Reset_mCBA9957BB573FEC487305CE2CCE5CD47BE83727B_RuntimeMethod_var)));
	}
}
// System.Object IBM.Watson.SpeechToText.V1.SpeechToTextService/<KeepAlive>d__242::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CKeepAliveU3Ed__242_System_Collections_IEnumerator_get_Current_mD60CE26AB535E2D5E971323198628C1F4ACC408A (U3CKeepAliveU3Ed__242_tF31DDEF5789ECD291ED1D6BD56F8E3A98469D836 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 (ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/ErrorEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEvent__ctor_m65A3B04116C5D51795A5DE3E3BA50EE0855AC224 (ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/ErrorEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEvent_Invoke_mF8E60D6383ADABB1E620665C5E604137F5139FCB (ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___error0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.SpeechToText.V1.SpeechToTextService/ErrorEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorEvent_BeginInvoke_mE287984659BD83F16B16E0FA9211FF3E2128F1D3 (ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 * __this, String_t* ___error0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___error0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/ErrorEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEvent_EndInvoke_mE4A54950CA20AFA93D4167E3F74D300EF289B661 (ErrorEvent_t336DC6F4151CFB1CF4D73C319333FC9728CDD831 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DelegatePInvokeWrapper_LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 (LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef uint8_t* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___filename0' to native representation
	char* ____filename0_marshaled = NULL;
	____filename0_marshaled = il2cpp_codegen_marshal_string(___filename0);

	// Native function invocation
	uint8_t* returnValue = il2cppPInvokeFunc(____filename0_marshaled);

	// Marshaling of return value back from native representation
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*>((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, 1));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___filename0' native representation
	il2cpp_codegen_marshal_free(____filename0_marshaled);
	____filename0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/LoadFileDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadFileDelegate__ctor_m76D7904878BD214CFE3BB3A48590C7E2E1665F74 (LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Byte[] IBM.Watson.SpeechToText.V1.SpeechToTextService/LoadFileDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* LoadFileDelegate_Invoke_m415064F188A11BE55379EB66EFF26B6E46F89A72 (LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___filename0, targetMethod);
			}
			else
			{
				// closed
				typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___filename0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, ___filename0);
					else
						result = GenericVirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, ___filename0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___filename0);
					else
						result = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___filename0);
				}
			}
			else
			{
				typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___filename0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(targetMethod, targetThis, ___filename0);
					else
						result = GenericVirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(targetMethod, targetThis, ___filename0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___filename0);
					else
						result = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___filename0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___filename0, targetMethod);
				}
				else
				{
					typedef ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___filename0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult IBM.Watson.SpeechToText.V1.SpeechToTextService/LoadFileDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadFileDelegate_BeginInvoke_m8ACDDDA2E00F4FD5A360262D5A1D0394846F23B1 (LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 * __this, String_t* ___filename0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___filename0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Byte[] IBM.Watson.SpeechToText.V1.SpeechToTextService/LoadFileDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* LoadFileDelegate_EndInvoke_m246DF0AC80A488683006CD2114D7266F5C77954C (LoadFileDelegate_tB1231DA28EF3B07038E041BA4F6CDFE03F7ECC92 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRecognize__ctor_m2985CD921F0E2C6AD49A6F6E62E5596A7586C23B (OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognize::Invoke(IBM.Watson.SpeechToText.V1.SpeechRecognitionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRecognize_Invoke_mB08A12682D89B4E174DEACF6586E3D7AFEA52CB7 (OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C * __this, SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 * ___results0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___results0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___results0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___results0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___results0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___results0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___results0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___results0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 * >::Invoke(targetMethod, targetThis, ___results0);
					else
						GenericVirtActionInvoker1< SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 * >::Invoke(targetMethod, targetThis, ___results0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___results0);
					else
						VirtActionInvoker1< SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___results0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___results0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___results0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognize::BeginInvoke(IBM.Watson.SpeechToText.V1.SpeechRecognitionEvent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRecognize_BeginInvoke_m620C9019D4702716C90EDB8A26E3CC2C59DE9384 (OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C * __this, SpeechRecognitionEvent_t9820A8DFFF112069BE855174B3AFF69560418230 * ___results0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___results0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRecognize_EndInvoke_m246FE6389999E896853573C96BDD306F16BCCB9C (OnRecognize_t87F76CBC79E12C89284D97E8FB9AB58FD9D4C47C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognizeSpeaker::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRecognizeSpeaker__ctor_m1EBC17ABBB6297144BFAA9E113E4C128C1C95790 (OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognizeSpeaker::Invoke(IBM.Watson.SpeechToText.V1.SpeakerRecognitionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRecognizeSpeaker_Invoke_mDC14A619DE7F762072E507932AC9A21CC880F264 (OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F * __this, SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 * ___speakerRecognitionEvent0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___speakerRecognitionEvent0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___speakerRecognitionEvent0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___speakerRecognitionEvent0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___speakerRecognitionEvent0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___speakerRecognitionEvent0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___speakerRecognitionEvent0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___speakerRecognitionEvent0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 * >::Invoke(targetMethod, targetThis, ___speakerRecognitionEvent0);
					else
						GenericVirtActionInvoker1< SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 * >::Invoke(targetMethod, targetThis, ___speakerRecognitionEvent0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___speakerRecognitionEvent0);
					else
						VirtActionInvoker1< SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___speakerRecognitionEvent0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___speakerRecognitionEvent0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___speakerRecognitionEvent0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognizeSpeaker::BeginInvoke(IBM.Watson.SpeechToText.V1.SpeakerRecognitionEvent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRecognizeSpeaker_BeginInvoke_m3D8E55EFB770D2E5DAB078C6C6D035C665D81771 (OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F * __this, SpeakerRecognitionEvent_tE72A2A4D8CCEAD1B63955A95F680CE78D1153978 * ___speakerRecognitionEvent0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___speakerRecognitionEvent0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void IBM.Watson.SpeechToText.V1.SpeechToTextService/OnRecognizeSpeaker::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRecognizeSpeaker_EndInvoke_m623A3F0166BD6294187A69D12EDEC05D9A3CA168 (OnRecognizeSpeaker_tEFC3BE02155449C798DDAABFD38D671EE4FB9A4F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 (ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void IBM.Watson.TextToSpeech.V1.TextToSpeechService/ErrorEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEvent__ctor_m7076F83E0C2840BA28FA322D29FB39BAEAE52311 (ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.TextToSpeech.V1.TextToSpeechService/ErrorEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEvent_Invoke_m02C63AFF19A287C341C2FC1BAC0BF379EEA4A43A (ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___error0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.TextToSpeech.V1.TextToSpeechService/ErrorEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorEvent_BeginInvoke_m6A930707CADE8E6ADCC6D58B4DFDB13FC3BCF321 (ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 * __this, String_t* ___error0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___error0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void IBM.Watson.TextToSpeech.V1.TextToSpeechService/ErrorEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEvent_EndInvoke_m69A3FB5FA7380D7DACB707337F92D41C7F34B696 (ErrorEvent_t52DC3F95FE9C5950DCA056F159D7A7AE58625C57 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 (OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___result0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___result0' to native representation
	uint8_t* ____result0_marshaled = NULL;
	if (___result0 != NULL)
	{
		____result0_marshaled = reinterpret_cast<uint8_t*>((___result0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____result0_marshaled);

}
// System.Void IBM.Watson.TextToSpeech.V1.TextToSpeechService/OnSynthesize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSynthesize__ctor_m66180AD5F7052709BC0CE203C00306E6B6FE1520 (OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Watson.TextToSpeech.V1.TextToSpeechService/OnSynthesize::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSynthesize_Invoke_m4C0572BE67449E6AAE039CB4413F2AFE6A8C7E49 (OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___result0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___result0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___result0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___result0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___result0);
					else
						GenericVirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___result0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___result0);
					else
						VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___result0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___result0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___result0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult IBM.Watson.TextToSpeech.V1.TextToSpeechService/OnSynthesize::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSynthesize_BeginInvoke_mB1E831BF97A2CD71F524DF99E19C6CD638F89204 (OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___result0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___result0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void IBM.Watson.TextToSpeech.V1.TextToSpeechService/OnSynthesize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSynthesize_EndInvoke_m3FC8421A30E4CC9164D2E37C75E1F24DA1424DD3 (OnSynthesize_tEA7E067E70E74A5F7926FAFD5EF558AC7099C099 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IBM.Watson.Discovery.V1.Model.TokenDictStatusResponse/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_mCB40CE7F9B86D0DD086C9B3D9236DB197BC0AA70 (StatusValue_t7573B43B5239932BEE2A3053A0FC94BF95A9EF7D * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.NaturalLanguageUnderstanding.V1.Model.TokenResult/PartOfSpeechValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartOfSpeechValue__ctor_m44AEC8D84165AE04DBB1FFA605B13861D2FAB8F2 (PartOfSpeechValue_tA972607E24983E30A8CEBF5953F65440EC3690E6 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.SpeechToText.V1.Model.TrainingWarning/CodeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeValue__ctor_m97AC8699264A929EE5A521E29F330A0F7AB3A709 (CodeValue_tE0061F25B75E10373B101F0F9AF35C7C0408CE7F * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.TextToSpeech.V1.Model.Translation/PartOfSpeechValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartOfSpeechValue__ctor_m9A94B12E289F712540EB5DD7A21E22A8631382FF (PartOfSpeechValue_t087453C0139E384CF6A3484515999F6FDD15A962 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.LanguageTranslator.V3.Model.TranslationModel/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_m76D3AE85902E788FCFECA0D57205FFEA7808562D (StatusValue_t18B5CCB2FF7AB71AA9E00D21867B176BE438221B * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.Value/TypeValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValue__ctor_m8B87BC60F52149C83A7C38F04787CBC223E9ACD4 (TypeValue_t4DA2068A47A875C329D74EFDDB8EFE4BD24F866D * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.TextToSpeech.V1.Model.Word/PartOfSpeechValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartOfSpeechValue__ctor_m56969C83DADC637CD1F7585E3127630EA56846C6 (PartOfSpeechValue_t2D29F5AA397A859AA1EB7A4C34B5B2AE1F85E2E3 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.Workspace/StatusValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusValue__ctor_m1163012EBE05F8695DBC93B73FF1845E478153B9 (StatusValue_t2DB7F3704EE6FD0EFFBC47872234B8DAA4FEED65 * __this, const RuntimeMethod* method)
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
// System.Void IBM.Watson.Assistant.V1.Model.WorkspaceSystemSettingsDisambiguation/SensitivityValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensitivityValue__ctor_mE49E444E5C715491D22224C21A1031F699218350 (SensitivityValue_t59ADBEBA884523FFE4C7635C584592B8E15787C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordsOptions_set_Limit_m1496FBDD037FDCF9A578D1CC65497070B74B5FB9_inline (KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * __this, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___value0, const RuntimeMethod* method)
{
	{
		// public long? Limit { get; set; }
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_0 = ___value0;
		__this->set_U3CLimitU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordsOptions_set_Sentiment_m34167B9C0CA7E19A4C653AD1ACE11EA4CE6CE507_inline (KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * __this, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___value0, const RuntimeMethod* method)
{
	{
		// public bool? Sentiment { get; set; }
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0 = ___value0;
		__this->set_U3CSentimentU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Features_set_Keywords_m3DC628A421506D006BE2A4F7E8DF474891BB2371_inline (Features_t16C54CDABF950FBC0B4B2F9DF42C014517FC3550 * __this, KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * ___value0, const RuntimeMethod* method)
{
	{
		// public KeywordsOptions Keywords { get; set; }
		KeywordsOptions_tD419716526A9D0E02340F214439D5B3080FAA5DD * L_0 = ___value0;
		__this->set_U3CKeywordsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechToTextService_set_StreamMultipart_m392A8264D8239D4356513E054A032170C11A88E8_inline (SpeechToTextService_t6434DF81E58A93F99C3E9C884AE37701258BCBE2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool StreamMultipart { get { return _streamMultipart; } set { _streamMultipart = value; } }
		bool L_0 = ___value0;
		__this->set__streamMultipart_44(L_0);
		// public bool StreamMultipart { get { return _streamMultipart; } set { _streamMultipart = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioData_set_MaxLevel_m6C73B457D28FD78AB59A5C36A2AEFA2267BC9D26_inline (AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MaxLevel { get; set; }
		float L_0 = ___value0;
		__this->set_U3CMaxLevelU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioData_set_Clip_m54312E832F721C0692A2DA47E7CC59C23B41B6DB_inline (AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method)
{
	{
		// public AudioClip Clip { get; set; }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = ___value0;
		__this->set_U3CClipU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioData_get_Clip_mCF946CEC39D6E1A41AC391BD820D67328FDCA581_inline (AudioData_t76CCCCC8B29020D34ACEAD78B583FCDC75E7F56E * __this, const RuntimeMethod* method)
{
	{
		// public AudioClip Clip { get; set; }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get_U3CClipU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DetailedResponse_1_get_Response_mA65234D321A5AA5139D7FE791460A880612E48DF_gshared_inline (DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614 * __this, const RuntimeMethod* method)
{
	{
		// public string Response { get; set; }
		String_t* L_0 = (String_t*)__this->get_U3CResponseU3Ek__BackingField_3();
		return (String_t*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DetailedResponse_1_get_Result_m305BFFF31974941B4E49B51DC17C3DDD9B71A106_gshared_inline (DetailedResponse_1_tC5326E2C681D38EDE516236584BCED586F0A2614 * __this, const RuntimeMethod* method)
{
	{
		// public T Result { get; set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CResultU3Ek__BackingField_2();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
