section "p84_m5_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝, here.\nYou don't have to repay me.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7405000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, really? Is that okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nThere are a lot in the Student\nCouncil's stock and I've got\npermission from the teacher.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7405000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You've got skills...\nI'll treasure it. Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was praised by\n｛Chris＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝, sorry to keep\nyou waiting...\nAh!");
            SoundEffect_PlayStream(3, "SS_T_00_234_M00");
            Screen_StartShakePlane(0, 50, 50, 0, 20);
            System_Wait(100);
            SoundEffect_PlayStream(2, "SS_T_00_268_M00");
            Message_Who(0);
            Message_MsgDisp("主人公", "(The tea～!)");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("P7405000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Are you okay? Are you hurt?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry, ｛Chris＊＊｝...\nThat was the last cup of tea...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("P7405000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, really?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... I kind of used too much...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7405000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Is that so?\nHmm, then it can't be helped.\nI'll get some from somewhere else.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P7405000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Do your best cleaning up.\nI'll see you later.");
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, that was a huge failure...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝.\nWe've got the pamphlets.\nHow many do you need?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("P7405000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Can I get 50, for now?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sure, here.\nI can bring them to you next time,\nso just tell me if it's not enough.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7405000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks. You're so dependable.");
            Voice_PlayVoice("P7405000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So dependable that I'd want you to\nbe my private secretary.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was praised by\n｛Chris＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝.\nWe've got the pamphlets.\nHow many do you need?");
            Voice_PlayVoice("P7405000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Can I get 100, for now?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!\nSorry, but that's all of the\npamphlets...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("P7405000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7405000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "100, huh...\nIt looks like you'll need more soon.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P7405000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then the Art Club won't distribute\nany.\nSorry.");
            Voice_PlayVoice("P7405000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If there are people who want one,\nI'll tell them to come here, so\nplease deal with them.");
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* That was a big failure...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry to keep you waiting.\nSo, let's go.");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("P7405000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, where?");
            Message_Who(0);
            Message_MsgDisp("主人公", "We've reserved some space for you,\nso I'm going to help you move it!");
            Voice_PlayVoice("P7405000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, really? But you...\nhave other jobs...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I've done the tough things and I've\nalso gotten permission from the\nPresident, so it's fine.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7405000_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You've got some skills...\nI'd want you to be my personal\nsecretary...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha, I was praised by\n｛Chris＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry, ｛Chris＊＊｝.\nI can't get any space...");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("P7405000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see... What should I do...");
            Message_Who(0);
            Message_MsgDisp("主人公", "You can bring a few to the Student\nCouncil room.\nJust... keep it a secret.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P7405000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "No, we can't do that.\nWe have to get permission first.");
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Right...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7405000_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Anyway, I'll just do what I can with\nthe club.\nSorry for taking up your time.");
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* That was a big failure...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
