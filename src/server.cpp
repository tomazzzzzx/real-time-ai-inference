#include <vector>
#include <memory>
#include <string>

struct Result { float latency_ms; std::vector<float> output; };

class RealtimeInference {
public:
    RealtimeInference(const std::string& model);
    ~RealtimeInference();
    void warmup(int n=1000);
    Result infer(const std::vector<float>& input);
private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};
