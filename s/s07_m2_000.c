section "s07_m2_000"{
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_??F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
        Voice_PlayVoice("S0702000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... We're here.\nWhat is this huge crowd?");
        Message_Who(0);
        Message_MsgDisp("主人公", "So many people...");
        Voice_PlayVoice("S0702000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The time... We should move together.\nIt'll be a hassle when it's time for\nus to go home.");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 4);
        Character_Chara_GS2(2, "M2_??F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
        Voice_PlayVoice("S0702000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... There are a lot of people.");
        Message_Who(0);
        Message_MsgDisp("主人公", "We're going to get lost.");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S0702000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "That seems to be what a lost person\nwould say.\nToo simple.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ugh... I can't help it.\nI'll try my best not to get lost...");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S0702000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah, good luck.");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_??F", 0);
        Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
        Voice_PlayVoice("S0702000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The crowd's flowing pretty\nquickly....\nHold onto me so we don't get\nseparated.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Anywhere?");
        Voice_PlayVoice("S0702000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Anywhere is fine.");
        Message_Who(0);
        Message_MsgDisp("主人公", "O...kay....");
        Voice_PlayVoice("S0702000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Are you worried?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0702000_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Then hold onto me.\nGive me your hand.");
        Voice_PlayVoice("S0702000_B00900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Okay. Let's go.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, okay...");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
