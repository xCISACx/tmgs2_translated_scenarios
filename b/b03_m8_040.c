section "b03_m8_040"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Character_ChFace(1, 2, 4);
    Character_BlinkStart(8, 2, (#1), 2);
    Background_Bg_GS2("BG_WF400_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0308040_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Alright, it's going to start soon.\nCome on, don't hesitate!\nLet's enter quickly!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, yes!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(8, "NON");
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF401_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0308140_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "It's just the right time.");
    SoundEffect_PlayStream(3, "SS_T_00_041_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_ChkDateOpen(9) == 1){
        System_Call_GS2("B04", "M8", 43);
        }
    }
