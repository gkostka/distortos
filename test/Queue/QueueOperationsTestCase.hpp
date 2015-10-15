/**
 * \file
 * \brief QueueOperationsTestCase class header
 *
 * \author Copyright (C) 2015 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \date 2015-10-08
 */

#ifndef TEST_QUEUE_QUEUEOPERATIONSTESTCASE_HPP_
#define TEST_QUEUE_QUEUEOPERATIONSTESTCASE_HPP_

#include "TestCaseCommon.hpp"

namespace distortos
{

namespace test
{

/**
 * \brief Tests various [Raw]{Fifo,Message}Queue operations.
 *
 * Tests emplacing (emplace(), tryEmplace(), tryEmplaceFor() and tryEmplaceUntil()), pushing (push(), tryPush(),
 * tryPushFor() and tryPushUntil()) and popping (pop(), tryPop(), tryPopFor() and tryPopUntil()) to/from
 * [Raw]{Fifo,Message}Queue, both from thread and from interrupt context - these operations must return expected result,
 * cause expected number of context switches, finish within expected time frame and execute expected actions on
 * transferred object (various constructor types, destructor, swap, ...).
 */

class QueueOperationsTestCase : public TestCaseCommon
{
private:

	/**
	 * \brief Runs the test case.
	 *
	 * \return true if the test case succeeded, false otherwise
	 */

	virtual bool run_() const override;
};

}	// namespace test

}	// namespace distortos

#endif	// TEST_QUEUE_QUEUEOPERATIONSTESTCASE_HPP_