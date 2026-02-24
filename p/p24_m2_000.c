section "p24_m2_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_01F", 0);
    Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_bunka_jyu(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "This way please!");
        Voice_PlayVoice("P1402000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", ".... This is a quiet place.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. I guess it's surprising.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P1402000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yes. I was able to relax.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Let me bring you a drink.\nWhat is okay with you?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P1402000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Tea.... Thank you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Good!\n｛Shiba＊＊｝ seemed\npleased.)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "This way please!");
        Voice_PlayVoice("P1402000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Hey. You're right in the middle?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes. It's hard trying not to dance.\n｛Shiba＊＊｝!");
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("P1402000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI don't believe you're making any\nprofit from this.");
        Voice_PlayVoice("P1402000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "......");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I've failed...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
