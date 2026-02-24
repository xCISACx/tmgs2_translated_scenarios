section "b04_m5_162"{
    int var0 = Date_GetDateOption(2, 46);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 5, "B0405162_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "Which machine do you want to play\non, ｛主人公｝?");
        Message_MsgSel("I'm excited!", "Alright, leave it to me!", "Let's get lots of candy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405162_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right, there are heaps of machines.\nLet's start off with the slot\nmachines first, then.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405162_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'll leave it to you, then!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0405162_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wow...\nBut you ate heaps of candy\nearlier...\nYour stomach is something else...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405162_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The tokens on the edge looked like\nthey were going to fall.");
        Message_MsgSel("Won't they fall if you shake the machine?", "They really look like they're going to fall.", "We'll get them next time...!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0405162_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's a violation of the rules,\nisn't it?\nWe definitely shouldn't do it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405162_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, because they're shaking\nslightly.\nLook.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405162_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, let's get them!\nWe should be able to get them if we\ncombine our powers!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405162_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That person sitting over there is\ngetting heaps of tokens...\nI wonder what they did to get them\nall.");
        Message_MsgSel("They're a professional.", "Are you that bothered by that person?", "We'd be here all day if we had that many.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405162_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ehh...\nIt's my first time hearing of a\nprofessional arcade player...\nIt's kinda cool.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405162_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, yeah. Sorry...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405162_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Sorry, okay?\nI made you weary over nothing.\nI'll only look at you▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha.\nIsn't it \"I made you 'worry' over\nnothing\"?");
                Voice_PlayVoice("B0405162_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, right.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nYou rarely get angry,\n｛Chris＊＊｝.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405162_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh? What's up with you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "I mean just then I was really harsh\nto you, yet you didn't get angry...\nWhy?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405162_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm.\nI've always been like this, so I\ndon't know why either...");
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("B0405162_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But since I met you, I'm probably\neven more less inclined to get\nangry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405162_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I want to be nicer. Like you...\nI want to be nice to people.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405162_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It would be tough, if you wanted to\nuse it all up.\nLet's try asking them for some.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
