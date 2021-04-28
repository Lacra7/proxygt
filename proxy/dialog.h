else if (find_command(chat, "menu")) {
            Dialog menu;
            menu.addLabelWithIcon("Proxy Menu", 32, LABEL_BIG);
            menu.addSpacer(SPACER_SMALL);
            menu.addCheckbox("fastdrop_change", "Fast Drop", fastdrop);
            menu.addCheckbox("fasttrash_change", "Fast Trash", fasttrash);
            menu.addSpacer(SPACER_SMALL);
            menu.addCheckbox("vendtype_change", "Vend Type", vendtype);
            menu.addCheckbox("banplayer_change", "Auto Ban People If Say 'Scam'", banscam);
            menu.addCheckbox("fastvend_change", "Fast Vend", fastvend);
            menu.addInputBox("vendamount_change", "Fast Vend Amount Buy", std::to_string(amountvend), 3);
            menu.addSpacer(SPACER_SMALL);
            menu.addCheckbox("passforce_change", "Pass Force", passforce);
            menu.addInputBox("passfstart_change", "Pass Force Start Number", std::to_string(pwd), 10);
            menu.addSpacer(SPACER_SMALL);
            menu.addCheckbox("showcoord_change", "Show Coordinate", showcoord);
            menu.addSpacer(SPACER_SMALL);
            menu.addTextBox("Wrench Mode [P : 1] [K : 2] [B : 3] [T : 4] [A : 5] [TP : 6]");
            menu.addSpacer(SPACER_SMALL);
            menu.addInputBox("wrenchmode_change", "Wrench Mode : ", std::to_string(wrenchmode), 3);
            //menu.addPicker("packetid_change", "Pickup", "Select From Inventory");
            menu.endDialog("options_menu_v", "Apply", "Cancel");
            variantlist_t liste{ "OnDialogRequest" };
            liste[1] = menu.finishDialog();
            g_server->send(true, liste);
            return true;
        }
