section "k01_m8_001"{
    Character_BlinkStart(8, 1, (#1), 1);
    Character_BlinkStart(8, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(8, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝.");
        Music_PlayBGM(0, "MN_C_08_002_D00", 127, 40);
        Character_Chara_GS2(8, "M8_01F", 0);
        Voice_PlayVoice("K0108000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hmm? What?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, it is a birthday present!");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("K0108000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Eh? For me? Is that okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes. Please open it!");
        }
    else if (Parameter_GetCh1Param(8, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝.");
        Music_PlayBGM(0, "MN_C_08_002_D00", 127, 40);
        Character_Chara_GS2(8, "M8_01F", 0);
        Voice_PlayVoice("K0108000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hmm?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, it is a birthday present!");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("K0108000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "For me?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0108000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... What～?\nYou probably want me to treat you to\nsomething, right～?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ahaha, that's not it.\nAnyway, please open it!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝!");
        Music_PlayBGM(0, "MN_C_08_002_D00", 127, 40);
        Character_Chara_GS2(8, "M8_01F", 0);
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0108000_H00500", 8, "K0108000_H00501");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hmm? Ah, ｛主人公｝.\nWhat's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy Birthday!");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("K0108000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... You remembered?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(8, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("K0108000_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Thanks...\nHaving you say it right to my face\nis embarrassing...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha.\nSo, I have a present for you...");
        Character_BlinkStart(8, 0, (#1));
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0108000_H00800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "What the～ You didn't have to go\nthrough all that trouble.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It is fine. Please open it.");
        }
    if (Parameter_GetCh1Param(8, 67) == 1){
        Character_ChFace(0, 0, 11);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0108000_H00900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh! I wanted this!");
        Voice_PlayVoice("K0108000_H01000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "This is spot on! I'll treasure it.\nThanks.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It looks like he's really happy.\nI'm glad!)");
        Parameter_AddCh1Param(8, 61, 3);
        Parameter_AddCh1Param(8, 60, 2);
        }
    else if (Parameter_GetCh1Param(8, 67) == 2){
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Music_StopBGM(0, 40);
        Voice_PlayVoice("K0108000_H01100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh. This helps.\nIt seems like I'd use it often.\nThanks.");
        Character_Chara_GS2(8, "NON");
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, it looks like he's relatively\nhappy.)");
        Parameter_AddCh1Param(8, 61, 1);
        Parameter_AddCh1Param(8, 60, 0);
        }
    else if (Parameter_GetCh1Param(8, 67) == 3){
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0108000_H01200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hmm, this is...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Do you not like it?");
        Voice_PlayVoice("K0108000_H01300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Ah～... Hmm... No. How could I not?\nYou did your best to pick it out for\nme.");
        Voice_PlayVoice("K0108000_H01400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I'll treasure it.");
        Character_Chara_GS2(8, "NON");
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "(It looks like he's not that happy\nabout it...)");
        Parameter_AddCh1Param(8, 61, #1);
        Parameter_AddCh1Param(8, 60, #2);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
