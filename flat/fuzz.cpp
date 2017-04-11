/// @file fuzz.cpp
/// @brief Generated by DEXTOOL_VERSION: v0.8.3-265-g6ebe39a
/// DO NOT EDIT THIS FILE, it will be overwritten on update.
#include "fuzz.hpp"

namespace Foo {
    namespace Bar {
        namespace Provider {
            class I_Bar_Impl : public I_Bar {
            private:
                Foo::Bar::FunT fun;
                Foo::Bar::FumT fum;
                RandomGenerator* randomGenerator;
            public:
                 I_Bar_Impl() {
                    randomGenerator = &TestingEnvironment::createRandomGenerator("Provider");
                }
                 ~I_Bar_Impl() {
                }
                void Regenerate() {
                    fun.V0 = randomGenerator->generate(-9223372036854775808, 9223372036854775807);
                    fun.V1 = randomGenerator->generate(-1, 10);
                    fun.V2 = 5;
                    fun.V3 = randomGenerator->generate(0, 50000);
                    fun.V4.P1 = randomGenerator->generate(0, 50000);
                    fun.V4.P0 = randomGenerator->generate();
                    fun.V5 = static_cast<Foo::SimpleT::Enum>(randomGenerator->generate(0, 2));
                    fun.V6 = static_cast<Foo::WithHolesT::Enum>(randomGenerator->generate(1, 10));
                    fum.V0 = randomGenerator->generate(-9223372036854775808, 9223372036854775807);
                }
                Foo::Bar::FunT & Get_Fun() {
                    return fun;
                }
                void Put_Fun(const int64_t V0, const Foo::Bar::MyIntT V1, const Foo::Bar::MyIntT V2, const Foo::MyHeightT V3, const Foo::BundleT &V4, const Foo::SimpleT::Enum V5, const Foo::WithHolesT::Enum V6) {
                    fun.V0 = V0;
                    fun.V1 = V1;
                    fun.V2 = V2;
                    fun.V3 = V3;
                    fun.V4 = V4;
                    fun.V5 = V5;
                    fun.V6 = V6;
                }
                const Foo::Bar::FumT & Get_Fum() const {
                    return fum;
                }
                int64_t Get_Fum_V0() const {
                    return fum.V0;
                }
            };
            I_Bar::I_Bar() {
            }
            I_Bar::~I_Bar() {
            }
            class I_Bar_Provider_Impl : public I_Bar_Provider {
            private:
                I_Bar* port;
            public:
                 I_Bar_Provider_Impl() {
                }
                 I_Bar_Provider_Impl(I_Bar* p) {
                    port = p;
                }
                void Init() {
                    return;
                }
                Foo::Bar::Provider::I_Bar & Get_Port() {
                    return *port;
                }
            };
            I_Bar_Provider::I_Bar_Provider() {
            }
            I_Bar_Provider::~I_Bar_Provider() {
            }
            Foo::Bar::Provider::I_Bar_Provider & Create_Instance(const std::basic_string<char> & name) {
                return PortEnvironment::createPort<I_Bar_Provider_Impl, I_Bar, I_Bar_Impl, const std::basic_string<char> >(name, name);
            }
        } //NS:Provider
    } //NS:Bar
} //NS:Foo
namespace Foo {
    namespace Bar {
        namespace Requirer {
            class I_Bar_Impl : public I_Bar {
            private:
                Foo::Bar::FunT fun;
                Foo::Bar::FumT fum;
                RandomGenerator* randomGenerator;
            public:
                 I_Bar_Impl() {
                    randomGenerator = &TestingEnvironment::createRandomGenerator("Requirer");
                }
                 ~I_Bar_Impl() {
                }
                void Regenerate() {
                    fun.V0 = randomGenerator->generate(-9223372036854775808, 9223372036854775807);
                    fun.V1 = randomGenerator->generate(-1, 10);
                    fun.V2 = 5;
                    fun.V3 = randomGenerator->generate(0, 50000);
                    fun.V4.P1 = randomGenerator->generate(0, 50000);
                    fun.V4.P0 = randomGenerator->generate();
                    fun.V5 = static_cast<Foo::SimpleT::Enum>(randomGenerator->generate(0, 2));
                    fun.V6 = static_cast<Foo::WithHolesT::Enum>(randomGenerator->generate(1, 10));
                    fum.V0 = randomGenerator->generate(-9223372036854775808, 9223372036854775807);
                }
                const Foo::Bar::FunT & Get_Fun() const {
                    return fun;
                }
                int64_t Get_Fun_V0() const {
                    return fun.V0;
                }
                Foo::Bar::MyIntT Get_Fun_V1() const {
                    return fun.V1;
                }
                Foo::Bar::MyIntT Get_Fun_V2() const {
                    return fun.V2;
                }
                Foo::MyHeightT Get_Fun_V3() const {
                    return fun.V3;
                }
                const Foo::BundleT & Get_Fun_V4() const {
                    return fun.V4;
                }
                Foo::SimpleT::Enum Get_Fun_V5() const {
                    return fun.V5;
                }
                Foo::WithHolesT::Enum Get_Fun_V6() const {
                    return fun.V6;
                }
                Foo::Bar::FumT & Get_Fum() {
                    return fum;
                }
                void Put_Fum(const int64_t V0) {
                    fum.V0 = V0;
                }
            };
            I_Bar::I_Bar() {
            }
            I_Bar::~I_Bar() {
            }
            class I_Bar_Requirer_Impl : public I_Bar_Requirer {
            private:
                I_Bar* port;
            public:
                 I_Bar_Requirer_Impl() {
                }
                 I_Bar_Requirer_Impl(I_Bar* p) {
                    port = p;
                }
                void Init() {
                    return;
                }
                Foo::Bar::Requirer::I_Bar & Get_Port() {
                    return *port;
                }
            };
            I_Bar_Requirer::I_Bar_Requirer() {
            }
            I_Bar_Requirer::~I_Bar_Requirer() {
            }
            Foo::Bar::Requirer::I_Bar_Requirer & Create_Instance(const std::basic_string<char> & name) {
                return PortEnvironment::createPort<I_Bar_Requirer_Impl, I_Bar, I_Bar_Impl, const std::basic_string<char> >(name, name);
            }
        } //NS:Requirer
    } //NS:Bar
} //NS:Foo
