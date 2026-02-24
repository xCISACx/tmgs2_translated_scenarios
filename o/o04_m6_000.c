section "o04_m6_000"{
    int var0 = 0;
    int var1;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai has amazing spirit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0406000_F00100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Can I have it? Thank you!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0406000_F00200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "U-Umm you dropped it... right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I made him angry...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "1st place in the bread eating\ncompetition!\nThat sounds like you, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(6, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0406000_F00400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "You're giving it to me? Thank you!\nI wanted something sweet!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good! He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0406000_F00500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Is this a joke?\nYou think a guy is going to eat\nsomething that was generally\ndropped?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seems pissed...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else {
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "1st place! You did it, Senpai!\nGood, good!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 5);
                    Character_BlinkStart(6, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0406000_F00700", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Thank you!\nWell then, shall we both eat?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(*Giggles* Good. He seems pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("O0406000_F00800", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Come on....\nDid you forget that you dropped\nthat?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I seem to have made him angry.)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        }
    else if (var0 == 2){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "2nd place... You were so close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0406000_F01000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Can I have it? Thank you!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0406000_F01100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "U-Umm, you dropped that... right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah!\nThat reminds me, I did drop it!)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "2nd place.\nWell, are you a person who tries\ntheir best?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(6, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0406000_F01300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Are you giving it to me? Thank you!\nI wanted something sweet!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Good! He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0406000_F01400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Is this a joke?\nYou think a guy is going to eat\nsomething that was generally\ndropped?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah! I dropped it!)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else {
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You were almost 1st place.\nWell, I think you you did your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(6, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0406000_F01600", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Thank you!\nWell then, shall we both eat?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(*Giggles* Good. He seems pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("O0406000_F01700", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Come on....\nDid you forget that you dropped\nthat?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ah! This is bad! I dropped it!)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        }
    else if (var0 == 3){
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "3rd place is still fine, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0406000_F01900", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Can I have it? Thank you!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0406000_F02000", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "U-Umm, you dropped that... right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I did...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F02100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "3rd place?\nIt's still a halfway result.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(6, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0406000_F02200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Are you giving it to me? Thank you!\nI wanted something sweet!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0406000_F02300", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Is this a joke?\nYou think a guy is going to eat\nsomething that was generally\ndropped?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I seem to have made him angry.)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else {
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F02400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, it's not that bad.\nThough, I think you could have gone\na little more.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(6, 2, (#1));
                    Voice_PlayVoice("O0406000_F02500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Thank you!\nWell then, we should both eat!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("O0406000_F02600", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Come on....\nDid you forget that you dropped\nthat?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Uugh... I'm sorry.)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        }
    else {
        var0 = Run_GameResult();
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 2, 2);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F02700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's disappointing, Senpai.\nBut, maybe your health was bad\ntoday.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("O0406000_F02800", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Can I have it? Thank you!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("O0406000_F02900", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "U-Umm, you dropped that... right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I did...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F03000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You definitely got last place...\nWhatever the circumstances, it\nshouldn't feel like that!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried harder...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(6, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("O0406000_F03100", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Are you giving it to me? Thank you!\nI wanted something sweet!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 0, 8);
                    Voice_PlayVoice("O0406000_F03200", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "... Is this a joke?\nYou think a guy is going to eat\nsomething that was generally\ndropped?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(I seem to have made him angry.)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        else {
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0406000_F03300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You know, maybe you should have\nshown a little more motivation?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried harder...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, right.\nWhat will I do with the red bean bun\nI got from the race?)");
            Message_MsgSel("Divide it in half and give it as a present.", "Don't give anything.");
            switch (Message_TextSelect()){
                case 0:
                if (var0 == 0){
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(6, 2, (#1));
                    Voice_PlayVoice("O0406000_F03400", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Thank you!\nWell then, let's both eat!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He seemed pleased.)");
                    var1 = 0;
                    }
                else if (var0 == 1){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("O0406000_F03500", #1, "");
                    Message_Who(6);
                    Message_MsgDisp("Amachi", "Come on....\nDid you forget that you dropped\nthat?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I did...)");
                    var1 = 1;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll give up on the idea of giving\nit to him.)");
                var1 = 2;
                break ;
                }
            }
        }
    switch (var1){
        case 0:
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #1);
        break ;
        case 1:
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, 1);
        break ;
        case 2:
        Parameter_AddCh1Param(6, 61, 0);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, 0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
