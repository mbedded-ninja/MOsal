//!
//! @file				Osal.h
//! @author				Geoffrey Hunter <gbmhunter@gmail.com> (www.cladlab.com)
//! @created			2014-08-07
//! @last-modified		2014-08-07
//! @brief 				
//! @details
//!					

#ifndef __cplusplus
	#error Please build with C++ compiler
#endif

//===============================================================================================//
//======================================== HEADER GUARD =========================================//
//===============================================================================================//

#ifndef OSAL_CPP_OSAL_H
#define OSAL_CPP_OSAL_H

//===============================================================================================//
//==================================== FORWARD DECLARATION ======================================//
//===============================================================================================//

namespace OsalNs
{
	class Osal;
}

//===============================================================================================//
//========================================== INCLUDES ===========================================//
//===============================================================================================//

// System headers
//#include <cstdint>		// int8_t, int32_t e.t.c

// User libraries
// none

// User headers
// none

//===============================================================================================//
//======================================== NAMESPACE ============================================//
//===============================================================================================//

namespace OsalNs
{
	
	//! @brief		Brief description of class.
	//! @details	Detailed description of class.
	//! @note		Not pre-scheduler safe.
	class Osal
	{	
		
		public:
									
			//======================================================================================//
			//==================================== PUBLIC METHODS ==================================//
			//======================================================================================//
						
			//! @brief		Osal constructor.
			//! @param		enterCriticalSection		Pointer to OS function that enters a critical section.
			//! @param		exitCriticalSection			Pointer to OS function that exits a critical section.
			Osal(
				void (*threadDelayMs)(double milliseconds),
				void (*enterCriticalSection)(),
				void (*exitCriticalSection)());
	
			
			void EnterCriticalSection();
				
			void ExitCriticalSection();
			
			//! @brief		Delays a thread for a certain amount of milliseconds. Allows execution of other threads
			//!				in the interim.
			void ThreadDelayMs(double milliseconds);
						
			//======================================================================================//
			//================================= PUBLIC VARIABLES ===================================//
			//======================================================================================//
				
			// none
				
		private:
						
			//======================================================================================//
			//=================================== PRIVATE METHODS ==================================//
			//======================================================================================//
			
			// none
			
			//======================================================================================//
			//================================== PRIVATE VARIABLES =================================//
			//======================================================================================//

			void (*enterCriticalSection)();
			void (*exitCriticalSection)();
			void (*threadDelayMs)(double milliseconds);
			
		protected:

			//======================================================================================//
			//=================================== PROTECTED METHODS ================================//
			//======================================================================================//
			
			// none
			
			//======================================================================================//
			//================================== PROTECTED VARIABLES ===============================//
			//======================================================================================//

			// none
		
	}; // class Osal


} // namespace OsalNs

#endif	// #ifndef OSAL_CPP_OSAL_H

// EOF
