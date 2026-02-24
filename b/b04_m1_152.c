section "b04_m1_152"{
    int var0 = Date_GetDateOption(2, 44);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401152_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's start, then. Is 501 okay?");
        Message_MsgSel("I'd like for you to teach me darts.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401152_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "501 is a game where you start off at\n501 points and aim to get close to 0\npoints...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401152_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What was that? Alright... I accept!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401152_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No.\nI'm always serious about\ncompetitions.\nThat's my style...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401152_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey.\nDespite how you look, you're pretty\ngood at this.");
        Message_MsgSel("That was just a fluke.", "I'm going to aim for the highest points!", "It's from practicing telekinesis.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(1, 3, (#1), 1);
            Voice_PlayVoice("B0401152_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I know. Don't get conceited.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401152_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What?\nFine, the competition starts now\nthen!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401152_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What are you...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401152_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I just noticed, but your step is\nunsteady.\nAre you aiming for some kind of\ncurve?");
        Message_MsgSel("None of your business!", "Thanks for the advice.", "I kind of feel like I have a fever...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401152_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That's good spirit against your\nenemy....\nBut fix your step, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401152_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're welcome.\nRemember the basic form.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401152_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Seriously?\nThen you shouldn't be playing around\nhere, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0401152_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Why didn't you tell me earlier!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0401152_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No, I should have realized it.\nLet's go home?");
                Message_Who(0);
                Message_MsgDisp("主人公", "But our competition...");
                Voice_PlayVoice("B0401152_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Who cares about that?\nI'll take you here another time.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401152_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'd be troubled if you fainted.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401152_A01600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No, see...\nBecause you're kind of like my\nadopted child.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Hm? Adopted child?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401152_A01700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Who cares!? Come on, let's go home?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Sorry, ｛Saeki＊＊｝...)");
                System_GlobalWork(5, 0, 1);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
