#include <eosio/eosio.hpp>
using namespace eosio;

CONTRACT test : public contract {
   public:
      using contract::contract;

      ACTION hi( name nm );
      // ACTION bye( name nm );

};