// Generated by the protocol buffer compiler. DO NOT EDIT!
// Source: dota_modifiers

#ifndef PROTOBUF_dota_modifiers_BOOST_PYTHON_INCLUDED
#define PROTOBUF_dota_modifiers_BOOST_PYTHON_INCLUDED

class_<CDOTAModifierBuffTableEntry>("CDOTAModifierBuffTableEntry")
	.def("has_entry_type", &CDOTAModifierBuffTableEntry::has_entry_type)
	.def("entry_type", &CDOTAModifierBuffTableEntry::entry_type)
	.def("clear_entry_type", &CDOTAModifierBuffTableEntry::clear_entry_type)
	.def("has_parent", &CDOTAModifierBuffTableEntry::has_parent)
	.def("parent", &CDOTAModifierBuffTableEntry::parent)
	.def("clear_parent", &CDOTAModifierBuffTableEntry::clear_parent)
	.def("has_index", &CDOTAModifierBuffTableEntry::has_index)
	.def("index", &CDOTAModifierBuffTableEntry::index)
	.def("clear_index", &CDOTAModifierBuffTableEntry::clear_index)
	.def("has_serial_num", &CDOTAModifierBuffTableEntry::has_serial_num)
	.def("serial_num", &CDOTAModifierBuffTableEntry::serial_num)
	.def("clear_serial_num", &CDOTAModifierBuffTableEntry::clear_serial_num)
	.def("has_modifier_class", &CDOTAModifierBuffTableEntry::has_modifier_class)
	.def("modifier_class", &CDOTAModifierBuffTableEntry::modifier_class)
	.def("clear_modifier_class", &CDOTAModifierBuffTableEntry::clear_modifier_class)
	.def("has_ability_level", &CDOTAModifierBuffTableEntry::has_ability_level)
	.def("ability_level", &CDOTAModifierBuffTableEntry::ability_level)
	.def("clear_ability_level", &CDOTAModifierBuffTableEntry::clear_ability_level)
	.def("has_stack_count", &CDOTAModifierBuffTableEntry::has_stack_count)
	.def("stack_count", &CDOTAModifierBuffTableEntry::stack_count)
	.def("clear_stack_count", &CDOTAModifierBuffTableEntry::clear_stack_count)
	.def("has_creation_time", &CDOTAModifierBuffTableEntry::has_creation_time)
	.def("creation_time", &CDOTAModifierBuffTableEntry::creation_time)
	.def("clear_creation_time", &CDOTAModifierBuffTableEntry::clear_creation_time)
	.def("has_duration", &CDOTAModifierBuffTableEntry::has_duration)
	.def("duration", &CDOTAModifierBuffTableEntry::duration)
	.def("clear_duration", &CDOTAModifierBuffTableEntry::clear_duration)
	.def("has_caster", &CDOTAModifierBuffTableEntry::has_caster)
	.def("caster", &CDOTAModifierBuffTableEntry::caster)
	.def("clear_caster", &CDOTAModifierBuffTableEntry::clear_caster)
	.def("has_ability", &CDOTAModifierBuffTableEntry::has_ability)
	.def("ability", &CDOTAModifierBuffTableEntry::ability)
	.def("clear_ability", &CDOTAModifierBuffTableEntry::clear_ability)
	.def("has_armor", &CDOTAModifierBuffTableEntry::has_armor)
	.def("armor", &CDOTAModifierBuffTableEntry::armor)
	.def("clear_armor", &CDOTAModifierBuffTableEntry::clear_armor)
	.def("has_fade_time", &CDOTAModifierBuffTableEntry::has_fade_time)
	.def("fade_time", &CDOTAModifierBuffTableEntry::fade_time)
	.def("clear_fade_time", &CDOTAModifierBuffTableEntry::clear_fade_time)
	.def("has_subtle", &CDOTAModifierBuffTableEntry::has_subtle)
	.def("subtle", &CDOTAModifierBuffTableEntry::subtle)
	.def("clear_subtle", &CDOTAModifierBuffTableEntry::clear_subtle)
	.def("has_channel_time", &CDOTAModifierBuffTableEntry::has_channel_time)
	.def("channel_time", &CDOTAModifierBuffTableEntry::channel_time)
	.def("clear_channel_time", &CDOTAModifierBuffTableEntry::clear_channel_time)
	.def("has_v_start", &CDOTAModifierBuffTableEntry::has_v_start)
	.def("v_start", &CDOTAModifierBuffTableEntry::v_start, return_value_policy<reference_existing_object>())
	.def("clear_v_start", &CDOTAModifierBuffTableEntry::clear_v_start)
	.def("has_v_end", &CDOTAModifierBuffTableEntry::has_v_end)
	.def("v_end", &CDOTAModifierBuffTableEntry::v_end, return_value_policy<reference_existing_object>())
	.def("clear_v_end", &CDOTAModifierBuffTableEntry::clear_v_end)
	.def("has_portal_loop_appear", &CDOTAModifierBuffTableEntry::has_portal_loop_appear)
	.def("portal_loop_appear", &CDOTAModifierBuffTableEntry::portal_loop_appear, return_value_policy<copy_const_reference>())
	.def("clear_portal_loop_appear", &CDOTAModifierBuffTableEntry::clear_portal_loop_appear)
	.def("has_portal_loop_disappear", &CDOTAModifierBuffTableEntry::has_portal_loop_disappear)
	.def("portal_loop_disappear", &CDOTAModifierBuffTableEntry::portal_loop_disappear, return_value_policy<copy_const_reference>())
	.def("clear_portal_loop_disappear", &CDOTAModifierBuffTableEntry::clear_portal_loop_disappear)
	.def("has_hero_loop_appear", &CDOTAModifierBuffTableEntry::has_hero_loop_appear)
	.def("hero_loop_appear", &CDOTAModifierBuffTableEntry::hero_loop_appear, return_value_policy<copy_const_reference>())
	.def("clear_hero_loop_appear", &CDOTAModifierBuffTableEntry::clear_hero_loop_appear)
	.def("has_hero_loop_disappear", &CDOTAModifierBuffTableEntry::has_hero_loop_disappear)
	.def("hero_loop_disappear", &CDOTAModifierBuffTableEntry::hero_loop_disappear, return_value_policy<copy_const_reference>())
	.def("clear_hero_loop_disappear", &CDOTAModifierBuffTableEntry::clear_hero_loop_disappear)
	.def("has_movement_speed", &CDOTAModifierBuffTableEntry::has_movement_speed)
	.def("movement_speed", &CDOTAModifierBuffTableEntry::movement_speed)
	.def("clear_movement_speed", &CDOTAModifierBuffTableEntry::clear_movement_speed)
	.def("has_aura", &CDOTAModifierBuffTableEntry::has_aura)
	.def("aura", &CDOTAModifierBuffTableEntry::aura)
	.def("clear_aura", &CDOTAModifierBuffTableEntry::clear_aura)
	.def("has_activity", &CDOTAModifierBuffTableEntry::has_activity)
	.def("activity", &CDOTAModifierBuffTableEntry::activity)
	.def("clear_activity", &CDOTAModifierBuffTableEntry::clear_activity)
	.def("has_damage", &CDOTAModifierBuffTableEntry::has_damage)
	.def("damage", &CDOTAModifierBuffTableEntry::damage)
	.def("clear_damage", &CDOTAModifierBuffTableEntry::clear_damage)
	.def("has_range", &CDOTAModifierBuffTableEntry::has_range)
	.def("range", &CDOTAModifierBuffTableEntry::range)
	.def("clear_range", &CDOTAModifierBuffTableEntry::clear_range)
	.def("has_dd_modifier_index", &CDOTAModifierBuffTableEntry::has_dd_modifier_index)
	.def("dd_modifier_index", &CDOTAModifierBuffTableEntry::dd_modifier_index)
	.def("clear_dd_modifier_index", &CDOTAModifierBuffTableEntry::clear_dd_modifier_index)
	.def("has_dd_ability_index", &CDOTAModifierBuffTableEntry::has_dd_ability_index)
	.def("dd_ability_index", &CDOTAModifierBuffTableEntry::dd_ability_index)
	.def("clear_dd_ability_index", &CDOTAModifierBuffTableEntry::clear_dd_ability_index)
;

#endif // PROTOBUF_dota_modifiers.proto_BOOST_PYTHON_INCLUDED
