section "q34_m4_000"{
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(4, "M4_01F", 0);
        Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "The final day of the trip is\ntomorrow...\nIt happened so fast.");
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("Q1204000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Indeed!\nAh, I don't want to go to school～...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(That was a fun trip.)");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_01F", 0);
        Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "The final day of the trip is\ntomorrow...");
        Voice_PlayVoice("Q1204000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Kyoto is nice and clean, indeed.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm?");
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("Q1204000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's so easy to see once the road's\nintersection is clean.\nMaybe that's why it feels clean,\nright?");
        Message_Who(0);
        Message_MsgDisp("主人公", "D-Do you think so?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q1204000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I told you!\nYeah, I'd like to visit, again～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(That was a fun trip.)");
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(4, 2, (#1));
        Character_Chara_GS2(4, "M4_01F", 0);
        Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "The final day of the trip is\ntomorrow.");
        Voice_PlayVoice("Q1204000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Not a lot of time...");
        Message_Who(0);
        Message_MsgDisp("主人公", "You're right, it ended so fast.");
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q1204000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nMuch like the time between the two\nof us.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Come again?");
        Character_ChFace(0, 4, 0);
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("Q1204000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Nothing.... *Sigh* ...\nI don't want to go home...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(That was a fun trip.)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    Parameter_AddCh1Param(4, 61, 6);
    Parameter_AddCh1Param(4, 60, 4);
    Parameter_AddCh1Param(4, 62, #6);
    }
