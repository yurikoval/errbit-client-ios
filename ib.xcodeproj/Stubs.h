// Generated by IB v0.3.1 gem. Do not edit it manually
// Run `rake ib:open` to refresh

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@interface ParserError: StandardError







@end


@interface NSNotificationCenter





-(IBAction) observers;
-(IBAction) unobserve:(id) observer;

@end


@interface NSURLRequest





-(IBAction) to_s;

@end


@interface Camera





-(IBAction) initialize:(id) location;
-(IBAction) location;
-(IBAction) imagePickerControllerDidCancel:(id) picker;
-(IBAction) picker;
-(IBAction) dismiss;
-(IBAction) camera_device;
-(IBAction) media_type_to_symbol:(id) media_type;
-(IBAction) symbol_to_media_type:(id) symbol;
-(IBAction) error:(id) type;

@end


@interface UIView





-(IBAction) handle_gesture:(id) recognizer;

@end


@interface UIAlertView





-(IBAction) style;
-(IBAction) cancel_button_index;

@end


@interface ClickedButton





-(IBAction) willPresentAlertView:(id) alert;
-(IBAction) didPresentAlertView:(id) alert;
-(IBAction) alertViewCancel:(id) alert;
-(IBAction) alertViewShouldEnableFirstOtherButton:(id) alert;
-(IBAction) plain_text_field;
-(IBAction) secure_text_field;
-(IBAction) login_text_field;
-(IBAction) password_text_field;

@end


@interface UIViewController





-(IBAction) content_frame;

@end


@interface InvalidURLError: StandardError







@end


@interface InvalidFileError: StandardError







@end


@interface BubbleWrap





-(IBAction) to_s;
-(IBAction) connectionDidFinishLoading:(id) connection;
-(IBAction) show_status_indicator:(id) show;
-(IBAction) create_request;
-(IBAction) set_content_type;
-(IBAction) create_request_body;
-(IBAction) append_payload:(id) body;
-(IBAction) append_form_params:(id) body;
-(IBAction) append_auth_header;
-(IBAction) append_files:(id) body;
-(IBAction) append_body_boundary:(id) body;
-(IBAction) create_url:(id) url_string;
-(IBAction) validate_url:(id) url;
-(IBAction) escape:(id) string;
-(IBAction) convert_payload_to_url;
-(IBAction) log:(id) message;
-(IBAction) escape_line_feeds:(id) hash;
-(IBAction) patch_nsurl_request:(id) request;
-(IBAction) call_delegator_with_response;

@end


@interface BubbleWrap





-(IBAction) initialize:(id) values;
-(IBAction) update:(id) values;
-(IBAction) to_s;
-(IBAction) update_status_description;

@end


@interface Base





-(IBAction) initialize:(id) params;
-(IBAction) to_hash;
-(IBAction) encodeWithCoder:(id) encoder;
-(IBAction) initWithCoder:(id) decoder;
-(IBAction) copyWithZone:(id) zone;

@end


@interface FormController: UITableViewController





-(IBAction) initWithForm:(id) form;
-(IBAction) form;
-(IBAction) viewDidLoad;
-(IBAction) viewWillAppear:(id) animated;
-(IBAction) push_subform:(id) form;
-(IBAction) pop_subform;

@end


@interface FormableController: Formotion





-(IBAction) initWithModel:(id) model;

@end


@interface InvalidClassError: StandardError







@end


@interface InvalidSectionError: StandardError







@end


@interface NoRowTypeError: StandardError





-(IBAction) assert_nil_or_boolean:(id) obj;

@end


@interface Conditions





-(IBAction) assert_nil_or_boolean:(id) obj;

@end


@interface Form: Formotion





-(IBAction) initialize:(id) params;
-(IBAction) create_section:(id) hash;
-(IBAction) sections;
-(IBAction) row_for_index_path:(id) index_path;
-(IBAction) submit;
-(IBAction) to_hash;
-(IBAction) render;
-(IBAction) sub_render;
-(IBAction) values;
-(IBAction) init_observer_for_save;
-(IBAction) open;
-(IBAction) save;
-(IBAction) reset;
-(IBAction) persist_key;
-(IBAction) original_persist_key;
-(IBAction) load_state;
-(IBAction) recursive_delete_nil:(id) h;

@end


@interface Form: Formotion





-(IBAction) active_row;
-(IBAction) controller;
-(IBAction) table;
-(IBAction) reload_data;
-(IBAction) numberOfSectionsInTableView:(id) tableView;

@end


@interface Object





-(IBAction) to_archived_data;

@end


@interface NSData





-(IBAction) unarchive;

@end


@interface UIActionSheet





-(IBAction) addButtonWithTitle:(id) title;

@end


@interface UITextField





-(IBAction) add_delegate_method;

@end


@interface UITextField_Delegate





-(IBAction) textFieldShouldBeginEditing:(id) theTextField;
-(IBAction) textFieldDidBeginEditing:(id) theTextField;
-(IBAction) textFieldShouldEndEditing:(id) theTextField;
-(IBAction) textFieldDidEndEditing:(id) theTextField;
-(IBAction) on_change:(id) theTextField;
-(IBAction) textFieldShouldClear:(id) theTextField;
-(IBAction) textFieldShouldReturn:(id) theTextField;

@end


@interface UITextView





-(IBAction) add_delegate_method;
-(IBAction) textViewShouldBeginEditing:(id) theTextView;

@end


@interface UITextView_Delegate





-(IBAction) textViewShouldBeginEditing:(id) theTextView;
-(IBAction) textViewDidBeginEditing:(id) theTextView;
-(IBAction) textViewShouldEndEditing:(id) theTextView;
-(IBAction) textViewDidEndEditing:(id) theTextView;
-(IBAction) textViewDidChange:(id) theTextView;

@end


@interface UITextView





-(IBAction) initWithCoder:(id) decoder;
-(IBAction) initWithFrame:(id) frame;
-(IBAction) setup;
-(IBAction) dealloc;
-(IBAction) drawRect:(id) rect;
-(IBAction) setText:(id) text;
-(IBAction) placeholder;
-(IBAction) placeholder_rect;
-(IBAction) placeholder_color;
-(IBAction) updateShouldDrawPlaceholder;

@end


@interface Row: Formotion





-(IBAction) initialize:(id) params;
-(IBAction) after_create;
-(IBAction) value_for_save_hash;
-(IBAction) index_path;
-(IBAction) form;
-(IBAction) reuse_identifier;
-(IBAction) next_row;
-(IBAction) previous_row;
-(IBAction) items;
-(IBAction) type;
-(IBAction) range;
-(IBAction) return_key;
-(IBAction) auto_correction;
-(IBAction) auto_capitalization;
-(IBAction) clear_button;
-(IBAction) text_alignment;
-(IBAction) editable;
-(IBAction) make_cell;
-(IBAction) update_cell:(id) cell;
-(IBAction) to_hash;
-(IBAction) subform;
-(IBAction) to_form;
-(IBAction) load_constants_hack;

@end


@interface BackRow: ButtonRow







@end


@interface Base





-(IBAction) tableView;
-(IBAction) initialize:(id) row;
-(IBAction) cell_style;
-(IBAction) cellEditingStyle;
-(IBAction) build_cell:(id) cell;
-(IBAction) after_build:(id) cell;
-(IBAction) update_cell:(id) cell;
-(IBAction) delete_row;
-(IBAction) after_delete;

@end


@interface ButtonRow: Base





-(IBAction) build_cell:(id) cell;
-(IBAction) layoutSubviews;

@end


@interface CheckRow: Base





-(IBAction) update_cell_value:(id) cell;
-(IBAction) build_cell:(id) cell;

@end


@interface CurrencyRow: NumberRow





-(IBAction) on_change:(id) text_field;
-(IBAction) row_value;
-(IBAction) value_for_save_hash;
-(IBAction) number_formatter;
-(IBAction) currency_scale;

@end


@interface DateRow: StringRow





-(IBAction) on_change:(id) text_field;
-(IBAction) update;
-(IBAction) date_value;
-(IBAction) formatter;
-(IBAction) after_build:(id) cell;
-(IBAction) picker;
-(IBAction) picker_mode;
-(IBAction) formatted_value;
-(IBAction) update_text_field:(id) new_value;

@end


@interface EditRow: ButtonRow







@end


@interface EmailRow: StringRow





-(IBAction) keyboardType;

@end


@interface ImageRow: Base





-(IBAction) build_cell:(id) cell;
-(IBAction) layoutSubviews;
-(IBAction) add_plus_accessory:(id) cell;

@end


@interface NumberRow: StringRow





-(IBAction) keyboardType;

@end


@interface OptionsRow: Base





-(IBAction) build_cell:(id) cell;

@end


@interface PhoneRow: StringRow





-(IBAction) keyboardType;

@end


@interface PickerRow: StringRow





-(IBAction) after_build:(id) cell;
-(IBAction) picker;
-(IBAction) numberOfComponentsInPickerView:(id) pickerView;
-(IBAction) on_change:(id) text_field;
-(IBAction) update_text_field:(id) new_value;
-(IBAction) select_picker_value:(id) new_value;
-(IBAction) row_value;

@end


@interface SliderRow: Base





-(IBAction) build_cell:(id) cell;
-(IBAction) layoutSubviews;

@end


@interface StaticRow: StringRow





-(IBAction) after_build:(id) cell;

@end


@interface StringRow: Base





-(IBAction) keyboardType;
-(IBAction) build_cell:(id) cell;
-(IBAction) layoutSubviews;
-(IBAction) setText:(id) text;
-(IBAction) row_value;
-(IBAction) add_callbacks:(id) field;
-(IBAction) on_change:(id) text_field;
-(IBAction) update_text_field:(id) new_value;
-(IBAction) input_accessory_view:(id) input_accessory;
-(IBAction) done_editing;

@end


@interface SubformRow: Base





-(IBAction) build_cell:(id) cell;
-(IBAction) layoutSubviews;
-(IBAction) update_cell:(id) cell;
-(IBAction) display_key_label;

@end


@interface SubmitRow: ButtonRow







@end


@interface SwitchRow: Base





-(IBAction) build_cell:(id) cell;

@end


@interface TemplateRow: Base





-(IBAction) cellEditingStyle;
-(IBAction) build_cell:(id) cell;
-(IBAction) build_new_row:(id) options;
-(IBAction) after_delete;
-(IBAction) move_row_in_list:(id) new_row;
-(IBAction) update_template_rows;

@end


@interface TextRow: Base





-(IBAction) build_cell:(id) cell;
-(IBAction) layoutSubviews;
-(IBAction) dismissKeyboard;

@end


@interface Section: Formotion





-(IBAction) initialize:(id) params;
-(IBAction) generate_row:(id) hash;
-(IBAction) create_row:(id) hash;
-(IBAction) rows;
-(IBAction) index;
-(IBAction) next_section;
-(IBAction) previous_section;
-(IBAction) refresh_row_indexes;
-(IBAction) to_hash;

@end


@interface AnimationChain





-(IBAction) chains;
-(IBAction) start_chain:(id) chain;
-(IBAction) stop_chain:(id) chain;
-(IBAction) initialize;
-(IBAction) wait:(id) duration;
-(IBAction) do_next;
-(IBAction) start;
-(IBAction) loop:(id) times;
-(IBAction) stop;
-(IBAction) abort;

@end


@interface CLLocationCoordinate2D





-(IBAction) distance_to:(id) cl_location_2d;

@end


@interface String





-(IBAction) to_date;
-(IBAction) to_timezone;
-(IBAction) to_duration;

@end


@interface SugarNotFoundException: Exception







@end


@interface Fixnum





-(IBAction) uicolor:(id) alpha;
-(IBAction) nstimezone;
-(IBAction) nth;
-(IBAction) ordinalize;
-(IBAction) before:(id) date;
-(IBAction) ago;
-(IBAction) after:(id) date;
-(IBAction) hence;

@end


@interface NSArray





-(IBAction) to_pointer:(id) type;
-(IBAction) nsindexpath;
-(IBAction) nsindexset;
-(IBAction) uicolor:(id) alpha;
-(IBAction) nsset;

@end


@interface NSCoder





-(IBAction) bool:(id) key;
-(IBAction) double:(id) key;
-(IBAction) float:(id) key;
-(IBAction) int:(id) key;
-(IBAction) point:(id) key;
-(IBAction) rect:(id) key;
-(IBAction) size:(id) key;

@end


@interface NSData





-(IBAction) nsstring:(id) encoding;
-(IBAction) uiimage:(id) scale;

@end


@interface NSDate





-(IBAction) string_with_format:(id) format;
-(IBAction) timezone;
-(IBAction) era;
-(IBAction) utc_offset;
-(IBAction) date_array;
-(IBAction) time_array;
-(IBAction) datetime_array;
-(IBAction) start_of_day;
-(IBAction) end_of_day;
-(IBAction) start_of_week:(id) start_day;
-(IBAction) end_of_week:(id) start_day;
-(IBAction) start_of_month;
-(IBAction) end_of_month;
-(IBAction) days_in_month;
-(IBAction) days_in_year;
-(IBAction) days_to_week_start:(id) start_day;
-(IBAction) local_week_start;
-(IBAction) week_day_index:(id) week_day;

@end


@interface NSIndexPath





-(IBAction) to_a;
-(IBAction) to_s;

@end


@interface IndexPath





-(IBAction) initialize:(id) values;

@end


@interface NSIndexSet





-(IBAction) to_a;

@end


@interface NSString





-(IBAction) nsurl;
-(IBAction) fileurl;
-(IBAction) nsdata:(id) encoding;
-(IBAction) uiimage;
-(IBAction) uiimageview;
-(IBAction) uifont:(id) size;
-(IBAction) uicolor:(id) alpha;
-(IBAction) uilabel:(id) font;
-(IBAction) escape_url;
-(IBAction) unescape_url;
-(IBAction) nstimezone;

@end


@interface NSString





-(IBAction) document;
-(IBAction) cache;
-(IBAction) app_support;
-(IBAction) resource;
-(IBAction) resource_url;
-(IBAction) info_plist;

@end


@interface NSURL





-(IBAction) open;
-(IBAction) nsdata;
-(IBAction) nsurlrequest;

@end


@interface NSUserDefaults





-(IBAction) remove:(id) key;

@end


@interface Object





-(IBAction) to_nsuserdefaults;

@end


@interface NilClass





-(IBAction) to_nsuserdefaults;

@end


@interface NSArray





-(IBAction) to_nsuserdefaults;

@end


@interface NSDictionary





-(IBAction) to_nsuserdefaults;

@end


@interface Numeric





-(IBAction) percent;
-(IBAction) radians;
-(IBAction) in_radians;
-(IBAction) degrees;
-(IBAction) in_degrees;
-(IBAction) pi;
-(IBAction) meters;
-(IBAction) in_meters;
-(IBAction) kilometers;
-(IBAction) in_kilometers;
-(IBAction) miles;
-(IBAction) in_miles;
-(IBAction) feet;
-(IBAction) in_feet;
-(IBAction) bytes;
-(IBAction) kilobytes;
-(IBAction) megabytes;
-(IBAction) gigabytes;
-(IBAction) terabytes;
-(IBAction) petabytes;
-(IBAction) exabytes;
-(IBAction) string_with_style:(id) style;

@end


@interface Symbol





-(IBAction) uicolor:(id) alpha;

@end


@interface Symbol





-(IBAction) sugarcube_look_in:(id) here;
-(IBAction) uidevice;
-(IBAction) uideviceorientation;
-(IBAction) uiinterfaceorientation;
-(IBAction) uiinterfacemask;
-(IBAction) uitextalignment;
-(IBAction) uilinebreakmode;
-(IBAction) uibaselineadjustment;
-(IBAction) uibuttontype;
-(IBAction) uibordertype;
-(IBAction) uicontrolstate;
-(IBAction) uicontrolevent;
-(IBAction) uireturnkey;
-(IBAction) uiactivityindicatorstyle;
-(IBAction) uisegmentedstyle;
-(IBAction) uidatepickermode;
-(IBAction) uicontentmode;
-(IBAction) uianimationcurve;
-(IBAction) uitablestyle;
-(IBAction) uitablerowanimation;
-(IBAction) uitablecellstyle;
-(IBAction) uitablecellaccessorytype;
-(IBAction) uitablecellselectionstyle;
-(IBAction) uitablecellseparatorstyle;
-(IBAction) uialertstyle;
-(IBAction) uiactionstyle;
-(IBAction) uistatusbarstyle;
-(IBAction) uibarmetrics;
-(IBAction) uibarbuttonitem;
-(IBAction) uibarbuttonstyle;
-(IBAction) uikeyboardtype;
-(IBAction) uiautoresizemask;
-(IBAction) uiimagesource;
-(IBAction) uiimagecapture;
-(IBAction) uiimagecamera;
-(IBAction) uiimagequality;
-(IBAction) catimingfunction;
-(IBAction) cglinecap;
-(IBAction) cglinejoin;
-(IBAction) uigesturerecognizerstate;
-(IBAction) uifont:(id) size;
-(IBAction) uifontsize;
-(IBAction) nsdatestyle;
-(IBAction) nsnumberstyle;

@end


@interface Numeric





-(IBAction) milliseconds;
-(IBAction) in_milliseconds;
-(IBAction) seconds;
-(IBAction) in_seconds;
-(IBAction) minutes;
-(IBAction) in_minutes;
-(IBAction) hours;
-(IBAction) in_hours;
-(IBAction) days;
-(IBAction) in_days;
-(IBAction) weeks;
-(IBAction) in_weeks;
-(IBAction) months;
-(IBAction) in_months;
-(IBAction) years;
-(IBAction) in_years;

@end


@interface NSError





-(IBAction) localized;
-(IBAction) to_s;

@end


@interface NSLayoutConstraint





-(IBAction) to_s;

@end


@interface NSNotification





-(IBAction) to_s;
-(IBAction) inspect;

@end


@interface NSSet





-(IBAction) to_s;

@end


@interface NSURL





-(IBAction) to_s;
-(IBAction) inspect;

@end


@interface UIColor





-(IBAction) to_s;
-(IBAction) inspect;

@end


@interface UIEvent





-(IBAction) to_s;

@end


@interface UILabel





-(IBAction) to_s:(id) options;

@end


@interface UITextField





-(IBAction) to_s:(id) options;

@end


@interface UITouch





-(IBAction) to_s;

@end


@interface UIView





-(IBAction) to_s:(id) options;

@end


@interface UIViewController





-(IBAction) to_s;

@end


@interface UIActionSheet





-(IBAction) dummy;

@end


@interface UIActivityIndicatorView





-(IBAction) large;
-(IBAction) white;
-(IBAction) gray;

@end


@interface UIAlertView





-(IBAction) dummy;

@end


@interface UIBarButtonItem





-(IBAction) sugarcube_handle_action:(id) sender;

@end


@interface UIButton





-(IBAction) custom;
-(IBAction) rounded;
-(IBAction) rounded_rect;
-(IBAction) detail;
-(IBAction) detail_disclosure;
-(IBAction) info;
-(IBAction) info_light;
-(IBAction) info_dark;
-(IBAction) contact;
-(IBAction) contact_add;

@end


@interface UIColor





-(IBAction) uicolor:(id) alpha;
-(IBAction) cgcolor;
-(IBAction) invert;
-(IBAction) red;
-(IBAction) green;
-(IBAction) blue;
-(IBAction) alpha;
-(IBAction) to_i;
-(IBAction) to_a;
-(IBAction) hex;
-(IBAction) css_name;
-(IBAction) system_name;

@end


@interface UIControl





-(IBAction) sugarcube_callbacks;
-(IBAction) call;

@end


@interface UIImage





-(IBAction) uicolor:(id) alpha;
-(IBAction) uiimageview;
-(IBAction) nsdata;
-(IBAction) in_rect:(id) rect;
-(IBAction) scale_to_fill:(id) new_size;
-(IBAction) scale_within:(id) new_size;
-(IBAction) scale_to:(id) new_size;
-(IBAction) rounded:(id) corner_radius;
-(IBAction) darken:(id) options;
-(IBAction) rotate:(id) angle_or_direction;
-(IBAction) tileable:(id) insets;
-(IBAction) stretchable:(id) insets;
-(IBAction) alignment_rect:(id) insets;
-(IBAction) masked:(id) mask_image;
-(IBAction) color_at:(id) point;
-(IBAction) at_scale:(id) scale;

@end


@interface UILabel





-(IBAction) fit_to_size:(id) max_size;

@end


@interface UISegmentedControl





-(IBAction) plain:(id) items;
-(IBAction) bordered:(id) items;
-(IBAction) bar:(id) items;
-(IBAction) bezeled:(id) items;

@end


@interface UITextView





-(IBAction) sugarcube_callbacks;

@end


@interface UIView





-(IBAction) first_responder;
-(IBAction) controller;
-(IBAction) unshift:(id) view;
-(IBAction) show;
-(IBAction) hide;
-(IBAction) shake:(id) options;
-(IBAction) dummy;
-(IBAction) uiimage:(id) use_content_size;

@end


@interface UIViewController





-(IBAction) push:(id) view_controller;
-(IBAction) pop;

@end


@interface UINavigationController





-(IBAction) push:(id) view_controller;
-(IBAction) pop:(id) to_view;

@end


@interface UITabBarController





-(IBAction) push:(id) view_controller;

@end


@interface UIWebView





-(IBAction) eval_js:(id) str;

@end


@interface Errbit





-(IBAction) base_url;

@end


@interface Host: NSManagedObject







@end


@interface HostSettingsController: Formotion





-(IBAction) settings_hash;
-(IBAction) initController:(id) host_settings;
-(IBAction) save_button_pressed:(id) sender;

@end


@interface HostSettingsStore





-(IBAction) hosts;
-(IBAction) add_host;
-(IBAction) remove_host:(id) host;
-(IBAction) initialize;
-(IBAction) save;

@end


@interface ProblemController: UIViewController

@property IBOutlet id app_name;
@property IBOutlet id environment;
@property IBOutlet id first_notice_at;
@property IBOutlet id last_notice_at;
@property IBOutlet id message;
@property IBOutlet id notices_count;
@property IBOutlet id resolved;
@property IBOutlet id resolved_at;
@property IBOutlet id where;



-(IBAction) viewDidLoad;
-(IBAction) awakeFromNib;

@end


@interface ProblemsController: UITableViewController





-(IBAction) initWithServer:(id) server;
-(IBAction) viewDidLoad;
-(IBAction) viewWillAppear:(id) animated;
-(IBAction) refresh:(id) sender;

@end


@interface ServersController: UITableViewController





-(IBAction) viewDidLoad;
-(IBAction) viewWillAppear:(id) animated;
-(IBAction) add_button_pressed:(id) sender;
-(IBAction) viewDidAppear:(id) animated;

@end


@interface DynamicLabel: UILabel

@property IBOutlet id message_height_constraint;



-(IBAction) awakeFromNib;
-(IBAction) resizeToFit;
-(IBAction) expectedHeight;

@end
