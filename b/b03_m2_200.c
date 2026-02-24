section "b03_m2_200"{
    if (Date_ChkDateOpen(15) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0302200_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Well, we'll change and meet back\nhere.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("B05", "M2", 1) == 0){
            System_Call_GS2("B04", "M2", 201);
            }
        else {
            System_Call_GS2("B05", "M2", 1);
            }
        }
    else if (Date_ChkDateOpen(16) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0302200_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "*Phew*...\nThe salty air is sticking to my\nskin...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah...");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 202);
        }
    }
