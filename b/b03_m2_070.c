section "b03_m2_070"{
    if (Date_ChkDateOpen(19) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0302070_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Amazing...\nThe cherry blossoms along that\navenue are in full bloom.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, let's go there.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 73);
        }
    else if (Date_ChkDateOpen(20) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0302070_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... It's warm.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "It's spring...");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("B05", "M2", 0) == 0){
            System_Call_GS2("B04", "M2", 72);
            }
        else {
            System_Call_GS2("B05", "M2", 0);
            }
        }
    else if (Date_ChkDateOpen(21) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Message_MsgSel("Let's go to the water fountains.", "I want to walk along the avenue.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302070_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, it seems cooler over there.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 71);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302070_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Walk in the shade, if you can.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 74);
            break ;
            }
        }
    else if (Date_ChkDateOpen(22) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP000_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0302070_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The wind has become much cooler.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, it's become easier to pass\ntime here.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 75);
        }
    else if (Date_ChkDateOpen(23) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_FP000_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0302070_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's cold...\nOur breath is turning white.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "*Hah*... Wow, you're right.");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("B05", "M2", 3) == 0){
            System_Call_GS2("B04", "M2", 76);
            }
        else {
            System_Call_GS2("B05", "M2", 3);
            }
        }
    }
