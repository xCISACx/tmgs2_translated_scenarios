section "b04_m4_033"{
    int var0 = Date_GetDateOption(2, 6);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0404033_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wow, amazing!\nNever thought a whale shark could be\nthat huge...!");
        Message_MsgSel("They don't feel scary, as they have love.", "It's like we'll get swallowed by them!", "Moving them seems like it would be tough.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404033_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah!\nTheir patterns are also interesting.\nThis guy's cute～...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404033_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right!\nTheir mouths open to swallow then\ngulp!\nStuff like that～!\nI can't get over those kind of\ndynamics.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404033_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Curious as to where?\nBesides, be grateful this guy's in\nfront of you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0404033_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "These guys aren't just massive,\ndon't you get the feeling that their\ncharacter is different?");
        Message_MsgSel("I feel it's not just its being large.", "King of the aquarium.", "I feel he's　watching 　the other fish.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404033_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "No, I told you...\nIn a way, you didn't hear a word I\njust said.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404033_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah! That feeling.\nYou got the expression right.\nWhat kingly qualities!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404033_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nHe magnificently swims just like a\nboss～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_WF330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_330_000", 127, 40);
        Voice_PlayVoice("B0404033_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'll never get bored of watching\nthis.");
        Message_MsgSel("My neck's getting tired.", "I want to look at this forever.", "I feel a little bit burned.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_BlinkStart(4, 2, (#1), 1);
            Voice_PlayVoice("B0404033_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, just sit over 　there while I\nwatch.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404033_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey.\nLet's watch until the closing time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404033_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Burned? You...\nWhy do you inevitably always have\nyour mind on food?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404033_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You? Jealous of... Hmm?");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404033_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Argh!! Sorry!\nYou meant something else...... Huh!?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404033_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What are you saying...!\nWhy are you jealous over fish?\nIdiot!");
                Message_Who(0);
                Message_MsgDisp("主人公", "You're blushing,\n｛Hariya＊＊｝▼");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404033_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Shut up, I only misunderstood it,\nit's embarrassing!");
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404033_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Oh, crap... Hey! Turn your head!\nDon't look at me while laughing!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
