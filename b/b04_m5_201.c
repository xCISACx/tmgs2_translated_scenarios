section "b04_m5_201"{
    int var0 = Date_GetDateOption(2, 15);
    if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(5, 130) >= 4)){
        System_Call_GS2("B11", "M5", 0);
        Character_Chara_GS2(5, "M5_09F", 0, 1, 0);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        }
    else {
        Character_Chara_GS2(5, "M5_09F", 0);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        System_Call_GS2("B02", "M5", 10);
        }
    if (var0 == 0){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 3, (#1));
        Voice_PlayVoice("B0405201_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "All these colors at the beach are\npretty.\nSo, what should we do?");
        Message_MsgSel("For the time being, let's swim!", "I want to go to the beach hut.", "Let's nap under the parasol.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405201_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIt's my first time swimming with a\ncute mermaid.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 0, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405201_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay, let's go.\nI want to eat roasted turban shells.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405201_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We're resting?\nBut since we're at the beach, we\nshould swim...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0405201_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, why don't you wear a swimsuit\nthat is more like what she's\nwearing?");
        Message_MsgSel("What if you wore it, ｛Chris＊＊｝?", "... Pervert.", "I will, when I become more mature▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405201_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'll be okay wearing one, because I\nwant you to wear one, too▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 2, (#1), 1);
            Voice_PlayVoice("B0405201_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, why did you call me that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405201_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... When you become mature...?\nWill you come with me to the beach\nat that time, too?\nWah, I'm really looking forward to\nit.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0405201_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "There's a weirdly shaped shell\nhere...");
        Message_MsgSel("There are lots here.", "That's red coral.", "It's a strange color, too.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405201_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, you're right.\nI didn't notice that there were this\nmany weirdly shaped shells.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405201_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ehh...\nIf we processed this, we'd probably\nbe able to make something heaps nice\nfrom it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405201_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Is that so...\nI think it's a pretty color, though.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405201_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Is that so...\nI think it's a pretty color,\nthough...\nHmm...");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong?");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405201_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I was thinking of taking it home.\nIf I polish it, it might turn out to\nbe pretty.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh..\nWhat will you do if it doesn't turn\nout to be pretty?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405201_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I won't know unless I try, right?\nI'll do whatever it takes.");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405201_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "After I try and it's still bad, then\nI'll think about what to do....\nI think.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝...?");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405201_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "If it turns out to be pretty after I\npolish it, I'll give it to you as a\npresent.\nLook forward to it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝ seemed\nsomewhat different to how he usually\nis...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
