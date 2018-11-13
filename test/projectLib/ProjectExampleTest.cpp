#include <gtest/gtest.h>

#include "projectLib/ProjectExample.h"

class ProjectExampleTest : public ::testing::Test
{

protected:

	projectLib::ProjectExample sut_;
};

TEST_F(ProjectExampleTest, FreturnsTrue)
{
	ASSERT_EQ(sut_.f(), true);
}