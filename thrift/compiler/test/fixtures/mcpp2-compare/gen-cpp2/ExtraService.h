/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "src/gen-cpp2/extra_services_types.h"
#include "ParamService.h"
#include "module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace extra { namespace svc {

class ExtraServiceSvAsyncIf {
 public:
  virtual ~ExtraServiceSvAsyncIf() {}
  virtual void async_eb_simple_function(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) = 0;
  virtual folly::Future<bool> future_simple_function() = 0;
  virtual void async_eb_throws_function(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_throws_function() = 0;
  virtual void async_eb_throws_function2(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, bool param1) = 0;
  virtual folly::Future<bool> future_throws_function2(bool param1) = 0;
  virtual void async_eb_throws_function3(std::unique_ptr<apache::thrift::HandlerCallback<std::map<int32_t, std::string>>> callback, bool param1, const std::string& param2) = 0;
  virtual folly::Future<std::map<int32_t, std::string>> future_throws_function3(bool param1, const std::string& param2) = 0;
  virtual void async_eb_oneway_void_ret(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret() = 0;
  virtual void async_eb_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) = 0;
  virtual void async_eb_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) = 0;
  virtual void async_eb_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const  ::some::valid::ns::MyStruct& param1) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& param1) = 0;
  virtual void async_eb_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1) = 0;
  virtual folly::Future<folly::Unit> future_oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& param1) = 0;
};

class ExtraServiceAsyncProcessor;

class ExtraServiceSvIf : public ExtraServiceSvAsyncIf, virtual public  ::some::valid::ns::ParamServiceSvIf {
 public:
  typedef ExtraServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual bool simple_function();
  folly::Future<bool> future_simple_function() override;
  void async_eb_simple_function(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) override;
  virtual void throws_function();
  folly::Future<folly::Unit> future_throws_function() override;
  void async_eb_throws_function(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual bool throws_function2(bool /*param1*/);
  folly::Future<bool> future_throws_function2(bool param1) override;
  void async_eb_throws_function2(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, bool param1) override;
  virtual void throws_function3(std::map<int32_t, std::string>& /*_return*/, bool /*param1*/, const std::string& /*param2*/);
  folly::Future<std::map<int32_t, std::string>> future_throws_function3(bool param1, const std::string& param2) override;
  void async_eb_throws_function3(std::unique_ptr<apache::thrift::HandlerCallback<std::map<int32_t, std::string>>> callback, bool param1, const std::string& param2) override;
  virtual void oneway_void_ret();
  folly::Future<folly::Unit> future_oneway_void_ret() override;
  void async_eb_oneway_void_ret(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback) override;
  virtual void oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t /*param1*/, int32_t /*param2*/, int32_t /*param3*/, int32_t /*param4*/, int32_t /*param5*/);
  folly::Future<folly::Unit> future_oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) override;
  void async_eb_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) override;
  virtual void oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& /*param1*/, const std::set<std::vector<std::string>>& /*param2*/);
  folly::Future<folly::Unit> future_oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) override;
  void async_eb_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) override;
  virtual void oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& /*param1*/);
  folly::Future<folly::Unit> future_oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& param1) override;
  void async_eb_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const  ::some::valid::ns::MyStruct& param1) override;
  virtual void oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& /*param1*/);
  folly::Future<folly::Unit> future_oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& param1) override;
  void async_eb_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1) override;
};

class ExtraServiceSvNull : public ExtraServiceSvIf, virtual public  ::some::valid::ns::ParamServiceSvIf {
 public:
};

class ExtraServiceAsyncProcessor : public  ::some::valid::ns::ParamServiceAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor =  ::some::valid::ns::ParamServiceAsyncProcessor;
  using HasFrozen2 = std::false_type;
 protected:
  ExtraServiceSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<ExtraServiceAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const ExtraServiceAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const ExtraServiceAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<ExtraServiceAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const ExtraServiceAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const ExtraServiceAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_simple_function(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_simple_function(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_simple_function(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_throws_function(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_throws_function(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_throws_function2(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_throws_function2(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function2(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_throws_function3(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_throws_function3(int32_t protoSeqId, apache::thrift::ContextStack* ctx, std::map<int32_t, std::string> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_throws_function3(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
 public:
  ExtraServiceAsyncProcessor(ExtraServiceSvIf* iface) :
       ::some::valid::ns::ParamServiceAsyncProcessor(iface),
      iface_(iface) {}

  virtual ~ExtraServiceAsyncProcessor() {}
};

class ExtraServiceAsyncClient : public  ::some::valid::ns::ParamServiceAsyncClient {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~ExtraServiceAsyncClient() {}

  ExtraServiceAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
       ::some::valid::ns::ParamServiceAsyncClient(channel) {}
  virtual void simple_function(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void simple_function(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void simple_functionImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual bool sync_simple_function();
  virtual bool sync_simple_function(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<bool> future_simple_function();
  virtual folly::Future<bool> future_simple_function(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_simple_function(apache::thrift::RpcOptions& rpcOptions);
  virtual void simple_function(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_simple_function(bool& _return, ::apache::thrift::ClientReceiveState& state);
  static bool recv_simple_function(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual bool recv_instance_simple_function(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_simple_function(bool& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void simple_functionT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_simple_functionT(Protocol_* prot, bool& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static bool recv_simple_functionT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void throws_function(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void throws_function(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void throws_functionImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_throws_function();
  virtual void sync_throws_function(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_throws_function();
  virtual folly::Future<folly::Unit> future_throws_function(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_throws_function(apache::thrift::RpcOptions& rpcOptions);
  virtual void throws_function(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_throws_function(::apache::thrift::ClientReceiveState& state);
  static void recv_throws_function(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_throws_function(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_throws_function(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void throws_functionT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_throws_functionT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_throws_functionT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void throws_function2(std::unique_ptr<apache::thrift::RequestCallback> callback, bool param1);
  virtual void throws_function2(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, bool param1);
 private:
  virtual void throws_function2Impl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, bool param1);
 public:
  virtual bool sync_throws_function2(bool param1);
  virtual bool sync_throws_function2(apache::thrift::RpcOptions& rpcOptions, bool param1);
  virtual folly::Future<bool> future_throws_function2(bool param1);
  virtual folly::Future<bool> future_throws_function2(apache::thrift::RpcOptions& rpcOptions, bool param1);
  virtual folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_throws_function2(apache::thrift::RpcOptions& rpcOptions, bool param1);
  virtual void throws_function2(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, bool param1);
  static folly::exception_wrapper recv_wrapped_throws_function2(bool& _return, ::apache::thrift::ClientReceiveState& state);
  static bool recv_throws_function2(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual bool recv_instance_throws_function2(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_throws_function2(bool& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void throws_function2T(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, bool param1);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_throws_function2T(Protocol_* prot, bool& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static bool recv_throws_function2T(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void throws_function3(std::unique_ptr<apache::thrift::RequestCallback> callback, bool param1, const std::string& param2);
  virtual void throws_function3(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, bool param1, const std::string& param2);
 private:
  virtual void throws_function3Impl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, bool param1, const std::string& param2);
 public:
  virtual void sync_throws_function3(std::map<int32_t, std::string>& _return, bool param1, const std::string& param2);
  virtual void sync_throws_function3(apache::thrift::RpcOptions& rpcOptions, std::map<int32_t, std::string>& _return, bool param1, const std::string& param2);
  virtual folly::Future<std::map<int32_t, std::string>> future_throws_function3(bool param1, const std::string& param2);
  virtual folly::Future<std::map<int32_t, std::string>> future_throws_function3(apache::thrift::RpcOptions& rpcOptions, bool param1, const std::string& param2);
  virtual folly::Future<std::pair<std::map<int32_t, std::string>, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_throws_function3(apache::thrift::RpcOptions& rpcOptions, bool param1, const std::string& param2);
  virtual void throws_function3(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, bool param1, const std::string& param2);
  static folly::exception_wrapper recv_wrapped_throws_function3(std::map<int32_t, std::string>& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_throws_function3(std::map<int32_t, std::string>& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_throws_function3(std::map<int32_t, std::string>& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_throws_function3(std::map<int32_t, std::string>& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void throws_function3T(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, bool param1, const std::string& param2);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_throws_function3T(Protocol_* prot, std::map<int32_t, std::string>& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_throws_function3T(Protocol_* prot, std::map<int32_t, std::string>& _return, ::apache::thrift::ClientReceiveState& state);
  virtual void oneway_void_ret(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void oneway_void_ret(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void oneway_void_retImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_oneway_void_ret();
  virtual void sync_oneway_void_ret(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_oneway_void_ret();
  virtual folly::Future<folly::Unit> future_oneway_void_ret(apache::thrift::RpcOptions& rpcOptions);
  virtual void oneway_void_ret(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  template <typename Protocol_>
  void oneway_void_retT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
  virtual void oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
 private:
  virtual void oneway_void_ret_i32_i32_i32_i32_i32_paramImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
 public:
  virtual void sync_oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
  virtual void sync_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::RpcOptions& rpcOptions, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::RpcOptions& rpcOptions, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
  virtual void oneway_void_ret_i32_i32_i32_i32_i32_param(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
  template <typename Protocol_>
  void oneway_void_ret_i32_i32_i32_i32_i32_paramT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
  virtual void oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2);
  virtual void oneway_void_ret_map_setlist_param(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2);
 private:
  virtual void oneway_void_ret_map_setlist_paramImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2);
 public:
  virtual void sync_oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2);
  virtual void sync_oneway_void_ret_map_setlist_param(apache::thrift::RpcOptions& rpcOptions, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_map_setlist_param(apache::thrift::RpcOptions& rpcOptions, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2);
  virtual void oneway_void_ret_map_setlist_param(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2);
  template <typename Protocol_>
  void oneway_void_ret_map_setlist_paramT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2);
  virtual void oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::valid::ns::MyStruct& param1);
  virtual void oneway_void_ret_struct_param(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::valid::ns::MyStruct& param1);
 private:
  virtual void oneway_void_ret_struct_paramImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::valid::ns::MyStruct& param1);
 public:
  virtual void sync_oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& param1);
  virtual void sync_oneway_void_ret_struct_param(apache::thrift::RpcOptions& rpcOptions, const  ::some::valid::ns::MyStruct& param1);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& param1);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_struct_param(apache::thrift::RpcOptions& rpcOptions, const  ::some::valid::ns::MyStruct& param1);
  virtual void oneway_void_ret_struct_param(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::some::valid::ns::MyStruct& param1);
  template <typename Protocol_>
  void oneway_void_ret_struct_paramT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::some::valid::ns::MyStruct& param1);
  virtual void oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1);
  virtual void oneway_void_ret_listunion_param(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1);
 private:
  virtual void oneway_void_ret_listunion_paramImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1);
 public:
  virtual void sync_oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& param1);
  virtual void sync_oneway_void_ret_listunion_param(apache::thrift::RpcOptions& rpcOptions, const std::vector< ::some::valid::ns::ComplexUnion>& param1);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& param1);
  virtual folly::Future<folly::Unit> future_oneway_void_ret_listunion_param(apache::thrift::RpcOptions& rpcOptions, const std::vector< ::some::valid::ns::ComplexUnion>& param1);
  virtual void oneway_void_ret_listunion_param(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1);
  template <typename Protocol_>
  void oneway_void_ret_listunion_paramT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1);
};

}} // extra::svc
namespace apache { namespace thrift {

}} // apache::thrift
