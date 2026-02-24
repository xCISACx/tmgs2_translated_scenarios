section "b04_m7_152"{
    int var0 = Date_GetDateOption(2, 44);
    if (var0 == 0){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0407152_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "As it's our first time playing darts\ntogether, let's play \"count up\" so\nwe can cultivate our skill level.");
        Message_MsgSel("I want you to teach me how to throw darts.", "Let's compete to see who wins!", "Are you going to go easy on me?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407152_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That's good.\nI was brought up to be a dart\nmaster.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407152_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Winner gets to treat a juice.\nI will not let you pay!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(7, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0407152_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You are a little too enthusiastic.\nModerate your enthusiasm next time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0407152_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "...\nBecause of this height and distance,\na speed decrease and the parabola of\nthe arrow...\nIt was good! I got the bull's eye!");
        Message_MsgSel("Amazing! Dead in the center!", "Go on and continue with the triple 20s.", "Please teach me the calculating formula!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 4, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(7, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407152_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It ends up like this if I try and be\na little more serious about it.\nI'm cool, aren't I?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0407152_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I will not be fooled by that.\nIf you throw it here, it will only\nadd to your score.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407152_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Though I do not mind, if you don't\nsolidify your form, you won't be\nable to use it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NE320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0407152_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "If you look at it this way, I'm good\nat the killing game.\nDarts is my forte.");
        Message_MsgSel("You really seem like a professional!", "What? A game?", "Precisely what kind of life did you live?!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(7, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407152_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Is that so?\nThen will you become a professional,\ntoo?\n... Oh, was it a joke?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0407152_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So? The experience is the reward.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 5);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0407152_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It is not an old story.\nThere was a time when I became a\nhermit for a moment.");
            Message_Who(0);
            Message_MsgDisp("主人公", "A hermit...?");
            Voice_PlayVoice("B0407152_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes.\nSince there was no money, I wasn't\nable to go to the store.");
            Voice_PlayVoice("B0407152_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It doesn't embarrass me because I am\na teacher now.\nIn those days, I lived on anything.");
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("B0407152_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Rabbit-san, snake-san, and whatnot,\nthank you....\nJoin hands.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝, I do not\nunderstand you well after all...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
