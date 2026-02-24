section "b04_m7_185"{
    Background_Bg_GS2("BG_NE680_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_234_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0407185_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "\"... Jene Barini... He...\nhas returned!\"");
    Message_MsgSel("That was a good scene!", "Do you like the lines?", "That's not a very good imitation...");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407185_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "As expected.\nThere are plenty of people here who\nwere emotionally moved, so they will\nremember it for a while.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes! I made a perfect impression!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 5);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407185_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "No, nothing like that.\nIf you express it in words, I think\nthat you can also understand the\ncharacter's emotions.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(7, 3, (#1));
        Voice_PlayVoice("B0407185_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Imitation...\nWas it in the current movie's\nsubtitles?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    }
