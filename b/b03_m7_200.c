section "b03_m7_200"{
    if (Date_GetDateOption(5)){
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0307200_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Raise your hand if you brought a\nbathing suit!");
        Message_PauseSkinship();
        Voice_PlayVoice("B0307200_W00100", #1, "");
        Message_Who(0);
        Message_MsgDisp("Students", "Oh!?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sensei only had to say one word...");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 3, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0307200_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, I didn't say much....\nIs there anyone? Sensei's relieved.");
        SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
        Character_BlinkStart(7, 0, (#1), 2);
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 3);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0307200_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's okay if you don't swim.\nNow then, let's disband here for a\nbit.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M7", 201);
        }
    else {
        if (Parameter_ChkSpEvent("B05", "M7", 3) == 1){
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B05", "M7", 3);
            }
        else if (Parameter_ChkSpEvent("B05", "M7", 3) == 0){
            if (Date_ChkDateOpen(16) == 1){
                Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
                Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("", 7, "B0307200_G00400");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "｛主人公｝, let's walk a\nlittle.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay!");
                Message_SkinshipSet(0);
                Message_CloseMsg();
                Screen_WipeOut(2);
                Screen_ClearScreen();
                System_Call_GS2("B04", "M7", 202);
                }
            }
        }
    }
