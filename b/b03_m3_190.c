section "b03_m3_190"{
    if (Date_ChkDateOpen(61) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR100_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0303190_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "When you think of Fall, you cannot\nforget about this place.\nNow, let us go view the Fall leaves.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 191);
        }
    else if (Date_ChkDateOpen(62) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_TR100_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303190_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "My face is tingling....\nNow then, let us ski.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("B05", "M3", 3) == 0){
            System_Call_GS2("B04", "M3", 192);
            }
        else {
            System_Call_GS2("B05", "M3", 3);
            }
        }
    }
