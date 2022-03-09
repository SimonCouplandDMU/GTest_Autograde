# Add simpleSelection
add_subdirectory(simpleSelection)
# Move to examples folder
set_target_properties (simpleSelection PROPERTIES FOLDER examples)

# Add simpleSelection
add_subdirectory(simpleSelectionLib)
# Move to examples folder
set_target_properties (simpleSelectionLib PROPERTIES FOLDER examples)

# Add testsSimpleSelection
add_subdirectory(testsSimpleSelection)
# Move to examples folder
set_target_properties (testsSimpleSelection PROPERTIES FOLDER examples)



