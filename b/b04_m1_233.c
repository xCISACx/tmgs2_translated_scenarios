section "b04_m1_233"{
    int var0 = Date_GetDateOption(2, 70);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401233_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I didn't want to come here...");
        Message_MsgSel("I felt like a princess▼", "It was a little embarrassing.", "I wanted to ride the white horse.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401233_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I felt like I was on display...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401233_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Now you say it...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401233_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "White or black, I'm not going to\nride it anymore...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401233_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "My head is spinning...");
        Message_MsgSel("Aren't you dizzy from the spinning?", "I'm glad I can go home with a child's mind▼", "Let's go drink coffee, then.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401233_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "The fairy-tale world is spinning...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401233_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'd be glad if we can hurry and go\nhome.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401233_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That would really help.");
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
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401233_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "If the guys at school see this, I'll\nbe going on a trip...");
        Message_MsgSel("Ah, there's a classmate!", "If you rode the white horse?", "As expected, it's a little embarrassing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401233_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, really?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401233_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You finally realized...\nYou were teasing me up until now,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401233_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Did you think that I was riding this\nbecause I like it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you hate it?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401233_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah, I hate it!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that so...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401233_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401233_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hey...\nI'm just explaining it to make\nthings clear, but what I hate is the\nmerry-go-round.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401233_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "A little? Just a little...");
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
