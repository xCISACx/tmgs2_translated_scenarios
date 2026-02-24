section "b04_m5_024"{
    int var0 = Date_GetDateOption(2, 3);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 2, (#1));
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405024_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "This feels nice～.");
        Message_MsgSel("My heart relaxes when I see the ocean.", "The sea breeze feels good.", "Didn't the sea shore stink?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405024_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I dozed off half-way because I was\ntoo relaxed.\nI wanted the ride to go slower.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0405024_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm, it felt nice, but I wonder if\nanything can be done about my hair\nfeeling sticky.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405024_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it smelled like dried fish.\nIt smells peculiar, doesn't it?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405024_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Even though there is nice weather,\nthe boat is shaking a lot.");
        Message_MsgSel("So a fishing boat has this kind of feeling.", "I don't want to ride this anymore...", "The wind was something else.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405024_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, I feel like I get what you're\ntalking about.\nLike the confusion when in the\nraging seas, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405024_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I wronged you...\nI didn't research well enough.\nSorry for forcing you on here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405024_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nIf the wind was gonna shake the boat\nlike that, I would've wanted it to\ntell me first.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405024_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wasn't your heart throbbing, when we\nwere passing under the bridge?");
        Message_MsgSel("Excessively, because I was with you▼", "It was intense.", "Did we pass under a bridge?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405024_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You really think that way?\nWow, I'm happy～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405024_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's probably because you rarely get\nto look at a bridge from that angle.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405024_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You didn't see? That's too bad...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405024_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You didn't see?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... I didn't notice it.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405024_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Then let's ride this once more!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405024_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Wasn't it a waste?\nI want you to get a taste of that\nheart throbbing feeling.");
                Message_Who(0);
                Message_MsgDisp("主人公", "But it's bad.");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405024_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nBut I wanted to create many memories\nwith you, even if it's just one\nmore.");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405024_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Is it no good?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... It's not no good.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405024_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Thank gosh. Let's go, then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝ is so\nnice...)");
                Message_Who(0);
                Message_MsgDisp("主人公", "(But what did he mean by \"create\nmany memories, even if it's just one\nmore\"...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
