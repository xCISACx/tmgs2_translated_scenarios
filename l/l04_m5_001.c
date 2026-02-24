section "l04_m5_001"{
    int var0;
    int var1;
    if ((Parameter_GetCh1Param(5, 130) == 2) || (Parameter_GetCh1Param(5, 130) == 3)){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0405000_E06300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Sorry.\nI'll just accept your feelings.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh...?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("L0405000_E06400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Calm self... Hmm?\nI mean think about calming yourself\ndown, okay?\nThat should be a clue.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(5, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI wonder what he didn't like about\nit...)");
        }
    else {
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0405000_E06500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Sorry.\nI'll just accept your feelings.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh......?");
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("L0405000_E06600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah...\nI didn't do it to make you make a\nsad face, okay?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0405000_E06700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "But after all...\nI want you to think about it.");
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("L0405000_E06800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Even though I wanna take it, I can't\ntake it.\nMy feelings...");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0405000_E06900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm really grateful for your\nfeelings.\nThanks. I will see you later.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(5, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI wonder what he didn't like about\nit...)");
        }
    }
