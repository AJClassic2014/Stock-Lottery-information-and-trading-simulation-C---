#pragma once 

#using <System.dll>
#using <System.Xml.dll>
#using <System.Web.Services.dll>
#using <mscorlib.dll>

// 
// 此源代码由 wsdl, Version=1.1.4322.2503 自动生成。
// 
namespace TService {
    using namespace System::Diagnostics;
    using namespace System::Xml::Serialization;
    using namespace System;
    using namespace System::Web::Services::Protocols;
    using namespace System::ComponentModel;
    using namespace System::Web::Services;
    
    using namespace System;
    public __gc class StockQuote;
    
    
    /// <remarks/>
    [System::Diagnostics::DebuggerStepThroughAttribute, 
    System::ComponentModel::DesignerCategoryAttribute(S"code"), 
    System::Web::Services::WebServiceBindingAttribute(Name=S"StockQuoteSoap", Namespace=S"http://www.webserviceX.NET/")]
    public __gc class StockQuote : public System::Web::Services::Protocols::SoapHttpClientProtocol {
        
        /// <remarks/>
        public: StockQuote();
        /// <remarks/>
        public: [System::Web::Services::Protocols::SoapDocumentMethodAttribute(S"http://www.webserviceX.NET/GetQuote", RequestNamespace=S"http://www.webserviceX.NET/", ResponseNamespace=S"http://www.webserviceX.NET/", Use=System::Web::Services::Description::SoapBindingUse::Literal, ParameterStyle=System::Web::Services::Protocols::SoapParameterStyle::Wrapped)]
        System::String *  GetQuote(System::String *  symbol);
        
        /// <remarks/>
        public: System::IAsyncResult *  BeginGetQuote(System::String *  symbol, System::AsyncCallback *  callback, System::Object *  asyncState);
        
        /// <remarks/>
        public: System::String *  EndGetQuote(System::IAsyncResult *  asyncResult);
    };
    
    /// <remarks/>
    
    /// <remarks/>
    inline StockQuote::StockQuote() {
        this->Url = S"http://www.webservicex.net/stockquote.asmx";
    }
    
    /// <remarks/>
    inline System::String *  StockQuote::GetQuote(System::String *  symbol) {
        System::Object* __mcTemp__1[] = new System::Object*[1];
                __mcTemp__1[0] = symbol;
        System::Object *  results[] = this->Invoke(S"GetQuote", __mcTemp__1);
        return (__try_cast<System::String *  >(results[0]));
    };
    
    /// <remarks/>
    inline System::IAsyncResult *  StockQuote::BeginGetQuote(System::String *  symbol, System::AsyncCallback *  callback, System::Object *  asyncState) {
        System::Object* __mcTemp__1[] = new System::Object*[1];
                __mcTemp__1[0] = symbol;
        return this->BeginInvoke(S"GetQuote", __mcTemp__1, callback, asyncState);
    };
    
    /// <remarks/>
    inline System::String *  StockQuote::EndGetQuote(System::IAsyncResult *  asyncResult) {
        System::Object *  results[] = this->EndInvoke(asyncResult);
        return (__try_cast<System::String *  >(results[0]));
    };
}
